// MemoryReview.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};
void Square(int& num) {
	num = num * num;

}

void Double(int* num) {
	if (num != nullptr) {
		*num = *num * 2;
	}
}

int main()
{
	int num = 5;
	int& numRef = num;
	cout << "orignal value :" << num << endl;

	numRef = 7;

	cout << "after reference change: " << num << endl;
	//both changed because they're the same thing with different names

	cout << "address of num: " << &num << endl;
	cout << "address of numRef: " << &numRef << endl;
	//yeah theyre the same variable

	Square(num);

	cout << "after Square function: " << num << endl;
	int* numPtr = nullptr;
	numPtr = &num;

	cout << "pointer value address: " << numPtr << endl;
	//where num is in the memory
	cout << "dereferenced pointer value: " << *numPtr << endl;

	Double(numPtr);

	cout << "after Double function from pointer: " << *numPtr << endl;
	cout << " original variable after Double funtion: " << num << endl;
	//yeah cuz the pointer let me change the actual number

	return 0;
}
