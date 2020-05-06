#pragma once
#include "QInt.h"
ref class QIntManaged
{
public:
	QIntManaged() {};
	static QInt* unmangedQInt = new QInt();
};

