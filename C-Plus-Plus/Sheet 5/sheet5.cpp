#include <iostream>
using namespace std;
// 1 -
	// 1 - write a statement that displays the address of the variable testvar:
	//int main() {
	//	int testvar;
	//	cout << &testvar;
	//	return 0;
	//}

	// 2 - the content of two pointers that point to adjacent variables of type float differ by 1 element or 4 bytes 

	// 3 - a pointer is (c - a variable for storing addresses)

	// 4 - write expressions for the following :
		// a - the address of var : &var
		// b - the contents of the variable pointed to by var : *var 
		// c - the variable var used as a reference argument : void function(int &var)
		// d - the data type pointer-to-char : char*

	// 5 - an address is a (constant value), while a pointer is a (variable)

	// 6 - write a definition for a variable of type pointer-to-float : float* ptr

	// 7 - pointers are useful for referring to a memory address that has no (identifier)

	// 8 - if a pointer testPtr points to a variable testVar, write a statement that represents the contents of testVar but does not use it's name :
	//int main() {
	//	int testVar = 5;
	//	int* testPtr = &testVar;
	//	cout << *testPtr;
	//	return 0;
	//}

// 2 -
	// program that takes a group of numbers from a user and putting them into an array then return the avarage :
	//int main() {
	//	int count;
	//	cout << "How many numbers you want to enter?: ";
	//	cin >> count;

	//	float* numbers = new float[count];
	//	float sum = 0.0;
	//	for (int i = 0; i < count; i++) {
	//		cout << "Enter the numbers: " << (i + 1) << ": ";
	//		cin >> *(numbers + i);
	//	}

	//	for (int i = 0; i < count; i++) {
	//		sum += *(numbers + i);
	//	}

	//	float average = sum / count;
	//	cout << "The Avarage is: " << average << endl;

	//	delete[] numbers;
	//	return 0;
	//}

// 3 - 

	//void addArrays(float* ptr1, float* ptr2, float* ptr3, int size) {
	//	for (int i = 0; i < size; i++) {
	//		*(ptr3 + i) = *(ptr1 + i) + *(ptr2 + i);
	//	}
	//}

	//int main() {
	//	const int size = 5;
	//	float arr1[size] = {1.1, 2.2, 3.3, 4.4, 5.5};
	//	float arr2[size] = {10.1, 20.2, 30.3, 40.4, 50.5};
	//	float arr3[size];

	//	addArrays(arr1, arr2, arr3, size);

	//	cout << "Result is: ";
	//	for (int i = 0; i < size; i++) {
	//		cout << arr3[i] << " ";
	//	}

	//	return 0;
	//}