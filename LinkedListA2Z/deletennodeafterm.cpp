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
node *remove(node *head, int n,int m)
{
    node *temp = head;
    int cnt = 0;
    node *prev = NULL;
    if (head == NULL)
    {
        head = head->next;
        return head;

        if (n == 1)
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
        if (cnt == n)
        {
            for(int i=0;i<m;i++)
            {
            prev->next = prev->next->next;
            free(temp);
            }
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
int main()
{
    vector<int> j = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    node *head = convertarrtoll(j);
    head = remove(head,12,3);
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}