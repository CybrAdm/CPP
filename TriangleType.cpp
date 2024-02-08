#include <iostream>
#include <math.h>
using namespace std;


float a = pow(a, 2);
float b = pow(b, 2);
float c = pow(c, 2);


int main()
{

cout << "Enter the first side of the triangle: ";
cin >> a;
while (a <= 0)
{
    cout << "Invalid value." << endl;
    cout << "Enter the first side of the triangle: ";
    cin >> a;
}


cout << "Enter the second side of the triangle: ";
cin >> b;
while (b <= 0)
{
    cout << "Invalid value." << endl;
    cout << "Enter the second side of the triangle: ";
    cin >> b;
}

cout << "Enter the third side of the triangle: ";
cin >> c;
while (c <= 0)
{
    cout << "Invalid value." << endl;
    cout << "Enter the third side of the triangle: ";
    cin >> c;
}


if (a + b == c && a + c == b && c + b == a)
{
    cout << "This triangle is Right-angle triangle.";
}
else if (a + b > c && c + b > a && a + c > b)
{
    cout << "This triangle is Acute triangle.";
}
else if (a + b < c && c + b < a && a + c < b)
{
    cout << "This triangle is Obtuse triangle.";
}

    return 0;
}