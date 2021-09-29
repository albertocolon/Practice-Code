#include <iostream>
using namespace std;

int main()
{
  const int SIZE = 3;
  int grade[SIZE] = {99, 97, 98};
  int average = 0;

  for (int index = 0; index < SIZE; index++)
  average += grade[index] / 3;

  cout << "The average of all elements in the array are: " << average << endl;


return 0;
}
