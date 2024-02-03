#include <iostream>
using namespace std;

int main()
{
int points = 0;
int answers[3];
int nums[3][5] = {
    {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15}
    };


cout<< "Sequance 1: 1,2,?,4,5"<< endl;
cout<< "Guess the missing number: ";
cin>> answers[0];

if (answers[0]==nums[0][2]){
    cout<< "Correct! you got a point."<< endl;
    points++;
}
else{
    cout<< "Incorrect."<< endl;
}

cout<< "Sequance 2: 6,7,8,9,?"<< endl;
cout<< "Guess the missing number: ";
cin>> answers[1];

if(answers[1]==nums[1][4]){
cout<< "Correct! you got a point."<< endl;
        points++;
}
else{
    cout<< "Incorrect."<< endl;
}

cout<< "Sequance 3: ?,12,13,14,15"<< endl;
cout<< "Guess the missing number: ";
cin>> answers[2];

if(answers[2]==nums[2][0]){
cout<< "Correct! you got a point."<< endl;
        points++;
}
else{
    cout<< "Incorrect."<< endl;
}

cout << "Your total points is " << points << "/3";

    return 0;
}