#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
struct node
{
public:
    int data;
    node *next;

public:
    node(int val)
    {
        data = val;
        next = nullptr;
    }
};
int main()
{
    int j, val;
    cout << "Enter length of linked list:" << endl;
    cin >> j;
    node *head = nullptr;
    node *temp = nullptr;
    for (int i = 0; i < j; i++)
    {
        cout << "Enter data" << endl;
        cin >> val;
        node *newnode = new node(val);
        if (head == nullptr)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return 0;
}