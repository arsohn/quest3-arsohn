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
		if ((n1 % i == 0) && (n2 % i == 0)) {
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