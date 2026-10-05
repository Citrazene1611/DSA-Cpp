#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
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
// delete head
node *deletehead(node *head)
{
    node *temp = head;
    if (temp == NULL)
    {
        return head;
    }
    node *back = head;
    temp = temp->next;
    head = temp;
    head->next = back->next->next;
    head->prev = nullptr;
    delete back;

    return head;
}
// delete tail
node *deletetail(node *head)
{
    node *temp = head;
    if (temp == NULL)
    {
        return head;
    }
    else if (temp->next == NULL)
    {
        delete temp;
        return head;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    node *nxt = temp->next;
    temp->next = nullptr;
    delete nxt;
    return head;
}
// delete index
node *deleteindex(node *head, int index)
{
    node *temp = head;
    /*index=1=no prev
    index n= no next
    index =1 in a single element dl = neither prev nor next
    */
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == index)
        {
            break;
        }
        temp = temp->next;
    }
    node *back = temp->prev;
    node *front = temp->next;
    if (back == NULL && front == NULL)
    {
        delete temp;
        return NULL;
    }
    else if (back == NULL)
    {
        deletehead(head);
        return head;
    }
    else if (front == NULL)
    {
        deletetail(head);
        return head;
    }
    else
    {
        back->next = temp->next;
        front->prev = temp->prev;
        delete temp;
    }
    return head;
}
// insertion at head
node *inserthead(node *head, int val)
{
    if (head == NULL)
    {
        node *k = new node(val, nullptr, nullptr);
        return k;
    }
    else
    {

        node *k = new node(val);
        k->next = head;
        k->prev = nullptr;

        return k;
    }
}
// insertion at tail
node *inserttail(node *head, int val)
{
    if (head == NULL)
    {
        node *k = new node(val, nullptr, nullptr);
        return k;
    }
    else
    {

        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        node *k = new node(val, nullptr, temp);
        temp->next = k;
    }
    return head;
}
// insertion at kth index
node *insertk(node *head, int index, int val)
{
    node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == index)
        {
            break;
        }
        temp = temp->next;
    }
    node *back = temp->prev;
    node *front = temp->next;
    if (back == NULL && front == NULL)
    {
        node *k = new node(val, nullptr, temp);
    }
    else if (back == NULL)
    {
        inserthead(head, val);
    }
    else if (front == NULL)
    {
        inserttail(head, val);
    }
    else
    {
        node*k= new node(val,temp->next,temp);
        temp->next=k;
        temp=temp->next;
        temp->prev=k;
    }
    return head;
}
int main()
{
    vector<int> Q = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 14, 16, 17, 18, 19};
    node *k = convert2DLL(Q);
    node *t = insertk(k, 5,99);
    while (t != NULL)
    {
        cout << t->data << endl;
        t = t->next;
    }
    return 0;
}