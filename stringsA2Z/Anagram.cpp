#include<iostream>
#include<string>
using namespace std;

int main() {
    string j, k;
    cout << "Enter First Word: "<<endl;
    cin >> j;
    cout << "Enter Second Word: "<<endl;
    cin >> k;

    if (k.length() != j.length()) {
        cout << "INVALID INPUTS." << endl;
        return 0;
    }

    bool isAnagram = true;

    for (int i = 0; i < k.length(); i++) 
    {
        bool foundMatch = false;

        for (int q = 0; q < j.length(); q++) 
        {
            if (k[i] == j[q]) {   
                j[q] = '$';      
                foundMatch = true;
                break;            
            }
        }
        if (!foundMatch) 
        {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram) {
        cout << "1 (True - Anagram)" << endl;
    } else {
        cout << "0 (False - Not Anagram)" << endl;
    }

    return 0;
}