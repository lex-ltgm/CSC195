
#include <iostream>
using namespace std;

void set(int& i)
{
    i = 123;
}

void swap(int i1, int i2)
{
    int temp = i1;
    i1 = i2;
    i2 = temp;
}

int main()
{
    int i1 = 10;
    int i2 = 20;

    int& r = i1;
    r = 40;
    set(i1);
    swap(i1, i2);

    int* p = nullptr;
    p = &i1;

    cout << i1 << endl;
    cout << i2 << endl;
    cout << &i1 << endl;
    cout << &r << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;


    cout << "-----------------------------------" << endl;

    int number1 = 1;
    int* hnum1 = new int(4);

    int* Arrnum = new int[4];

}
