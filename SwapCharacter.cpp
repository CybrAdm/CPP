#include <iostream>
#include <cctype>
using namespace std;

string name = "cYBERaDAM"; // CyberAdam
int namesize = size(name);

int main()
{

cout << name << endl;

for (int i = 0; i < namesize; i++)
{
    if (islower(name[i]))
    {
        cout << char(toupper(name[i]));
    }
    else
    {
        cout << char(tolower(name[i]));
    }
}

    return 0;
}