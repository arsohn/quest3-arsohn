#include "RationalFraction.h"

int getGCD(int n1, int n2) {
	int gcd = 1;
	if (n1 < 0) {
		n1 = -n1;
	}
	if (n2 < 0) {
		n2 = -n2;
	}
	for (int i = 1; i <= n1 && i <= n2; ++i) {
		if (n1 % i == 0 && n2 % i == 0) {
			gcd = i;
		}
	}
	return gcd;
}

RationalFraction::RationalFraction(int n1, int n2) {
	num = n1;
	den = n2;
}
RationalFraction::RationalFraction(const RationalFraction& r) {
	this->num = r.num;
	this->den = r.den;
}
void RationalFraction::reduceFraction()
{
	int d = getGCD(num, den);
	num /= d;
	den /= d;
}
int RationalFraction::getNum()const {
	return num;
}
int RationalFraction::getDen()const {
	return den;
}
void RationalFraction::setNum(int n) {
	num = n;
}
void RationalFraction::setDen(int n) {
	den = n;
}
RationalFraction RationalFraction::operator+(const RationalFraction& r) {
	RationalFraction result;
	result.den = this->den * r.den;
	result.num = ((result.den / this->den) * this->num) + ((result.den / r.den) * r.num);
	result.reduceFraction();
	return result;
}
RationalFraction RationalFraction::operator-(const RationalFraction& r) {
	RationalFraction result;
	result.den = this->den * r.den;
	result.num = ((result.den / this->den) * this->num) - ((result.den / r.den) * r.num);
	result.reduceFraction();
	return result;
}
RationalFraction RationalFraction::operator*(const RationalFraction& r) {
	RationalFraction result;
	result.den = this->den * r.den;
	result.num = this->num * r.num;
	result.reduceFraction();
	return result;
}
RationalFraction RationalFraction::operator/(const RationalFraction& r) {
	RationalFraction result;
	result.den = this->den * r.num;
	result.num = this->num * r.den;
	result.reduceFraction();
	return result;
}
bool RationalFraction::operator==(const RationalFraction& r) {
	return (this->num * r.den == this->den * r.num);
}
bool RationalFraction::operator!=(const RationalFraction& r) {
	return (this->num * r.den != this->den * r.num);
}
bool RationalFraction::operator>(const RationalFraction& r) {
	return (this->num * r.den > this->den* r.num);
}
bool RationalFraction::operator<(const RationalFraction& r) {
	return (this->num * r.den < this->den * r.num);
}
bool RationalFraction::operator>=(const RationalFraction& r) {
	return (this->num * r.den >= this->den * r.num);
}
bool RationalFraction::operator<=(const RationalFraction& r) {
	return (this->num * r.den <= this->den * r.num);
}