/*
* CECS 2203, Computer Programming I Lab
* Fall 2021, Sec. 04
* Date: September 21, 2021
* Topic: Introduction to arrays
* File name: arrays.cpp
*/

#include <iostream>
using namespace std; // using namespace::std;

int getNumber(int);
void changeValues(int[], const int); // when arrays are passed to methods ALWAYS include the size!
void printArray(const int[], const int);

int main() {
	// An array is a collection of values of the same data type
	// They are stored in consecutive memory locations. Therefore,
	// once created the size of an array CANNOT be changed. This
	// property is sometimes refered to as size inmutability.

	// declare an integer array with spaces for three numbers
	int numbers[3] = {0}; // {0} initializes all values to 0
	// arrays can also be declared with the initial values
	int otherNumbers[] = { 1,2,3 };

	// Values in an array are accessed using the array name and the index
	// where the value is stored. The first index is ALWAYS 0.
	// The highest valid index number is size of the array - 1

	// print the values stored in numbers
	cout << "cout << numbers << endl; prints:" << numbers << endl;
	// The name of an array holds the memory address of the first element of the array
	cout << "cout << otherNumbers << endl; prints:" << otherNumbers << endl;
	// to print the values in an array use a for loop
	// The size of an array can be computed using the sizeof method, BUT ONLY
	// within the scope where the array was declared
	// unsigned means only positive values can be stored
	unsigned int sizeNumbers = sizeof(numbers) / sizeof(int);
	// sizeNumbers = -1;  the read value will be incorrect!
	cout << "The value of sizeNumbers is " << sizeNumbers << endl;
	cout << "The size of numbers is " << sizeNumbers << endl;
	// use the size to print the values
	cout << "The values stored in the array numbers are:\n\t";
	/*for (int index = 0; index < sizeNumbers; index++)
		cout << numbers[index] << "\t";
	cout << endl;*/ // call a method instead!
	printArray(numbers, sizeNumbers);
	changeValues(numbers, sizeNumbers);
	cout << "After returning from changeValues, the values stored in the array numbers are:\n\t";
	printArray(numbers, sizeNumbers);
	sizeNumbers = sizeof(otherNumbers) / sizeof(int);
	cout << "The values stored in the array otherNumbers are:\n\t";
	/*for (int index = 0; index < sizeNumbers; index++)
		cout << otherNumbers[index] << "\t";
	cout << endl;*/
	printArray(otherNumbers, sizeNumbers);
	// test is a method call can be used to declare an array
	int givenNumbers[] = { getNumber(1),getNumber(2),getNumber(3) };
	// recall that the call to a method which returns a value represents the return value!
	sizeNumbers = sizeof(givenNumbers) / sizeof(int);
	cout << "The values stored in the array givenNumbers are:\n\t";
	/*for (int index = 0; index < sizeNumbers; index++)
		cout << givenNumbers[index] << "\t";
	cout << endl;*/
	printArray(givenNumbers, sizeNumbers);
	// call the change values funtion
	changeValues(givenNumbers, sizeNumbers);
	cout << "After returning from changeValues, the values stored in the array givenNumbers are:\n\t";
	printArray(givenNumbers, sizeNumbers);

	return 0;
}

int getNumber(int count) {
	int number = 0;
	cout << "Enter integer value #" << count << ": ";
	cin >> number;
	return number;
}

// Arrays are always passed as reference variables
// If the size of the array is not to be changed,
// it is a good practice to label it as constant
void changeValues(int anArray[], const int size) {
	// size++; -> results in error as the value size is labeled constant
	for (int i = 0; i < size; i++)
		anArray[i] += 15;
}

// Arrays are always passed as reference variables
// If the contents and size of the array are not to be changed,
// it is a good practice to label them as constant
void printArray(const int anArray[], const int size) {
	for (int i = 0; i < size; i++)
		cout << anArray[i] << "\t";
	cout << endl;
}
