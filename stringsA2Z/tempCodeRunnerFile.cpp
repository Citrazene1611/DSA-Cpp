#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int n = str.length();
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (str[start] != str[end])
        {
            cout << "The string is not a palindrome." << endl;
            return 0;
        }
        start++;
        end--;
    }
    cout << "The string is a palindrome." << endl;
    return 0;
}