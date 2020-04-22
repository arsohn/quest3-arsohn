#ifndef RATIONAL_FRACTION_H
#define RATIONAL_FRACTION_H

int getGCD(int n1, int n2);

class RationalFraction {
	int num;
	int den;
public:
	RationalFraction(int n1 = 0, int n2 = 0);
	RationalFraction(const RationalFraction& r);
	void reduceFraction();
	int getNum()const;
	int getDen()const;
	void setNum(int n);
	void setDen(int n);
	RationalFraction operator+(const RationalFraction& r);
	RationalFraction operator-(const RationalFraction& r);
	RationalFraction operator*(const RationalFraction& r);
	RationalFraction operator/(const RationalFraction& r);
	bool operator==(const RationalFraction& r);
	bool operator!=(const RationalFraction& r);
	bool operator>(const RationalFraction& r);
	bool operator<(const RationalFraction& r);
	bool operator>=(const RationalFraction& r);
	bool operator<=(const RationalFraction& r);
};

#endif