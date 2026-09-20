#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string j, string k) {
    if (j.length() != k.length()) return false;

    unordered_map<char, char> mapJtoK;
    unordered_map<char, char> mapKtoJ;

    for (int i = 0; i < j.length(); i++) {
        char charJ = j[i];
        char charK = k[i];

        // Check if charJ was already mapped to a different character
        if (mapJtoK.count(charJ) && mapJtoK[charJ] != charK) {
            return false;
        }

        // Check if charK was already mapped from a different character
        if (mapKtoJ.count(charK) && mapKtoJ[charK] != charJ) {
            return false;
        }

        // Establish 1-to-1 mapping
        mapJtoK[charJ] = charK;
        mapKtoJ[charK] = charJ;
    }

    return true;
}

int main() {
    string j, k;
    cout << "Enter First Word: ";
    cin >> j;
    cout << "Enter Second Word: ";
    cin >> k;

    if (isIsomorphic(j, k)) {
        cout << "Isomorphic" << endl;
    } else {
        cout << "Not Isomorphic" << endl;
    }

    return 0;
}