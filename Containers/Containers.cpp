// Containers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    string fruits[5] = { "Banana", "Kiwi", "Mango", "Strawberry" };

    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(3);
    numbers.push_back(5);
    numbers.push_back(7);
    numbers.push_back(25);

    numbers.pop_back();
    numbers.pop_back();

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[1] << endl;
    }

    cout << "-------------------------------" << endl;

    string chemicals[5] = { "mercury", "hydrochloric acid", "bromine", "table salt" };

    cout << chemicals[2] << endl;
    cout << chemicals << endl;
    cout << &chemicals[0] << endl;

    cout << "-------------------------------" << endl;

    for (int i = 0; i < (*chemicals).size(); i++) {
        cout << &chemicals[i] << endl;
    }

    cout << "-------------------------------" << endl;

    string* p = chemicals;
    cout << p << endl;
    cout << ++p << endl;
    cout << ++p << endl;
    cout << --p << endl;

    cout << p + 2 << endl;
    cout << p - 3 << endl;

    cout << "-------------------------------" << endl;

    list<string> cars = { "Hyundai", "Ferrari", "Mercedes", "Volvo" };
    cout<< cars

}

