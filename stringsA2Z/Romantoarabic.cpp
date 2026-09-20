#include <iostream>
#include <string>
#include <vector>
using namespace std;

int romanToInt(string s) {
    vector<int> values(s.size(), 0);

    for (int i = 0; i < s.size(); i++) {
        switch (s[i]) {
            case 'I': values[i] = 1; break;
            case 'V': values[i] = 5; break;
            case 'X': values[i] = 10; break;
            case 'L': values[i] = 50; break;
            case 'C': values[i] = 100; break;
            case 'D': values[i] = 500; break;
            case 'M': values[i] = 1000; break;
            default:
                cout << "Invalid Roman numeral!\n";
                return 0;
        }
    }

    int total = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i + 1 < s.size() && values[i] < values[i + 1]) {
            total -= values[i];
        } else {
            total += values[i];
        }
    }
    return total;
}

int main() {
    string k;
    cout << "Enter a Roman numeral: ";
    cin >> k;

    cout << "Arabic value: " << romanToInt(k) << endl;
    return 0;
}
