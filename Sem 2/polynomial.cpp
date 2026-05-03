#include <iostream>
using namespace std;

class Node {
public:
    int coeff, exp;
    Node* next;

    Node(int c, int e) {
        coeff = c;
        exp = e;
        next = nullptr;
    }
};

// INSERT (sorted descending by exponent)
Node* insert(Node* head, int coeff, int exp) {
    Node* newNode = new Node(coeff, exp);

    if (head == nullptr || head->exp < exp) {
        newNode->next = head;
        return newNode;
    }

    Node* temp = head;

    while (temp->next != nullptr && temp->next->exp > exp)
        temp = temp->next;

    // combine like terms
    if (temp->next != nullptr && temp->next->exp == exp) {
        temp->next->coeff += coeff;
        delete newNode;
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
    }

    return head;
}

// DISPLAY
void display(Node* head) {
    if (!head) {
        cout << "0\n";
        return;
    }

    while (head != nullptr) {
        cout << head->coeff << "x^" << head->exp;
        if (head->next) cout << " + ";
        head = head->next;
    }
    cout << endl;
}

// ADDITION
Node* addPoly(Node* p1, Node* p2) {
    Node* result = nullptr;

    while (p1 && p2) {
        if (p1->exp > p2->exp) {
            result = insert(result, p1->coeff, p1->exp);
            p1 = p1->next;
        }
        else if (p1->exp < p2->exp) {
            result = insert(result, p2->coeff, p2->exp);
            p2 = p2->next;
        }
        else {
            result = insert(result, p1->coeff + p2->coeff, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }
    }

    while (p1) {
        result = insert(result, p1->coeff, p1->exp);
        p1 = p1->next;
    }

    while (p2) {
        result = insert(result, p2->coeff, p2->exp);
        p2 = p2->next;
    }

    return result;
}

// SUBTRACTION (p1 - p2)
Node* subtractPoly(Node* p1, Node* p2) {
    Node* result = nullptr;

    while (p1 && p2) {
        if (p1->exp > p2->exp) {
            result = insert(result, p1->coeff, p1->exp);
            p1 = p1->next;
        }
        else if (p1->exp < p2->exp) {
            result = insert(result, -p2->coeff, p2->exp);
            p2 = p2->next;
        }
        else {
            result = insert(result, p1->coeff - p2->coeff, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }
    }

    while (p1) {
        result = insert(result, p1->coeff, p1->exp);
        p1 = p1->next;
    }

    while (p2) {
        result = insert(result, -p2->coeff, p2->exp);
        p2 = p2->next;
    }

    return result;
}

// MULTIPLICATION
Node* multiplyPoly(Node* p1, Node* p2) {
    Node* result = nullptr;

    for (Node* i = p1; i != nullptr; i = i->next) {
        for (Node* j = p2; j != nullptr; j = j->next) {

            int newCoeff = i->coeff * j->coeff;
            int newExp = i->exp + j->exp;

            result = insert(result, newCoeff, newExp);
        }
    }

    return result;
}

// DELETE TERM BY EXPONENT
Node* deleteTerm(Node* head, int exp) {
    if (!head) return nullptr;

    if (head->exp == exp) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;

    while (temp->next && temp->next->exp != exp)
        temp = temp->next;

    if (temp->next) {
        Node* del = temp->next;
        temp->next = del->next;
        delete del;
    }

    return head;
}

// MAIN
int main() {
    Node* p1 = nullptr;
    Node* p2 = nullptr;

    // Polynomial 1: 5x^2 + 4x + 2
    p1 = insert(p1, 5, 2);
    p1 = insert(p1, 4, 1);
    p1 = insert(p1, 2, 0);

    // Polynomial 2: 3x^2 + 2x + 1
    p2 = insert(p2, 3, 2);
    p2 = insert(p2, 2, 1);
    p2 = insert(p2, 1, 0);

    cout << "Polynomial 1: ";
    display(p1);

    cout << "Polynomial 2: ";
    display(p2);

    Node* sum = addPoly(p1, p2);
    cout << "Addition: ";
    display(sum);

    Node* diff = subtractPoly(p1, p2);
    cout << "Subtraction: ";
    display(diff);

    Node* mul = multiplyPoly(p1, p2);
    cout << "Multiplication: ";
    display(mul);

    cout << "After deleting x^1 term from P1: ";
    p1 = deleteTerm(p1, 1);
    display(p1);

    return 0;
}