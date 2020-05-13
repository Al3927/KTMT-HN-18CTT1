#pragma once

#include <iostream>
//#include "Header.h"
#include "Task1/QInt.h"
#include "calculatorUnmanaged.h"

using namespace System;
using namespace System::Windows::Forms;

ref class calculationModel
{
public:
	static calculatorUnmanaged* Calculator = new calculatorUnmanaged();
	~calculationModel();

};

