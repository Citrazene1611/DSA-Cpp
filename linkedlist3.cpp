#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

int main() {
    // Create nodes
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    Node* temp = head;
    int i = 1;

    while (temp != nullptr) {
        // Printing 'temp' gives the memory address of the Node object
        cout << "Node " << i << " Memory Address : " << temp << "\n";
        cout << "         Data           : " << temp->data << "\n";
        cout << "         Next Address   : " << temp->next << "\n\n";
 
        temp = temp->next;
        i++;
    }

    return 0;
}
