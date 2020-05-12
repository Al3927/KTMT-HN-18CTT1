#pragma once

using namespace System;
using namespace System::Windows::Forms;

ref class Bit
{

	//thao tac bit
public:
	static int setBit1(unsigned int& n, int k);
	static int setBit0(unsigned int& n, int k);//clear bit
	static int getBit(unsigned int n, int k);
	static int bitCopy(unsigned int& n1, unsigned int k1, unsigned int& n2, unsigned int k2);
};

