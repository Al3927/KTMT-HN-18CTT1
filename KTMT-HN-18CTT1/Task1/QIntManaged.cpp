#include "QIntManaged.h"


QIntManaged QIntManaged::operator+(QIntManaged param)
{
	QIntManaged res;
	res.unmangedQInt->clear();
	int temp = 0; //bien nho
	unsigned int mask = 1;
	for (int i = 3; i >= 0; i--) {//chay cho tung block data
		for (int j = 0; j < 32; j++) {//do bit cua tung block
			switch (temp + (((this->unmangedQInt->data[i] >> j) & mask) + ((param.unmangedQInt->data[i] >> j) & mask)))
			{
			case 0:
				res.unmangedQInt->data[i] &= (~(mask << j));
				temp = 0;
				break;
			case 1:
				res.unmangedQInt->data[i] |= (mask << j);
				temp = 0;
				break;
			case 2:
				res.unmangedQInt->data[i] &= (~(mask << j));
				temp = 1;
				break;
			case 3:
				res.unmangedQInt->data[i] |= (mask << j);
				temp = 1;
				break;
			}
		}
	}
	return res;
}
