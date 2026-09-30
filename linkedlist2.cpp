#include <iostream>
#include <cstdlib> // Required for malloc and free
using namespace std;
struct Node {
    int data;
    struct Node* next;
};
int main() {
    struct Node *head = nullptr, *temp = nullptr, *newNode = nullptr;
    int n = 3;
    for (int i = 1; i <= n; i++) {
        // 1. Allocate memory using malloc
        newNode = (struct Node*) malloc(sizeof(struct Node));
        // 2. Assign values
        newNode->data = i * 10;  // 10, 20, 30
        newNode->next = nullptr; // Must explicitly assign nullptr!
        // 3. Link to list
        if (head == nullptr) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    // Traversal
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    // Free allocated memory
    temp = head;
    while (temp != nullptr) {
        struct Node* nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
    return 0;
}