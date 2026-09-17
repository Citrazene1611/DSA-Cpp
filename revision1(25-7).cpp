#include <iostream>
#include <string>
#include <climits> // for range of datatypes
#include <cfloat>  // for functions of c
using namespace std;
/*
int test()
{
    // example 2
    int test_score;
    cout <<"Enter score.";
    cin>>test_score;
    // Checks the condition and prints the corresponding string literal inline
    std::cout << "Result: " << ((test_score >= 33) ? "Passed" : "Failed") << std::endl;

    return 0;

}
int main()
{
//example 1
cout << "Size of char = " << sizeof(char) << " bytes" << endl;
cout << "Size of int = " << sizeof(int) << " bytes" << endl;
cout << "Size of float = " << sizeof(float) << " bytes" << endl;
cout << "Size of double = " << sizeof(double) << " bytes" << endl;
cout << "Size of long int = " << sizeof(long int) << " bytes" << endl;
cout << "Size of long long int = " << sizeof(long long int) << " bytes"
<< endl;
cout << "Size of bool = " << sizeof(bool) << " bytes" << endl;
cout << "This is example 1."<<endl;
test();
return 0;
}
int main ()
{
    int a=12; // 12=01100
    int b=25; // 25=11001
    cout <<a<<endl;
    cout <<b<<endl;
    cout <<(a&b)<<endl; //8=0
    cout <<(a|b)<<endl;
    cout <<(a^b);
    return 0;
}

#include <iostream>
int main() {
// declaring two integer variables
int num = 212, i;
// Shift Right Operation
cout << "Shift Right:" << endl;
// Using for loop for shifting num right from 0 bit to 3 bits
for (i = 0; i < 4; i++) {
cout << "212 >> " << i << " = " << (212 >> i) << endl;
}
// Shift Left Operation
cout << "\nShift Left:" << endl;
// Using for loop for shifting num left from 0 bit to 3 bits
for (i = 0; i < 4; i++) {
cout << "212 << " << i << " = " << (212 << i) << endl;
}
int num1=35, num2=25;
cout <<"\nComplement operator"<<endl;
cout << "~(" << num1 << ") = " << (~num1) << endl;
cout << "~(" << num2 << ") = " << (~num2) << endl;
return 0;
}

#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;
int main()
{
cout << "CHAR Size = " << sizeof(char) << " Byte" << endl;
cout << "CHAR Range = " << CHAR_MIN << " to " << CHAR_MAX << endl <<
endl;
cout << "INT Size = " << sizeof(int) << " Byte" << endl;
cout << "INT Range = " << INT_MIN << " to " << INT_MAX << endl << endl;
cout << "FLOAT Size = " << sizeof(float) << " Byte" << endl;
cout << "FLOAT Range = " << FLT_MIN << " to " << FLT_MAX << endl << endl;
cout << "DOUBLE Size = " << sizeof(double) << " Byte" << endl;
cout << "DOUBLE Range = " << DBL_MIN << " to " << DBL_MAX << endl;
return 0;
}

int main  ()
{
    int a=25;
    char z=a;
    cout << a <<endl;
    char ch = 'A';
int num = ch;
cout << "Character = " << ch << endl;
cout << "ASCII Value = " << num << endl;
    return 0 ;
}

int main ()
{
 for(int i=0;i<=10000;i++)//for(initialisation,condition,termination)
 {
  cout<<i<<endl;
 }
 return 0;
}

int main ()
{
 int a,b=0,c,k,z=0;
 cout<<"Enter the number:"<<endl;
 cin>>a;

 for(c=0;c<=a;c++)
 {
 z=z+c;
 }
 for(k=a;k>0;k--)
 {
  b=b+k;
 }
 cout<<z<<endl;
 cout<<b;
 return 0;
}

int main()
{
//for(variable:collection){body of the loop.}
int A[10]={1,2,3,4,5,6,7,8,9,10};
for(int a:A)
{cout<<a<<endl;}
return 0;
}

int main ()
{
 int k=0,z=0,n;
 cout<<"Enter number:"<<endl;
 cin>>n;
 while(k<=(n-1))//while loop executes one extra iteration because condition is evaluated outside the body of loop
 {
  k+=1;
  z=z+k;
 }
 cout<<z<<endl;
 return 0;
}
*/
int main()
{
 int a,b=0;
 cout<<"Enter number:"<<endl;
 cin>>a;
 do
 {
    a=a-1;
    b=b+a;
 }
 while(a>0);
 cout<<b<<endl;
 return 0;
}
