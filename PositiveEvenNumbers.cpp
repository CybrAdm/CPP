#include <iostream>
using namespace std;

int main()
{

int result = 0;
int nums[] = {10, 20, -20, 13, 30, -30, 40};
int numsize = sizeof(nums) / sizeof(nums[0]);

for (int i = 0; i < numsize; i++)
{
    if (nums[i] > 0 && nums[i] % 2 == 0)
    {
        result += nums[i];
    }
}

    cout << "Result is: " << result << endl;

    return 0;
}