#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <stack>
using namespace std;
struct node
{
public:
    int data;
    node *next;
    node *prev;

public:
    node(int val, node *next1, node *back)
    {
        data = val;
        next = next1;
        prev = back;
    }

public:
    node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
node *convert2DLL(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int k = 1; k < arr.size(); k++)
    {
        node *temp = new node(arr[k], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}
node *rev(node *head)
{
    node *current = head;
    node *newHead = nullptr;
    while (current != nullptr)
    {
        node *next = current->next;
        current->next = current->prev;
        current->prev = next;
        newHead = current;
        current = next;
        return newHead;
    }
    int print(node * head)
    {
        node *t = head;
        while (t != NULL)
        {
            cout << t->data << endl;
            t = t->next;
        }
        return 0;
    }
    int main()
    {
        vector<int> Q = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 14, 16, 17, 18, 19};
        node *k = convert2DLL(Q);
        print(rev(k));
        return 0;
    }