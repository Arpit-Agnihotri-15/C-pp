#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// DISPLAY
void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// SEARCH
bool search(Node* head, int key) {
    while (head != nullptr) {
        if (head->data == key) return true;
        head = head->next;
    }
    return false;
}

// INSERT AT BEGINNING
Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    return newNode;
}

// INSERT AT END
Node* insertAtEnd(Node* head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) return newNode;

    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// INSERT AT INDEX (nth position)
Node* insertAtIndex(Node* head, int index, int value) {
    if (index == 0)
        return insertAtBeginning(head, value);

    Node* temp = head;
    int i = 0;

    while (temp != nullptr && i < index - 1) {
        temp = temp->next;
        i++;
    }

    if (temp == nullptr) {
        cout << "Index out of range\n";
        return head;
    }

    Node* newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

// INSERT AFTER VALUE
Node* insertAfterValue(Node* head, int target, int value) {
    Node* temp = head;

    while (temp != nullptr && temp->data != target)
        temp = temp->next;

    if (temp == nullptr) {
        cout << "Value not found\n";
        return head;
    }

    Node* newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

// DELETE FROM BEGINNING
Node* deleteFromBeginning(Node* head) {
    if (!head) return nullptr;

    Node* temp = head;
    head = head->next;
    delete temp;

    return head;
}

// DELETE FROM END
Node* deleteFromEnd(Node* head) {
    if (!head) return nullptr;

    if (!head->next) {
        delete head;
        return nullptr;
    }

    Node* temp = head;
    while (temp->next->next != nullptr)
        temp = temp->next;

    delete temp->next;
    temp->next = nullptr;

    return head;
}

// DELETE AT INDEX (nth)
Node* deleteAtIndex(Node* head, int index) {
    if (!head) return nullptr;

    if (index == 0)
        return deleteFromBeginning(head);

    Node* temp = head;
    int i = 0;

    while (temp != nullptr && i < index - 1) {
        temp = temp->next;
        i++;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Index out of range\n";
        return head;
    }

    Node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;

    return head;
}

// DELETE AFTER VALUE
Node* deleteAfterValue(Node* head, int target) {
    Node* temp = head;

    while (temp != nullptr && temp->data != target)
        temp = temp->next;

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Deletion not possible\n";
        return head;
    }

    Node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;

    return head;
}

// MAIN
int main() {
    Node* head = nullptr;

    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);

    display(head);

    head = insertAtIndex(head, 1, 15);
    display(head);

    head = insertAfterValue(head, 20, 25);
    display(head);

    head = deleteAtIndex(head, 2);
    display(head);

    head = deleteAfterValue(head, 20);
    display(head);

    head = deleteFromBeginning(head);
    display(head);

    head = deleteFromEnd(head);
    display(head);

    cout << (search(head, 20) ? "Found\n" : "Not Found\n");

    return 0;
}