#include <iostream>
using namespace std;

// Creating a node
class Node {
public:
    int value;
    Node* next;
};

int main() {
    Node* head;
    Node* node1 = NULL;//This means node1 is currently pointing to nothing, indicating the absence of a valid node.
    Node* node2 = NULL;
    Node* node3 = NULL;

    // Allocate 3 nodes in the heap
    node1 = new Node();
    node2 = new Node();
    node3 = new Node();

    // Assign values
    node1->value = 11;
    node2->value = 22;
    node3->value = 33;

    // Connect nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Print the linked list values
    head = node1;
    while (head != NULL) {
        cout << head->value << " ";
        head = head->next;
    }

    // Don't forget to free the allocated memory
    delete node1;
    delete node2;
    delete node3;

    return 0;
}
