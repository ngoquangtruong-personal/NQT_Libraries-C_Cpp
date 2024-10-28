#include "fraction.h"

// Constructors
fraction::fraction()
{
    numerator = 0;
    denominator = 1;
}

fraction::fraction(long long newNumerator)
{
    numerator = newNumerator;
    denominator = 1;
}

fraction::fraction(long long newNumerator, long long newDenominator)
{
    numerator = newNumerator;
    denominator = newDenominator;
}

// Getter functions
long long fraction::getNumerator()
{
    return numerator;
}

long long fraction::getDenominator()
{
    return denominator;
}

// Setter functions
void fraction::setNumerator(long long newNumerator)
{
    numerator = newNumerator;
}

void fraction::setDenominator(long long newDenominator)
{
    denominator = newDenominator;
}

// Operator overloads
istream &operator>>(istream &input, fraction &yourFraction)
{
    input >> yourFraction.numerator >> yourFraction.denominator;
    return input;
}

ostream &operator<<(ostream &output, const fraction &yourFraction)
{
    output << yourFraction.numerator << '/' << yourFraction.denominator << "\n";
    return output;
}

// Arithmetic operators
fraction fraction::operator+(fraction nextFraction)
{
    fraction result;
    result.numerator = this->numerator * nextFraction.denominator + nextFraction.numerator * this->denominator;
    result.denominator = this->denominator * nextFraction.denominator;
    return result;
}

fraction fraction::operator+(long long number)
{
    fraction result;
    result.numerator = this->numerator + number * this->denominator;
    result.denominator = this->denominator;
    return result;
}

fraction operator+(long long number, fraction yourFraction)
{
    fraction result;
    result.numerator = number * yourFraction.denominator + yourFraction.numerator;
    result.denominator = yourFraction.denominator;
    return result;
}

fraction fraction::operator-()
{
    fraction result;
    result.numerator = -this->numerator;
    result.denominator = this->denominator;
    return result;
}

fraction fraction::operator-(fraction nextFraction)
{
    fraction result;
    result.numerator = this->numerator * nextFraction.denominator - nextFraction.numerator * this->denominator;
    result.denominator = this->denominator * nextFraction.denominator;
    return result;
}

fraction fraction::operator-(long long number)
{
    fraction result;
    result.numerator = this->numerator - number * this->denominator;
    result.denominator = this->denominator;
    return result;
}

fraction operator-(long long number, fraction yourFraction)
{
    fraction result;
    result.numerator = number * yourFraction.denominator - yourFraction.numerator;
    result.denominator = yourFraction.denominator;
    return result;
}

fraction fraction::operator*(fraction nextFraction)
{
    fraction result;
    result.numerator = this->numerator * nextFraction.numerator;
    result.denominator = this->denominator * nextFraction.denominator;
    return result;
}

fraction fraction::operator*(long long number)
{
    fraction result;
    result.numerator = this->numerator * number;
    result.denominator = this->denominator;
    return result;
}

fraction operator*(long long number, fraction yourFraction)
{
    fraction result;
    result.numerator = number * yourFraction.numerator;
    result.denominator = yourFraction.denominator;
    return result;
}

fraction fraction::operator/(fraction nextFraction)
{
    fraction result;
    result.numerator = this->numerator * nextFraction.denominator;
    result.denominator = this->denominator * nextFraction.numerator;
    return result;
}

fraction fraction::operator/(long long number)
{
    fraction result;
    result.numerator = this->numerator;
    result.denominator = this->denominator * number;
    return result;
}

fraction operator/(long long number, fraction yourFraction)
{
    fraction result;
    result.numerator = number * yourFraction.denominator;
    result.denominator = yourFraction.numerator;
    return result;
}

// Compound assignment operators
fraction fraction::operator+=(fraction nextFraction)
{
    this->numerator = this->numerator * nextFraction.denominator + nextFraction.numerator * this->denominator;
    this->denominator = this->denominator * nextFraction.denominator;
    return *this;
}

fraction fraction::operator-=(fraction nextFraction)
{
    this->numerator = this->numerator * nextFraction.denominator - nextFraction.numerator * this->denominator;
    this->denominator = this->denominator * nextFraction.denominator;
    return *this;
}

fraction fraction::operator*=(fraction nextFraction)
{
    this->numerator = this->numerator * nextFraction.numerator;
    this->denominator = this->denominator * nextFraction.denominator;
    return *this;
}

fraction fraction::operator/=(fraction nextFraction)
{
    this->numerator = this->numerator * nextFraction.denominator;
    this->denominator = this->denominator * nextFraction.numerator;
    return *this;
}

// Increment and Decrement operators
fraction fraction::operator++()
{
    this->numerator += this->denominator;
    return *this;
}

fraction fraction::operator++(int)
{
    fraction result = *this;
    ++(*this);
    return result;
}

fraction fraction::operator--()
{
    this->numerator -= this->denominator;
    return *this;
}

fraction fraction::operator--(int)
{
    fraction result = *this;
    --(*this);
    return result;
}

// Comparison operators
bool fraction::operator>(fraction nextFraction)
{
    return this->numerator * nextFraction.denominator > nextFraction.numerator * this->denominator;
}

bool fraction::operator>=(fraction nextFraction)
{
    return this->numerator * nextFraction.denominator >= nextFraction.numerator * this->denominator;
}

bool fraction::operator<(fraction nextFraction)
{
    return this->numerator * nextFraction.denominator < nextFraction.numerator * this->denominator;
}

bool fraction::operator<=(fraction nextFraction)
{
    return this->numerator * nextFraction.denominator <= nextFraction.numerator * this->denominator;
}

bool fraction::operator==(fraction nextFraction)
{
    return this->numerator * nextFraction.denominator == nextFraction.numerator * this->denominator;
}

bool fraction::operator!=(fraction nextFraction)
{
    return this->numerator * nextFraction.denominator != nextFraction.numerator * this->denominator;
}