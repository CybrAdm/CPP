#include <iostream>
using namespace std;

int main()
{

int guessnum = 7;
int trys = 0;
int input;

cout << "Guess a number between 1 and 10: ";

while (true)
{
cin >> input;

    if (input == guessnum)
    {
        
        cout << "Your guess is correct!";
        break;
    }
    else
    {
        trys++;
        cout << "Your guess is incorrect."<< endl;
    }

    if (trys == 3)
    {
        cout << "You have no more trys.";
        break;
    }
    
}

    return 0;
}