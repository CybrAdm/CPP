#include <iostream>
using namespace std;

int main()
{

int num;
cout << "Choose a number between 1-10: ";
cin >> num;

switch (num)
{
case 1:
case 2:
case 3:
cout << "Congrats! You have won a TV.";
    break;
case 4:
case 5:
case 6:
cout << "Congrats! You have won a mobile.";
    break;
default:
cout << "Sorry, You haven't won anything.";
}

    return 0;
}