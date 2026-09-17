#include <iostream>
using namespace std;
int main() {
int numbers[2][3];
int numbers2[2][3];
int sum[2][3];
cout << "Enter 6 numbers: " << endl;
// Storing user input in the array
for (int i = 0; i < 2; ++i) {
for (int j = 0; j < 3; ++j) {
cin >> numbers[i][j];
}
}
cout << "The numbers are: " << endl;
// Printing array elements
for (int i = 0; i < 2; ++i) {
for (int j = 0; j < 3; ++j) {
cout << "numbers[" << i << "][" << j << "]: " << numbers[i][j] <<
endl;
}
}
cout << "Enter 6 numbers: " << endl;
// Storing user input in the array2
for (int i = 0; i < 2; ++i) {
for (int j = 0; j < 3; ++j) {
cin >> numbers2[i][j];
}
}
for (int i = 0; i < 2; ++i) {
for (int j = 0; j < 3; ++j) {
sum[i][j]=numbers[i][j]+numbers2[i][j];
}
}
for (int i = 0; i < 2; ++i) {
for (int j = 0; j < 3; ++j) {
cout << "sum[" << i << "][" << j << "]: " <<sum[i][j] <<
endl;
}
}
return 0;
}
