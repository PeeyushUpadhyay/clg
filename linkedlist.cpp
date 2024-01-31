#include <iostream>

// Define the structure for a node in the linked list
struct Node {
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int value) : data(value), next(nullptr) {}
};

// Function to print the elements of the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

// Function to insert a new node at the beginning of the linked list
Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    return newNode;
}

// Function to insert a new node at the end of the linked list
Node* insertAtEnd(Node* head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        return newNode;
    }

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
    return head;
}

// Function to delete a node with a given value from the linked list
Node* deleteNode(Node* head, int value) {
    if (head == nullptr) {
        return nullptr;
    }

    if (head->data == value) {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->data != value) {
        current = current->next;
    }

    if (current->next != nullptr) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }

    return head;
}

// Function to delete the entire linked list
void deleteLinkedList(Node* head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Creating an empty linked list
    Node* head = nullptr;

    // Inserting nodes at the beginning
    head = insertAtBeginning(head, 3);
    head = insertAtBeginning(head, 2);
    head = insertAtBeginning(head, 1);

    // Printing the linked list
    std::cout << "Linked List after inserting at the beginning:" << std::endl;
    printLinkedList(head);

    // Inserting nodes at the end
    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 5);

    // Printing the linked list
    std::cout << "Linked List after inserting at the end:" << std::endl;
    printLinkedList(head);

    // Deleting a node
    head = deleteNode(head, 3);

    // Printing the linked list after deletion
    std::cout << "Linked List after deleting a node:" << std::endl;
    printLinkedList(head);

    // Deleting the entire linked list
    deleteLinkedList(head);

    // Printing the linked list after deletion
    std::cout << "Linked List after deleting the entire list:" << std::endl;
    printLinkedList(head);

    return 0;
}
