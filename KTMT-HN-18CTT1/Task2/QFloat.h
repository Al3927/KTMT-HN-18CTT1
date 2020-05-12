#pragma once
#include "BigFloat.h"
#include <string>
#include <math.h>

class QFloat
{
private:
	unsigned int data[4] = { 0 };
public:
	QFloat();
	~QFloat();

	unsigned int MulAdd(const unsigned int&, const unsigned int); // Dua day bit kieu chuoi vao mang so nguyen data
	void ScanQFloat(int, string); // Doc mot chuoi bit hay chuoi so thap phan
	void PrintQFloat(); // Xuat so thap phan ra man hinh

	void BintoDec(string&);
	void DectoBin(string, string&);

	int getBit(int); // Lay bit thu i (0 <= i < 128)
	QFloat operator=(QFloat);
	bool operator==(QFloat);
};