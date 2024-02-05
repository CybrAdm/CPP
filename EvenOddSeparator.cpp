#include <iostream>
using namespace std;

int main()
{

int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int numsize = sizeof(nums) / sizeof(nums[0]);


cout << "EVEN numbers: "<<endl;
for (int i = 0; i < numsize; i++)
{

if (nums[i] % 2 != 0)
    {
        continue;
    }

    cout << nums[i];

    if (i < 8)
{
cout << ", ";
}

}


cout << endl << "ODD numbers: "<<endl;
for (int x = 0; x < numsize; x++)
{
    if (nums[x] % 2 == 0)
    {
        continue;
    }
    
    cout << nums[x];

if (x < 7)
{
cout << ", ";
}

}

    return 0;
}