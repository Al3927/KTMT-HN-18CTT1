#include "Bit.h"

int Bit::setBit1(int n, int k)
{
	return (n | (1 << k));
}
int Bit::setBit0(int n, int k)//clear bit
{
	return (n & (~(1 << k)));
}
int Bit::getBit(int n, int k)
{
	return (n >> k) & 1;
}
