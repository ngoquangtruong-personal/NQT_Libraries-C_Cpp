#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class fraction
{
private:
    long long numerator, denominator;

public:
    // Constructors
    fraction();
    fraction(long long newNumerator);
    fraction(long long newNumerator, long long newDenominator);

    // Getter functions
    long long getNumerator();
    long long getDenominator();

    // Setter functions
    void setNumerator(long long newNumerator);
    void setDenominator(long long newDenominator);

    // Operator overloads
    friend istream &operator>>(istream &input, fraction &yourFraction);
    friend ostream &operator<<(ostream &output, const fraction &yourFraction);

    // Arithmetic operators
    fraction operator+(fraction nextFraction);
    fraction operator+(long long number);
    friend fraction operator+(long long number, fraction yourFraction);
    
    fraction operator-();
    fraction operator-(fraction nextFraction);
    fraction operator-(long long number);
    friend fraction operator-(long long number, fraction yourFraction);
    
    fraction operator*(fraction nextFraction);
    fraction operator*(long long number);
    friend fraction operator*(long long number, fraction yourFraction);
    
    fraction operator/(fraction nextFraction);
    fraction operator/(long long number);
    friend fraction operator/(long long number, fraction yourFraction);

    // Compound assignment operators
    fraction operator+=(fraction nextFraction);
    fraction operator-=(fraction nextFraction);
    fraction operator*=(fraction nextFraction);
    fraction operator/=(fraction nextFraction);

    // Increment and Decrement operators
    fraction operator++(); // Prefix
    fraction operator++(int); // Suffix
    fraction operator--(); // Prefix
    fraction operator--(int); // Suffix

    // Comparison operators
    bool operator>(fraction nextFraction);
    bool operator>=(fraction nextFraction);
    bool operator<(fraction nextFraction);
    bool operator<=(fraction nextFraction);
    bool operator==(fraction nextFraction);
    bool operator!=(fraction nextFraction);
};

#endif // FRACTION_H