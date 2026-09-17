#include<iostream>
#include <string>
#include<iomanip>
using namespace std;
int main()
{
 long int b,d,e=0,f,g,h,i;
 unsigned int a,j=0,G=0,count=0;
 char c,y,Y,N,n,k,l,m;
 int amt[6]={0,50000,500,1000,8000,700};
 string items[6] = {"hello","Laptop", "Mouse", "Keyboard", "Printer", "Pen Drive"};
 string bill[100];
 string purchase[100];
 string net[100];
 string amt2[100];
cout << "========================================\n";
cout << "         SHOP BILLING SYSTEM\n";
cout << "========================================\n";
cout << "\nProduct List\n";
cout << "1. Laptop Rs.50000\n";
cout << "2. Mouse Rs.500\n";
cout << "3. Keyboard Rs.1000\n";
cout << "4. Printer Rs.8000\n";
cout << "5. Pen Drive Rs.700\n";
cout << "\nEnter Product Choice : ";
cin>>a;
if(a>5||a<1)
{
cout<<"\nI/P invalid.RETRY";
}
else
{
cout << "Enter Quantity : ";
cin >> b;
bill[j]=b;                   //b is qty of good
items[a]= purchase[j];       // purchase is name of item
d=amt[a];                    // d is price of one
to_string(amt[a])=amt2[j];
e=b*d;
G=G+e;
net[j]=e;
j++;                   // e is total price
}
cout << "\nAdd More Items (Y/N) : ";
cin >> c;
do
{
cout << "\nEnter Product Choice : ";
cin>>a;
if(a>5||a<1)
{
cout<<"\nI/P invalid.RETRY";
}
else
{
cout << "Enter Quantity : ";
cin >> b;
bill[j]=b;                   //b is qty of good
items[a]= purchase[j];       // purchase is name of item
d=amt[a];                    // d is price of one
to_string(amt[a])=amt2[j];
e=b*d;
G=G+e;
net[j]=e;                       // total
j++;
cout << "\nAdd More Items (Y/N) : ";
cin >> c;
}
}
while(c=='Y'||c=='y');
//cout<<e;//test
if(G >= 100000)
f = 20;
else if(G >= 50000)
f= 15;
else if(G >= 20000)
f = 10;
else if(G >= 10000)
f = 5;
else
f = 0;
g=G*((100-f)/100);
//cout<<g;//test
h=G*(0.18);
i=h+g;
//cout<<i<<e<<h<<g;//test
 cout<<"\n\n================ FINAL BILL ================\n";
 cout << "---------------------------------------------------------------\n";
cout << "\nTotal Amount : Rs. " << G;
cout << "\nDiscount (" <<f<< "%) : Rs. " <<G*f/100;
cout << "\nNet Amount : Rs. " << g;
cout << "\nGST (18%) : Rs. " << h;
cout << "\nAmount Payable : Rs. " << i;

cout <<
"\n===============================================================\n";
return 0;
}
