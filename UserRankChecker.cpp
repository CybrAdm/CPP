#include <iostream>
using namespace std;

int main()
{

int points;

cout << "Enter your points: ";
cin >> points;

if(points >= 1000)
{
    cout << "You have " << points << ", You are at the FIRST rank.";
}

else if(points < 1000 && points >= 500)
{
    cout << "You have " << points << ", You are at the SECOND rank.";
}

else if(points < 500)
{
cout << "You have " << points << ", You are at the THIRD rank.";
}

    return 0;
}