#include <iostream>
using namespace std;


int main()
{
int birthday;
cout<< "Enter your birthday: ";
cin >> birthday; // User's birthday input

int age_in_years = 2024 - birthday; // Calculate user's age in years
int age_in_months = age_in_years * 12; // Calculate user's age in months
int age_in_days = age_in_months * 365; // Calculate user's age in days
int age_in_hours = age_in_days * 24; // Calculate user's age in hours
int age_in_minutes = age_in_hours * 60; // Calculate user's age in minutes
int age_in_seconds = age_in_minutes * 60; // Calculate user's age in seconds

cout<<"Your birthday in: " <<  birthday << "\n"; // User's birthday output
cout<<"Your age in years is: " << age_in_years << " years old." << "\n"; // User's age in years output
cout<<"Your age in months is " << age_in_months << " months." << "\n"; // User's age in months output
cout<<"Your age in days is " << age_in_days << " days." << "\n"; // User's age in days output
cout<<"Your age in hours is " << age_in_hours << " hours." << "\n"; // User's age in hours output
cout<<"Your age in minutes is " << age_in_minutes << " minutes." << "\n"; // User's age in minutes output
cout<<"Your age in seconds is " << age_in_seconds << " seconds."; // User's age in seconds output

  return 0;
}