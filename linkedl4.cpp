#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct node // can use class for OOPS
{
public:
    int data;
    node *next;

public:
    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    node(int data1) // another type of constructor
    {
        data = data1;
        next = nullptr;
    }
};

int main()
{

    node *k = new node(2, nullptr); // k here is pointer
    cout << k << endl;
    node l = node(12);
    cout << l.data << "  " << l.next << endl;
    return 0;
}
