#include <iostream>
using namespace std;

void computeAverage(const int anArray[], const int arraySize);
void printArray(const int anArray[], const int size);

int main(){

  const int SIZE = 3;
  const int score[SIZE] = {90, 90, 90};

  computeAverage(score, SIZE);
  printArray(score, SIZE);



  return 0;

}


int computeAverage(const int anArray[], const int arraySize) {
	// declare the local integer variable average and initialize to 0
	int average = 0;
	// create a for iteration control structure to add all values in the array
	// the intermediate results are stored in average
	for (average = 0; average < arraySize; average++)
		anArray += average;

	// return the average value
	return average / arraySize;
}

void printArray(const int anArray[], const int size) {
	for (int i = 0; i < size; i++)
		cout << anArray[i] << "\t";
	cout << endl;
}
