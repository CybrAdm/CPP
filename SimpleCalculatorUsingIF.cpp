#include <iostream>
using namespace std;

int main()
{

int num1;
int num2;
int operation;

cout << "Enter the first number: ";
cin >> num1;
cout << "Enter the second number: ";
cin >> num2;
cout << "======================\n";
cout << "[1] Adding\n[2] Subtracting\n[3] Multiplication\n[4] Dividing\n";
cout << "======================\n";
cout << "Choose the operation number: ";
cin >> operation;

if (operation == 1)
{
    cout << "The result is: " << num1 + num2;
}

else if (operation == 2)
{
        cout << "The result is: " << num1 - num2;
}

else if (operation == 3)
{
        cout << "The result is: " << num1 * num2;
}

else if (operation == 4)
{
        cout << "The result is: " << num1 / num2;
}

else
{
    cout << "Operation isn't valid.";
}

    return 0;
}