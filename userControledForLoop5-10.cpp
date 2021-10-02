// This program demonstrate a user controlled for loop.
#include <iostream>
using namespace std;

int main()
{
  // Declaring the variables for starting the squared and ending it.
  int minNumber, maxNumber;

  // Get the minimun and maximun values to display.
  cout << "I will display a table of nubers and their squares.\nEnter the starting number: ";
  cin >> minNumber;
  cout << "Enter the ending number: ";
  cin >> maxNumber;

  // Display the table.
  cout << "Number   Number Squared\n---------------------------\n";

  for (int num = minNumber; num <= maxNumber; num++)
    cout << num << "\t\t" << (num * num) << endl;

  return 0;

}

// At the begining it did not run. I thought it was due to a missing semicolon or the way is was formated
// but after closer inspection I saw that is was a cout with the incorrect operators instead of cout <<
// it had cout >> (like cin). 
