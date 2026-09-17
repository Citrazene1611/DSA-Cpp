#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
int x,y,z;
cout<<"Enter first number :";
cin>>x;
cout<<"second number:";
cin>>y;
cout<<"third number:";
cin>>z;
cout<<"sum is"<<" "<<x+y+z;
return 0;
}

int main()
{
 cout<<"operations:sum(+):substraction(-):product(*):division(/):Modulus(K)"<<endl;
 char x ;
 double a,b;
 cout<<"Enter first number:";
 cin>>a;
 cout<<"enter operation:";
 cin>>x;
 cout<<"Enter second number(0 for modulus):";
 cin>>b;
 cout<< fixed <<setprecision(2);
 switch (x) {
 case '+' :
    cout<<(a+b);
 case '-':
    cout<<(a-b);
 case '*' :
    cout<<(a*b);
 case '/':
     if (b!=0)
   {cout<<(a/b);}
     else
      {cout<<"error";}
 case 'K':
     if (a!=0)
   {b=0;
    cout<<abs(a);}
     else
      {cout<<"error";}}
return 0;
}

int main ()
{
 double a,b;
 cout<<"Enter Length:";
 cin>>a;
 cout<<"Enter Breadth:";
 cin>>b;
 cout<<"Area is "<<" "<<a*b;
 return 0;
}

int main ()
{
    float r,z;
    cout<<"Enter the radius";
    cin>>r;
    z=3.14*r*r;
    cout<<z;
    return 0;
}

int main(){
int x,y,z;
cout<<"Enter first number(x):";
cin>>x;
cout<<"Enter second number(y):";
cin>>y;
z=x+y;
x=z-x;
y=z-y;
cout<<"x is"<<" "<<x<<endl;
cout<<"y is"<<" "<<y;
return 0;
}

int main(){
int x,y;
cout<<"Enter first number(x):";
cin>>x;
cout<<"Enter second number(y):";
cin>>y;
x=x+y;
y=x-y;
x=x-y;
cout<<"x is"<<" "<<x<<endl;
cout<<"y is"<<" "<<y;
return 0;
}

int main(){
int x,z;
cout<<"Enter number(x):";
cin>>x;
z=x%2;
if (x==0)
 {cout<<"neither even nor odd";}
else if(x=!0){
if (z==0)
   {cout<<"even number";}
else if (z=!0)
    {cout<<"odd number";}}
 return 0;
}

int main(){
float x;
cout<<"Enter number:";
cin>>x;
if(x==0)
 {cout<<"It is zero.";}
else{
if (x<0)
   {cout<<"Negative number";}
else if (x>0)
    {cout<<"Positive number";}}
 return 0;
}

int main(){
int x,y;
cout<<"Enter number:";
cin>>x;
cout<<"Enter number:";
cin>>y;
if(x>y)
{cout<<x<<" is greater than "<<y;}
else{cout<<y<<" is greater than "<<x;}
 return 0;
}

int main()
{
int x;
cout<<"Enter your age";
cin>>x;
if(x>=18)
{
 cout<<"You're eligible to vote.";
}
else{cout<<"You can't vote kiddo.";}
 return 0;
}

int main(){
int x;
cout<<"Enter year:";
cin>>x;
if(x%4==0&&x%100!=0||x%400==0)
{cout<<"Leap Year";}
else
{cout<<"Not a leap year";}
return 0;
}


int main(){
char X;
cout<<"Enter alphabet(in lower case)";
cin>>X;
if(X=='a'){cout<<"It is a vowel.";}
else if (X=='e'){cout<<"It is a vowel.";}
else if (X=='i'){cout<<"It is a vowel.";}
else if (X=='o'){cout<<"It is a vowel.";}
else if (X=='u'){cout<<"It is a vowel.";}
else{cout<<"It is a consonant.";}
return 0;
}


int main()
{
int x;
cout<<"Enter a number";
cin>>x;
if(x%5==0&&x%11==0)
{cout<<"Number is divisible by 5,11.";}
else {cout<<"Not divisible by5,11";}
return 0;
}

int main()
{
int a;
cout<<"Enter your marks";
cin>>a;
if(a<100,a>=90){cout<<"A+ grade score";}
else if(a<90,a>=80){cout<<"A  grade score";}
else if(a<80,a>=70){cout<<"B+ grade score";}
else if(a<70,a>=60){cout<<"B  grade score";}
else if(a<60,a>=50){cout<<"C+ grade score";}
else if(a<50,a>=40){cout<<"C  grade score";}
else if(a<40,a>=30){cout<<"D+ grade score";}
else if(a<30,a>=20){cout<<"D  grade score";}
else if(a<20,a>=10){cout<<"E grade score";}
return 0;
}

int main ()
{
 int a;
 cout<<"Enter month number:";
 cin>>a;
 if (a==1){cout<<"Jan";}
 else if (a==2){cout<<"Feb";}
 else if (a==3){cout<<"Mar";}
 else if (a==4){cout<<"Apr";}
 else if (a==5){cout<<"May";}
 else if (a==6){cout<<"Jun";}
 else if (a==7){cout<<"Jul";}
 else if (a==8){cout<<"Aug";}
 else if (a==9){cout<<"Sept";}
 else if (a==10){cout<<"Oct";}
 else if (a==11){cout<<"Nov";}
 else if (a==12){cout<<"Dec";}
 else {cout<<"Input Invalid";}
 return 0;
}

int main ()
{
 int a;
 cout<<"Enter Day number:";
 cin>>a;
 if (a==1){cout<<"Monday";}
 else if (a==2){cout<<"Tuesday";}
 else if (a==3){cout<<"Wednesday";}
 else if (a==4){cout<<"Thursday";}
 else if (a==5){cout<<"Friday";}
 else if (a==6){cout<<"Saturday";}
 else if (a==7){cout<<"Sunday";}
 else {cout<<"Input Invalid";}
 return 0;
}

int main ()
{
 double a,b;
 cout<<"Enter no. of units consumed.";
 cin>>a;
 cout<<"Enter cost per unit:";
 cin>>b;
 cout<<"Your total bill is Rs."<<a*b;
 return 0;
}

int main ()
{
 double a;
 cout<<"Enter your income in per annum format:"<<endl;
 cin>>a;
 // Income tax slabs created as per FY 2025-26/AY 2026-26 by Union of INDIA.
if(a>=0){
if(a<400000,a>=0){cout<<"Your income tax is $"<<(0.05*a);}
else if(a<800000,a>=400001){cout<<"Your income tax is $"<<(0.1*a);}
else if(a<1200000,a>=800001){cout<<"Your income tax is $"<<(1.5*a);}
else if(a<1600000,a>=1200001){cout<<"Your income tax is $"<<(0.2*a);}
else if(a<2000000,a>=1600001){cout<<"Your income tax is $"<<(0.25*a);}
else if(a<2400000,a>=2000001){cout<<"Your income tax is $"<<(0.3*a);}
}
else{cout<<"Invalid Input.";}
return 0;
}

int main ()
{
 double a,b,c;
 cout<<"Enter Cost Price:";
 cin>>a;
 cout<<"Enter Selling Price:";
 cin>>b;
 c=abs(a-b);
 if(a>b){cout<<"Your loss is Rs."<<c;}
 else if(a<b){cout<<"Your profit is Rs."<<c;}
 else if(a=b){cout<<"Neither profit nor loss";}
 else{cout<<"Input Invalid, kindly recheck!";}
 return 0;
}

int main()
{
float a,b,c,d;
cout<<"Enter number:";
cin>>a;
cout<<"Enter number:";
cin>>b;
cout<<"Enter number:";
cin>>c;
cout<<"Enter number:";
cin>>d;
cout<<"Greatest number is-";
if (a >= b && a >= c && a >= d) {
        cout << a;
    }
    else if (b >= a && b >= c && b >= d) {
        cout << b;
    }
    else if (c >= a && c >= b && c >= d) {
        cout << c;
    }
    else {
        cout << d;
    }
return 0;
}

int main ()
{
 cout<<"=========================================\n"<<"\n"<<"    PROFESSIONAL CALCULATOR\n"<<"\n"<<"=========================================\n";
 cout<<"\n";
 cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Square\n7. Cube\n8. Power\n9. Percentage\n10. Exit\n";
 cout<<"\n";
 cout<<"==========================================";
 cout<<"\n";
 int choice;
 double a,b;
 cout<<"Enter Your Choice : ";
 cin>>choice;
 cout<<"\n";
 switch (choice){
 case 1:{
 cout<<"\nEnter First Number :";
 cin>>a;
 cout<<"\n";
 cout<<"Enter Second Number :";
 cin>>b;
 cout<<"\n";cout<<"Result="<<a+b;
 cout<<"\n";
  cout<<"\n=========================================";
 cout<<"\n";break;
 }
 case 2:{
 cout<<"\nEnter First Number :";
 cin>>a;
 cout<<"\n";
 cout<<"Enter Second Number :";
 cin>>b;
 cout<<"\n";
 cout<<"Result="<<a-b;
 cout<<"\n";
  cout<<"\n=========================================";
 cout<<"\n";break;
 }
 case 3:{
 cout<<"\nEnter First Number :";
 cin>>a;
 cout<<"\n";
 cout<<"Enter Second Number :";
 cin>>b;
 cout<<"\n";
 cout<<"Result="<<a*b;
 cout<<"\n";
  cout<<"\n=========================================";
 cout<<"\n";break;
 }
 case 4:{
 cout<<"\nEnter First Number :";
 cin>>a;
 cout<<"\n";
 cout<<"Enter Second Number :";
 cin>>b;
 cout<<"\n";
 {if(b!=0){cout<<"Result="<<a/b;
 cout<<"\n";
  cout<<"\n=========================================";
 cout<<"\n";
 }
 else {cout<<"Division by zero is invalid operation.";cout<<"\n";
  cout<<"\n=========================================";
 cout<<"\n";}break;}
 case 5:{
 cout<<"\nEnter First Number :";
 cin>>a;
 cout<<"\n";
 cout<<"Enter Second Number :";
 cin>>b;
 cout<<"\n";cout<<"Result="<<abs(a*b);
 cout<<"\n";
  cout<<"\n=========================================";
 cout<<"\n";break;
 }
 case 6:{
 cout<<"\nEnter Number :";
 cin>>a;
 cout<<"\n";
 cout<<"Result="<<pow(a,2);
 cout<<"\n";
  cout<<"\n=========================================";
 cout<<"\n";break;
 }
 case 7:{
 cout<<"\nEnter Number :";
 cin>>a;
 cout<<"\n";
 cout<<"Result="<<pow(a,3);
 cout<<"\n";
  cout<<"\n=========================================";
 cout<<"\n";break;
 }
 case 8:{
 cout<<"\nEnter First Number :";
 cin>>a;
 cout<<"\n";
 cout<<"Enter Second Number :";
 cin>>b;
 cout<<"\n";
 cout<<"Result="<<pow(a,b);
 cout<<"\n";
  cout<<"\n=========================================";
 cout<<"\n";break;
 }
 case 9:{
 cout<<"\nEnter First Number :";
 cin>>a;
 cout<<"\n";
 cout<<"Enter Second Number :";
 cin>>b;
 cout<<"\n";
 cout<<"Result="<<((a/b)*100);
 cout<<"\n";
  cout<<"\n========================================="; cout<<"\n";break;}
case 10:{cout<<"Thanks for Visiting.";
         cout<<"\n";
 cout<<"\n=========================================";
 cout<<"\n";
 break;}
default:{cout<<"Invalid choice.";
           cout<<"\n";
  cout<<"\n=========================================";
 cout<<"\n";
          }
 }
return 0;
}}

