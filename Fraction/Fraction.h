#include <iostream>
#include <cmath>
#include <type_traits>

namespace mathlib {

    template <typename T = int>
    class Fraction {
    private:
        T numerator;
        T denominator;

        T gcd(T a, T b) const {
            a = std::abs(a);
            b = std::abs(b);
            while (b != 0) {
                T temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        }

        void normalize() {
            if constexpr (!std::is_unsigned<T>::value) {
                if (denominator < 0) {
                    numerator = -numerator;
                    denominator = -denominator;
                }
            }
        }

    public:
        Fraction() : numerator(0), denominator(1) {}

        Fraction(T num, T denom = 1) : numerator(num), denominator(denom) {
            if (denominator == 0)
                throw std::invalid_argument("denominator cannot be zero");
            normalize();
        }

        T getNumerator() const { return numerator; }
        T getDenominator() const { return denominator; }

        void simplify() {
            T gcd_value = gcd(numerator, denominator);
            numerator /= gcd_value;
            denominator /= gcd_value;
            normalize();
        }

        double toDouble() const {
            return static_cast<double>(numerator) / denominator;
        }

        Fraction operator+(const Fraction& other) const {
            Fraction result(numerator * other.denominator + other.numerator * denominator,
                denominator * other.denominator);
            result.simplify();
            return result;
        }

        Fraction operator-(const Fraction& other) const {
            Fraction result(numerator * other.denominator - other.numerator * denominator,
                denominator * other.denominator);
            result.simplify();
            return result;
        }

        Fraction operator*(const Fraction& other) const {
            Fraction result(numerator * other.numerator,
                denominator * other.denominator);
            result.simplify();
            return result;
        }

        Fraction operator/(const Fraction& other) const {
            if (other.numerator == 0)
                throw std::domain_error("Division by zero fraction");

            Fraction result(numerator * other.denominator,
                denominator * other.numerator);
            result.simplify();
            return result;
        }

        bool operator==(const Fraction& other) const {
            return numerator * other.denominator == other.numerator * denominator;
        }

        bool operator!=(const Fraction& other) const {
            return !(*this == other);
        }

        bool operator<(const Fraction& other) const {
            return numerator * other.denominator < other.numerator * denominator;
        }

        bool operator>(const Fraction& other) const {
            return other < *this;
        }

        bool operator<=(const Fraction& other) const {
            return !(*this > other);
        }

        bool operator>=(const Fraction& other) const {
            return !(*this < other);
        }
    };

    template <typename T>
    std::ostream& operator<<(std::ostream& os, const Fraction<T>& frac) {
        os << frac.getNumerator() << "/" << frac.getDenominator();
        return os;
    }

    template <typename T>
    std::istream& operator>>(std::istream& is, Fraction<T>& frac) {
        T num, denom = 1;
        char separator;

        is >> num;
        if (is.peek() == '/') {
            is >> separator >> denom;
            if (denom == 0)
                throw std::invalid_argument("Denominator cannot be zero");
        }

        frac = Fraction<T>(num, denom);
        return is;
    }

} 
