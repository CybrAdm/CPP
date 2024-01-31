#include <iostream>
using namespace std;

int main()
{

int num1;
int num2;
int num3;

cout << "Enter the first number: ";
cin >> num1;
cout << "Enter the second number: ";
cin >> num2;
cout << "Enter the third number: ";
cin >> num3;

if(num1>num2 && num1>num3)
{

cout << "The greatest number is the first number.";
}

else if(num2>num1 && num2>num3)
{
    cout << "The greatest number is the second number.";
}

else if(num3>num1 && num3>num2)
{
    cout << "The greatest number is the third number.";
}

    return 0;
}