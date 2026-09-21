#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
/*int permutataion(string k)
{
     int n=k.length();
    vector<vector<char>> answer(n, vector<char>(n));
     for (int i=0;i<n;i++)
     {
        answer[i][0]=k[i];
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                answer[i][j]=k[j];
            }
            else                            ""WRONG METHOD N X N MATRIX WILL NOT STORE N! PERMUTATIONS""
            {
                continue;
            }

        }
     }
     cout<<"The permutation of the string is: ";
    for (int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            cout<<answer[i][j]<<"  ";
        }
        cout<<endl;
     }
    return 0;
}*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void generatePermutations(int idx, string &str, vector<string> &ans) {
    if (idx == str.length()) {
        ans.push_back(str);
        return;
    }

    for (int i = idx; i < str.length(); i++) {
        swap(str[idx], str[i]);            
        generatePermutations(idx + 1, str, ans); 
        swap(str[idx], str[i]);            
    }
}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    vector<string> permutations;
    generatePermutations(0, str, permutations);

    cout << "The permutations of the string are:" << endl;
    for (const string &p : permutations) {
        cout << p << endl;
    }
    return 0;
}