#include <iostream>
using namespace std;

int main()
{

int price;
int years;
cout << "Enter the price of the product: ";
cin >> price;
cout << "Enter the years you had worked: ";
cin >> years;

switch(years)
{

case 1:
case 2:
case 3:
cout << "You will have 50 Dollars discount.";
cout << "The product price will be " << price - 50;
break;

case 4:
case 5:
case 6:
cout << "You will have 100 Dollars discount.";
cout << "The product price will be " << price - 100;
break;

default:
cout << "You will have 150 Dollars discount.";
cout << "The product price will be " << price - 150;

}

    return 0;
}