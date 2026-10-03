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

public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
node *convertarrtoll(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp; // mover->temp
    }
    return head;
}
// deletetion of head ;
node *removeHEAD(node *head)
{
    if (head == NULL)
    {
        return head;
    }
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
// deletetion of tail
node *removeTail(node *head)
{
    node *temp = head;
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}
// delete kth element
node *remove(node *head, int k)
{
    node *temp = head;
    int cnt = 0;
    node *prev = NULL;
    if (head == NULL)
    {
        head = head->next;
        return head;

        if (k == 1)
        {
            head = head->next;
            free(head);
            return head;
        }
        else
        {
            cout << "Illegitimate Demand";
            return NULL;
        }
    }
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
// insert at head
node *inserthead(node *head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    return temp;
}
// insert at last
node *insertlast(node *head, int data)
{
    if (head == NULL)
    {
        return new node(data);
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node *newnode = new node(data);
    temp->next = newnode;
    return head;
}
// insertion at kth position
node *insertk(node *head, int k, int data)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new node(data);
        }
        else
        {
            cout << "ERROR";
            return NULL;
        }
    }

    else
    {
        node *temp = head;
        int cnt = 0;
        while (temp != NULL)
        {
            cnt++;
            if (cnt == k - 1)
            {
                node *n = new node(data);
                n->next = temp->next;
                temp->next = n;
                break;
            }
            temp = temp->next;
        }
    }
    return head;
}
//insertion before value 
node *insertbeforer(node *head, int data1, int data)
{
    if (head == NULL)
    {
       return NULL;
    }

    else
    {
        node *temp = head;
        int cnt = 0;
        while (temp->next != NULL)
        {
            cnt++;
            if (temp->next->data==data)
            {
                node *n = new node(data);
                n->next = temp->next;
                temp->next = n;
                break;
            }
            temp = temp->next;
        }
    }
    return head;
}
int main()
{
    vector<int> j = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    node *head = convertarrtoll(j);
    head = insertk(head, 21, 2);
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        // cout << temp << " ";
        temp = temp->next;
    }
    return 0;
}