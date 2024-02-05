#include <iostream>
using namespace std;

int main()
{

int values[5];
int input;

cout << "Enter five values: " << endl;

for (int i = 4; i > -1; i--)
{
    cin >> input;
values[i] = input;
}

cout << "The reversed values: " << endl;

for (int i = 0; i < 5; i++)
{
    cout << values[i] << endl;
}

    return 0;
}