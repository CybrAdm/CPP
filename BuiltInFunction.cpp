#include <iostream>
#include <algorithm>
using namespace std;


int nums[] = {10, -20, 30, -100, 100, -50};
int numsTwo[] = {10, 20, 10, 10, 13, 15, 100, 20, 10};
int numSize  = size(nums);
int numTwosize = size(numsTwo);
int checkminnum = 0;
int checkmaxnum = 0;
int checkcoutnum = 0;
int number = 10;


int main()
{

for (int i = 0; i < numSize; i++)
{
    if (nums[i] > checkmaxnum)
    {
        checkmaxnum = nums[i];
    }
    else if (nums[i] < checkminnum)
    {
        checkminnum = nums[i];
    }
}

for (int x = 0; x < numTwosize; x++)
{
    if (numsTwo[x] == number)
    {
        checkcoutnum++;
    }    
}

cout << "The maximum number is " << checkmaxnum << endl;
cout << "The minumum number is " << checkminnum << endl;
cout << number << " has been found " << checkcoutnum << " times";

    return 0;
}