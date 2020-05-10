#include "Bit.h"

int Bit::setBit1(unsigned int& n, int k)
{
	n = (n | (1 << k));
	//number |= 1UL << n;
	return (n | (1 << k));
}
int Bit::setBit0(unsigned int& n, int k)//clear bit
{
	n = (n & (~(1 << k)));
	return (n & (~(1 << k)));
}
int Bit::getBit(unsigned int n, int k)
{
	int temp = n;
	return (temp >> k) & 1;
}

int Bit::bitCopy(unsigned int& n1, unsigned int k1, unsigned int& n2, unsigned int k2)
{
	if (Bit::getBit(n1, k1)) {
		Bit::setBit1(n2, k2);
		return 1;
	}
	else {
		Bit::setBit0(n2, k2);
		return 0;
	}
}