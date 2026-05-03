#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = this;
    }
};

// DISPLAY
void display(Node* head) {
    if (!head) return;

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(HEAD)\n";
}

// SEARCH
bool search(Node* head, int key) {
    if (!head) return false;

    Node* temp = head;
    do {
        if (temp->data == key) return true;
        temp = temp->next;
    } while (temp != head);

    return false;
}

// INSERT AT END
Node* insertAtEnd(Node* head, int value) {
    Node* newNode = new Node(value);

    if (!head) return newNode;

    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;

    return head;
}

// INSERT AT BEGINNING
Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = new Node(value);

    if (!head) return newNode;

    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;

    return newNode;
}

// INSERT AT INDEX
Node* insertAtIndex(Node* head, int index, int value) {
    if (index == 0)
        return insertAtBeginning(head, value);

    Node* temp = head;
    int i = 0;

    while (i < index - 1 && temp->next != head) {
        temp = temp->next;
        i++;
    }

    Node* newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

// DELETE FROM BEGINNING
Node* deleteFromBeginning(Node* head) {
    if (!head) return nullptr;

    if (head->next == head) {
        delete head;
        return nullptr;
    }

    Node* last = head;
    while (last->next != head)
        last = last->next;

    Node* temp = head;
    head = head->next;
    last->next = head;

    delete temp;
    return head;
}

// DELETE FROM END
Node* deleteFromEnd(Node* head) {
    if (!head) return nullptr;

    if (head->next == head) {
        delete head;
        return nullptr;
    }

    Node* temp = head;
    while (temp->next->next != head)
        temp = temp->next;

    Node* delNode = temp->next;
    temp->next = head;

    delete delNode;
    return head;
}

// DELETE AT INDEX
Node* deleteAtIndex(Node* head, int index) {
    if (!head) return nullptr;

    if (index == 0)
        return deleteFromBeginning(head);

    Node* temp = head;
    int i = 0;

    while (i < index - 1 && temp->next != head) {
        temp = temp->next;
        i++;
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

    head = insertAtBeginning(head, 5);
    display(head);

    head = insertAtIndex(head, 2, 15);
    display(head);

    head = deleteAtIndex(head, 2);
    display(head);

    head = deleteFromBeginning(head);
    display(head);

    head = deleteFromEnd(head);
    display(head);

    cout << (search(head, 20) ? "Found\n" : "Not Found\n");

    return 0;
}