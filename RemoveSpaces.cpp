#include <iostream>
#include <cctype>
using namespace std;

string name = "C y b e r A d a m"; // CyberAdam
int namesize = size(name);

int main()
{

cout << name << endl;

for (int i = 0; i < namesize; i++)
{
    if (isspace(name[i]))
    {
        continue;
    }
    
    cout << name[i];
}

    return 0;
}