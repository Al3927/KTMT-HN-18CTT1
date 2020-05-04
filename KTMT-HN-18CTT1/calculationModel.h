#pragma once

#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

ref class calculationModel
{
public:
	//Type 1 = true, type 2 = false
	bool Type1 = true;

	String^ nearestOperator = "";
	String^ result = "";
	
	double previousNumber = 0.0;
	bool isNewLife = true;
	double ppNumber = 1.0;
	double ppNumber1 = 1.0;
	calculationModel();
	~calculationModel();

	void calculatorHandleEvent(String^ buttonTitle);
private:

	String^ Log = "";

};

