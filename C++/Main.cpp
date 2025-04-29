#define _DBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <memory>
#include <iostream>
using namespace std;

template<typename T>
class smart_ptr

{

public:

	smart_ptr(T* ptr = nullptr) : _ptr{ptr} {}
	smart_ptr(const smart_ptr&) = delete;
	smart_ptr& operator = (const smart_ptr&) = delete;
	~smart_ptr() { if (_ptr) delete _ptr; }

	T& operator * () { return *_ptr; }
	T* operator & () { return  _ptr; }
	T* operator -> () { return  _ptr; }

	T* get() { return _ptr; }

private:

	T* _ptr{};

};



int main()
{
	//int arr[] = { 2,4,6,8 };

	//int* p = arr;  //&arr[0]
	//p++;
	//p++;
	//p--;

	//cout << *p << endl;

	int* p = new int{ 5 };

	cout << *p << endl;

	delete p;


	{
		smart_ptr<int> sp{ new int {25} };
		unique_ptr<int> up{ new int {20} };

		unique_ptr<int> upc{ up };
	}

	_CrtDumpMemoryLeaks();


}