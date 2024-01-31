#include <iostream>
using namespace std;

int main()
{

int num;
cout << "Enter a number: ";
cin >> num;

if(num % 2 == 0)
{
    cout<< "The number is: " << num << endl;
cout<< "This number is EVEN.";
}
else
{
    cout<< "The number is: " << num << endl;
    cout<< "This number is ODD.";
}

    return 0;
}