#include <iostream>
#include "Point.h"

using namespace ost;
using namespace std;

void operator << (ostream& ostream, Point& p)

int main()
{
    Point point1(10, 14);
    point1.Write(cout);

    Point point2(6, 0);

    Point point3 = (point1 + point2) * 3.0f;

    cout << point3;

}

