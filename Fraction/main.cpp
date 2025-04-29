#include <iostream>
#include "Fraction.h"

using namespace mathlib;
using namespace std;

int main() {
    Fraction<int> fraction1(15, 5);
    cout << "fraction1: " << fraction1 << endl;

    Fraction<int> fraction2(15, 6);
    cout << "fraction2 before simplify: " << fraction2 << endl;
    fraction2.simplify();
    cout << "fraction2 after simplify: " << fraction2 << endl;

    cout << "\nComparison Operations:" << endl;
    cout << fraction1 << " == " << fraction2 << " result: " << (fraction1 == fraction2) << endl;
    cout << fraction1 << " != " << fraction2 << " result: " << (fraction1 != fraction2) << endl;
    cout << fraction1 << " > " << fraction2 << " result: " << (fraction1 > fraction2) << endl;
    cout << fraction1 << " < " << fraction2 << " result: " << (fraction1 < fraction2) << endl;
    cout << fraction1 << " >= " << fraction2 << " result: " << (fraction1 >= fraction2) << endl;
    cout << fraction1 << " <= " << fraction2 << " result: " << (fraction1 <= fraction2) << endl;

    cout << "\nArithmetic Operations:" << endl;
    cout << fraction1 << " + " << fraction2 << " = " << (fraction1 + fraction2) << endl;
    cout << fraction1 << " - " << fraction2 << " = " << (fraction1 - fraction2) << endl;
    cout << fraction1 << " * " << fraction2 << " = " << (fraction1 * fraction2) << endl;
    cout << fraction1 << " / " << fraction2 << " = " << (fraction1 / fraction2) << endl;

    Fraction<int> fraction3;
    cout << "\nInput a fraction (format: numerator/denominator or just numerator): ";
    try {
        cin >> fraction3;
        cout << "You entered: " << fraction3 << endl;
        cout << "Decimal value: " << fraction3.toDouble() << endl;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    cout << "\nTesting with different types:" << endl;

    Fraction<long> longFraction(123456789L, 987654321L);
    longFraction.simplify();
    cout << "Long fraction: " << longFraction << " = " << longFraction.toDouble() << endl;

    Fraction<unsigned int> unsignedFraction(42U, 13U);
    cout << "Unsigned fraction: " << unsignedFraction << " = " << unsignedFraction.toDouble() << endl;

    cout << "\nTesting edge cases:" << endl;

    try {
        cout << "Creating fraction with zero denominator: ";
        Fraction<int> badFraction(1, 0);
    }
    catch (const exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    Fraction<int> negFraction(-3, 4);
    cout << "Negative fraction: " << negFraction << " = " << negFraction.toDouble() << endl;

    Fraction<int> negDenom(5, -6);
    cout << "Negative denominator gets normalized: " << negDenom << " = " << negDenom.toDouble() << endl;

    return 0;
}