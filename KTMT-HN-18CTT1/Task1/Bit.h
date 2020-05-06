#pragma once

using namespace System;
using namespace System::Windows::Forms;

ref class Bit
{

	//thao tac bit
public:
	static int setBit1(int n, int k);
	static int setBit0(int n, int k);//clear bit
	static int getBit(int n, int k);
};

