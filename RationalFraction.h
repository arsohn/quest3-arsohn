#pragma once
#ifndef RATIONAL_FRACTION_H
#define RATIONAL_FRACTION_H

using namespace std;

int getGCD(int n1, int n2); // greatest common divisor

class RationalFraction {
public:
	RationalFraction(int n1 = 0, int n2 = 0);
	RationalFraction(const RationalFraction& r);
	void reduceFration();
	int getNum()const; // getter for numerator
	int getDen()const; // getter for denominator
	void setNum(int n); // setter for numerator
	void setDen(int n); // setter for denominator
	RationalFraction operator+(const RationalFraction& r); // overload operators for artimetic +
	RationalFraction operator-(const RationalFraction& r); // overload operators for artimetic -
	RationalFraction operator*(const RationalFraction& r); // overload operators for artimetic *
	RationalFraction operator/(const RationalFraction& r); // overload operators for artimetic /
	bool operator==(const RationalFraction& r);	// overload operators for boolean ==
	bool operator!=(const RationalFraction& r); // overload operators for boolean !=
	bool operator>(const RationalFraction& r);  // overload operators for boolean >
	bool operator<(const RationalFraction& r);  // overload operators for boolean <
	bool operator>=(const RationalFraction& r); // overload operators for boolean >=
	bool operator<=(const RationalFraction& r); // overload operators for boolean <=
private:
	int num; //numerator
	int den; //denomiator 
};

#endif // !RATIONAL_FRACTION_H
