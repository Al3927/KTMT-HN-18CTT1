#pragma once
#include "QInt.h"
ref class QIntManaged
{
public:
	QIntManaged() {};
	static QInt* unmangedQInt = new QInt();

	QIntManaged operator+(QIntManaged);
	void operator=(QIntManaged p) {
		p.unmangedQInt = this->unmangedQInt;
	};

	QIntManaged(const QIntManaged% p) {
		p.unmangedQInt = this->unmangedQInt;
	};
};

