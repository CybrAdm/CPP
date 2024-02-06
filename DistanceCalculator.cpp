#include <iostream>
using namespace std;

int main()
{

float distance;
float speed;
int time;

cout << "Enter speed in m/s: ";
cin >> speed;
while (speed <= 0)
{
    cout << "Invaild value, Enter a new value: ";
    cin >> speed;
}

cout << "Enter time in seconds: ";
cin >> time;
while (time <= 0)
{
    cout << "Invaild value, Enter a new value: ";
    cin >> time;
}

distance = speed * time;
cout << "Distance is " << distance << " km";

    return 0;
}