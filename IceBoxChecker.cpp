#include <iostream>
using namespace std;


void icebox(string msg, string item)
{
if (item == "Cocacola"|| item == "Juice" || item == "Banana" || item == "Apple")
{
    cout << item << ", " << msg << endl;
}
else
{
    cout << "I can't find " << item << " in the Icebox";
}
}


int main()
{

icebox("is cold.", "Cocacola");
icebox("is fresh.", "Juice");
icebox("is fresh.", "Banana");
icebox("is fresh.", "Apple");
icebox("is delicious.", "Cake");

    return 0;
}