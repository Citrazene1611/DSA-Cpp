
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int choice, qty;
char more;
string productName[5] =
{
"Laptop",
"Mouse",
"Keyboard",
"Printer",
"Pen Drive"
};
float productPrice[5] =
{
50000,
500,
1000,
8000,
700
};
string billProduct[100];
float billPrice[100];
int billQty[100];
float billTotal[100];
int count = 0;
float totalAmount = 0;
cout << "========================================\n";
cout << "         SHOP BILLING SYSTEM\n";
cout << "========================================\n";
do

{
cout << "\nProduct List\n";
cout << "1. Laptop Rs.50000\n";
cout << "2. Mouse Rs.500\n";
cout << "3. Keyboard Rs.1000\n";
cout << "4. Printer Rs.8000\n";
cout << "5. Pen Drive Rs.700\n";
cout << "\nEnter Product Choice : ";
cin >> choice;
if(choice < 1 || choice > 5)
{
cout << "Invalid Choice!\n";
continue;
}
cout << "Enter Quantity : ";
cin >> qty;
billProduct[count] = productName[choice-1];
billPrice[count] = productPrice[choice-1];
billQty[count] = qty;
billTotal[count] = productPrice[choice-1] * qty;
totalAmount += billTotal[count];
count++;
cout << "\nAdd More Items (Y/N) : ";
cin >> more;
} while(more=='Y' || more=='y');
// Discount
float discountPercent;
if(totalAmount >= 100000)
discountPercent = 20;
else if(totalAmount >= 50000)
discountPercent = 15;
else if(totalAmount >= 20000)
discountPercent = 10;
else if(totalAmount >= 10000)
discountPercent = 5;

else
discountPercent = 0;
float discountAmount = totalAmount * discountPercent / 100;
float netAmount = totalAmount - discountAmount;
// GST
float gst = netAmount * 18 / 100;
float payableAmount = netAmount + gst;
// Print Bill
cout << "\n\n";
cout << "===============================================================\n";
cout << "                         FINAL BILL\n";
cout << "===============================================================\n";
cout << left
<< setw(15) << "Product"
<< setw(12) << "Price"
<< setw(10) << "Qty"
<< setw(15) << "Item Total" << endl;
cout << "---------------------------------------------------------------\n";
for(int i=0; i<count; i++)
{
cout << left
<< setw(15) << billProduct[i]
<< setw(12) << billPrice[i]
<< setw(10) << billQty[i]
<< setw(15) << billTotal[i]
<< endl;

}
cout << "---------------------------------------------------------------\n";
cout << fixed << setprecision(2);
cout << "\nTotal Amount : Rs. " << totalAmount;
cout << "\nDiscount (" << discountPercent << "%) : Rs. " << discountAmount;
cout << "\nNet Amount : Rs. " << netAmount;
cout << "\nGST (18%) : Rs. " << gst;
cout << "\nAmount Payable : Rs. " << payableAmount;

cout <<
"\n===============================================================\n";
return 0;
}
