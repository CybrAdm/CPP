#include <iostream>
using namespace std;


void calc(int num1, int num2, string op)
{

if (op == "+")
{
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
}
else if (op == "-")
{
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
}
else if (op == "*")
{
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
}
else if (op == "/")
{
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
}
else
{
    cout << "This operation is invalid.";
}

}


int main()
{

calc(5, 6, "*");

    return 0;
}