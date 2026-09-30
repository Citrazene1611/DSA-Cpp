#include <iostream>
#include <string>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};
int main()
{
    Node *head = nullptr;
    Node *temp = nullptr;
    int n;
    cout << "Enter Number of Nodes.";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int value;
        cout << "Enter data for node " << i << ": ";
        cin >> value;

        Node *newNode = new Node(value);

        if (head == nullptr) // if list is empty  
        {
            head = newNode;
            temp = newNode;
        }

        else         // if list is not empty and contains nodes 
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
    cout << "\nCreated Linked List: ";
    temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    temp = head;
    while (temp != nullptr)
    {
        Node *nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    return 0;
}