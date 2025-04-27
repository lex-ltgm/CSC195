#include <iostream>
using namespace std;

namespace myMethod
{
	template<typename T>
	T max(T i1, T i2)
	{
		return (i1 > i2) ? i1 : i2;

	}
}
int main()
{
	cout << myMethod::max(6.56f, 56) << endl;
}