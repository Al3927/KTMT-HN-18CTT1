#include "QInt.h"

//Added by Nguyen Khang for UI

void QInt::setMode(int mode)
{
	switch (mode)
	{
	case 2:
		md = QInt::mode::binary;
		break;
	case 10:
		md = QInt::mode::decimal;
		break;
	case 16:
		md = QInt::mode::hexadecimal;
		break;
	default:
		break;

	}
}

void QInt::input(System::String^ abc, int mode)
{
	setMode(mode);
	bool isNeg = false;
	std::string inp = toStandardString(abc);
	string::iterator it = inp.begin();
	if (inp.empty()) {
		//no input, throw exception
	}
	if (*it == '-') {
		isNeg = true;
		it++;
	}
	while (*it == '\t' || *it == '\n' || *it == '\v' || *it == '\f' || *it == '\r' || *it == ' ') {
		it++;
	}
	switch (md)
	{
	case QInt::mode::hexadecimal:
	{
		clear();
		while (it != inp.end())
			if (*it >= '0' && *it <= '9') {
				if (MulAdd(16, *it - '0')) {
					//NULL
				}
				it++;
			}
			else
				if (*it >= 'A' && *it <= 'F') {
					if (MulAdd(16, *it - 'A' + 10)) {
						//NULL
					}
					it++;
				}
				else
					if (*it >= 'a' && *it <= 'f') {
						if (MulAdd(16, *it - 'a' + 10)) {
							//NULL
						}
						it++;
					}
	}
	break;
	case QInt::mode::binary:
	{
		clear();
		while (it != inp.end())
			if (*it >= '0' && *it <= '1') {
				if (MulAdd(2, *it - '0')) {
					//NULL
				}
				it++;
			}
	}
	break;
	case QInt::mode::decimal:
	{
		clear();
		while (it != inp.end())
			if (*it >= '0' && *it <= '9') {
				if (MulAdd(10, *it - '0')) {
					//NULL
				}
				it++;
			}
	}
	}
	if (isNeg) {
		QInt one;
		one.clear();
		one.data[3] = 1;
		QInt temp = (~*this) + one;
		*this = temp;
	}
}
void QInt::input(std::string inp, int mode)
{
	setMode(mode);
	bool isNeg = false;

	string::iterator it = inp.begin();
	if (inp.empty()) {
		//no input, throw exception
	}
	if (*it == '-') {
		isNeg = true;
		it++;
	}
	while (*it == '\t' || *it == '\n' || *it == '\v' || *it == '\f' || *it == '\r' || *it == ' ') {
		it++;
	}
	switch (md)
	{
	case QInt::mode::hexadecimal:
	{
		clear();
		while (it != inp.end())
			if (*it >= '0' && *it <= '9') {
				if (MulAdd(16, *it - '0')) {
					//NULL
				}
				it++;
			}
			else
				if (*it >= 'A' && *it <= 'F') {
					if (MulAdd(16, *it - 'A' + 10)) {
						//NULL
					}
					it++;
				}
				else
					if (*it >= 'a' && *it <= 'f') {
						if (MulAdd(16, *it - 'a' + 10)) {
							//NULL
						}
						it++;
					}
	}
	break;
	case QInt::mode::binary:
	{
		clear();
		while (it != inp.end())
			if (*it >= '0' && *it <= '1') {
				if (MulAdd(2, *it - '0')) {
					//NULL
				}
				it++;
			}
	}
	break;
	case QInt::mode::decimal:
	{
		clear();
		while (it != inp.end())
			if (*it >= '0' && *it <= '9') {
				if (MulAdd(10, *it - '0')) {
					//NULL
				}
				it++;
			}
	}
	}
	if (isNeg) {
		QInt one;
		one.clear();
		one.data[3] = 1;
		QInt temp = (~*this) + one;
		*this = temp;
	}
}
String^ QInt::print(int mode)
{
	setMode(mode);
	switch (md)
	{
	case QInt::mode::binary:
	{
		string output;

		unsigned int mask = 1; // mask co 31 bit 0, bit cuoi la 1
		for (int i = 3; i >= 0; i--) {//chay cho tung block data
			mask = 1;
			for (int j = 0; j < 32; j++) {//do bit cua tung block
				if ((mask & data[i]) >= 1) {// xet xem bit do co la bit 1 hay khong (tu cuoi block -> dau block)
					output = "1" + output;
				}
				else {
					output = "0" + output;
				}
				mask <<= 1;// dich bit 1 cua mask sang trai de get bit tiep theo
			}
			output = "\n" + output;
		}
		String^ Out = gcnew String(output.c_str());
		//String^ Out = marshal_as<String^>(output);
		return Out;
	}
	break;
	case QInt::mode::decimal:
	{
		string output;
		QInt temp = *this;
		if (Bit::getBit(data[0], 31)) {
			temp.clear();
			QInt one;
			one.clear();
			one.data[3] = 1;
			temp = (~*this) + one;
			output = '-';
		}
		for (int i = 0; i < 4; i++) {
			if (temp.data[i] != 0) {
				output.append(to_string(temp.data[i]));
			}
		}
		String^ Out = gcnew String(output.c_str());
		return Out;
		break;
	}
	case QInt::mode::hexadecimal:
	{
		string output;
		for (int i = 3; i > -1; i--)
		{
			unsigned int div = data[i];
			int mod = 0;
			do
			{
				mod = div % 16;
				switch (mod)
				{
				case 10:
					output = "A" + output;
					break;
				case 11:
					output = "B" + output;
					break;
				case 12:
					output = "C" + output;
					break;
				case 13:
					output = "D" + output;
					break;
				case 14:
					output = "E" + output;
					break;
				case 15:
					output = "F" + output;
					break;
				default:
					output = to_string(mod) + output;
					break;
				}
				div /= 16;
			} while (div != 0);
		}
		String^ Out = gcnew String(output.c_str());
		return Out;
	}
	break;
	default:
		break;
	}
}
std::string QInt::print1(int mode)
{
	setMode(mode);
	switch (md)
	{
	case QInt::mode::binary:
	{
		string output;

		unsigned int mask = 1; // mask co 31 bit 0, bit cuoi la 1
		for (int i = 3; i >= 0; i--) {//chay cho tung block data
			mask = 1;
			for (int j = 0; j < 32; j++) {//do bit cua tung block
				if ((mask & data[i]) >= 1) {// xet xem bit do co la bit 1 hay khong (tu cuoi block -> dau block)
					output = "1" + output;
				}
				else {
					output = "0" + output;
				}
				mask <<= 1;// dich bit 1 cua mask sang trai de get bit tiep theo
			}
			output = " " + output;
		}
		return output;
	}
	break;
	case QInt::mode::decimal:
	{
		string output;
		QInt temp = *this;
		if (Bit::getBit(data[0], 31)) {
			temp.clear();
			QInt one;
			one.clear();
			one.data[3] = 1;
			temp = (~*this) + one;
			output = '-';
		}
		for (int i = 0; i < 4; i++) {
			if (temp.data[i] != 0) {
				output.append(to_string(temp.data[i]));
			}
		}
		return output;
		break;
	}
	case QInt::mode::hexadecimal:
	{
		string output;
		for (int i = 3; i > -1; i--)
		{
			unsigned int div = data[i];
			int mod = 0;
			do
			{
				mod = div % 16;
				switch (mod)
				{
				case 10:
					output = "A" + output;
					break;
				case 11:
					output = "B" + output;
					break;
				case 12:
					output = "C" + output;
					break;
				case 13:
					output = "D" + output;
					break;
				case 14:
					output = "E" + output;
					break;
				case 15:
					output = "F" + output;
					break;
				default:
					output = to_string(mod) + output;
					break;
				}
				div /= 16;
			} while (div != 0);
		}
		return output;
	}
	break;
	default:
		break;
	}
}
/*

QInt* QInt::plus(QInt* param)
{
	QInt* res;
	//res->clear();
	res->data[1] = 0;
	res->data[2] = 0;
	res->data[3] = 0;
	res->data[4] = 0;
	int temp = 0; //bien nho
	unsigned int mask = 1;
	for (int i = 3; i >= 0; i--) {//chay cho tung block data
		for (int j = 0; j < 32; j++) {//do bit cua tung block
			switch (temp + (((data[i] >> j) & mask) + ((param->data[i] >> j) & mask)))
			{
			case 0:
				res->data[i] &= (~(mask << j));
				temp = 0;
				break;
			case 1:
				res->data[i] |= (mask << j);
				temp = 0;
				break;
			case 2:
				res->data[i] &= (~(mask << j));
				temp = 1;
				break;
			case 3:
				res->data[i] |= (mask << j);
				temp = 1;
				break;
			}
		}
	}
	return res;
}

QInt* QInt::tru(QInt* param)
{
	QInt* diff;
	diff->clear();
	QInt* one;
	one->clear();
	one->data[3] = 1;
	QInt* minuend = (nga(param))->plus(one);
	diff = this->plus(minuend);
	return diff;
}

*/

//End UI

QInt::QInt()
{
	for (int i = 0; i < 4; i++)
	{
		data[i] = 0;
	}
	md = QInt::mode::decimal;
}

QInt::~QInt()
{
}


void QInt::setMode()
{
	int mode_in;
	cout << "Nhap mode (2, 10, 16): ";
	cin >> mode_in;
	switch (mode_in)
	{
	case 2:
		md = QInt::mode::binary;
		break;
	case 10:
		md = QInt::mode::decimal;
		break;
	case 16:
		md = QInt::mode::hexadecimal;
		break;
	default:
		setMode();
		break;

	}
	cin.ignore();// bo dau enter
}
//-------------------------------------------EX

unsigned int QInt::MulAdd(const unsigned int& mul, const unsigned int add) {
	unsigned long long temp = 0;// tranh tran so
	// xu ly du lieu theo he co so (mul) de dua vao thanh cac block luu trong data[]
	temp = (unsigned long long)data[3] * (unsigned long long)mul + add;
	data[3] = (unsigned int)temp;

	temp = (unsigned long long)data[2] * (unsigned long long)mul + (temp >> 32);
	data[2] = (unsigned int)temp;
	//temp >> 32 de:
	temp = (unsigned long long)data[1] * (unsigned long long)mul + (temp >> 32);
	data[1] = (unsigned int)temp;

	temp = (unsigned long long)data[0] * (unsigned long long)mul + (temp >> 32);
	data[0] = (unsigned int)temp;

	return temp >> 32;
}


void QInt::input()
{
	setMode();
	bool isNeg = false;
	string inp;
	cout << "Nhap: ";
	getline(cin, inp);
	string::iterator it = inp.begin();
	if (inp.empty()) {
		//no input, throw exception
	}
	if (*it == '-') {
		isNeg = true;
		it++;
	}
	while (*it == '\t' || *it == '\n' || *it == '\v' || *it == '\f' || *it == '\r' || *it == ' ') {
		it++;
	}
	switch (md)
	{
	case QInt::mode::hexadecimal:
	{
		clear();
		while (it != inp.end())
			if (*it >= '0' && *it <= '9') {
				if (MulAdd(16, *it - '0')) {
					//NULL
				}
				it++;
			}
			else
				if (*it >= 'A' && *it <= 'F') {
					if (MulAdd(16, *it - 'A' + 10)) {
						//NULL
					}
					it++;
				}
				else
					if (*it >= 'a' && *it <= 'f') {
						if (MulAdd(16, *it - 'a' + 10)) {
							//NULL
						}
						it++;
					}
	}
	break;
	case QInt::mode::binary:
	{
		clear();
		while (it != inp.end())
			if (*it >= '0' && *it <= '1') {
				if (MulAdd(2, *it - '0')) {
					//NULL
				}
				it++;
			}
	}
	break;
	case QInt::mode::decimal:
	{
		clear();
		while (it != inp.end())
			if (*it >= '0' && *it <= '9') {
				if (MulAdd(10, *it - '0')) {
					//NULL
				}
				it++;
			}
	}
	}
	if (isNeg) {
		QInt one;
		one.clear();
		one.data[3] = 1;
		QInt temp = (~*this) + one;
		*this = temp;
	}
	cout << "Cac block: " << data[0] << " " << data[1] << " " << data[2] << " " << data[3] << endl;
}
void QInt::print()
{
	setMode();
	switch (md)
	{
	case QInt::mode::binary:
	{
		string output;

		unsigned int mask = 1; // mask co 31 bit 0, bit cuoi la 1
		for (int i = 3; i >= 0; i--) {//chay cho tung block data
			mask = 1;
			for (int j = 0; j < 32; j++) {//do bit cua tung block
				if ((mask & data[i]) >= 1) {// xet xem bit do co la bit 1 hay khong (tu cuoi block -> dau block)
					output = "1" + output;
				}
				else {
					output = "0" + output;
				}
				mask <<= 1;// dich bit 1 cua mask sang trai de get bit tiep theo
			}
			output = " " + output;
		}
		cout << output;
	}
	break;
	case QInt::mode::decimal:
	{
		string output;
		QInt temp = *this;
		if (Bit::getBit(data[0], 31)) {
			temp.clear();
			QInt one;
			one.clear();
			one.data[3] = 1;
			temp = (~*this) + one;
			output = '-';
		}
		for (int i = 0; i < 4; i++) {
			if (temp.data[i] != 0) {
				output.append(to_string(temp.data[i]));
			}
		}
		cout << output;
		break;
	}
	case QInt::mode::hexadecimal:
	{
		string output;
		for (int i = 3; i > -1; i--)
		{
			unsigned int div = data[i];
			int mod = 0;
			do
			{
				mod = div % 16;
				switch (mod)
				{
				case 10:
					output = "A" + output;
					break;
				case 11:
					output = "B" + output;
					break;
				case 12:
					output = "C" + output;
					break;
				case 13:
					output = "D" + output;
					break;
				case 14:
					output = "E" + output;
					break;
				case 15:
					output = "F" + output;
					break;
				default:
					output = to_string(mod) + output;
					break;
				}
				div /= 16;
			} while (div != 0);
		}
		cout << output;
	}
	break;
	default:
		break;
	}
}

//----------MATH-OPERATOR---------

QInt QInt::operator+(QInt param)
{
	QInt res;
	res.clear();
	int temp = 0; //bien nho
	unsigned int mask = 1;
	for (int i = 3; i >= 0; i--) {//chay cho tung block data
		for (int j = 0; j < 32; j++) {//do bit cua tung block
			switch (temp + (((data[i] >> j) & mask) + ((param.data[i] >> j) & mask)))
			{
			case 0:
				res.data[i] &= (~(mask << j));
				temp = 0;
				break;
			case 1:
				res.data[i] |= (mask << j);
				temp = 0;
				break;
			case 2:
				res.data[i] &= (~(mask << j));
				temp = 1;
				break;
			case 3:
				res.data[i] |= (mask << j);
				temp = 1;
				break;
			}
		}
	}
	return res;
}
QInt QInt::operator-(QInt param)
{
	QInt diff;
	diff.clear();
	QInt one;
	one.clear();
	one.data[3] = 1;
	QInt minuend = (~param) + one;
	diff = *this + minuend;
	return diff;
}
QInt QInt::operator*(QInt param)
{
	QInt multiplier, multiplicand, product;
	multiplicand = param;
	multiplier = *this;
	int count = 0;
	for (int i = 3; i >= 0; i--) {
		for (int j = 0; j < 32; j++) {
			if (Bit::getBit(multiplier.data[i], j))
			{
				product = product + (multiplicand << count);
			}
			count++;
		}
	}
	return product;
}


//---------------COMPARERATIVE-OPERATOR-----------
bool QInt::operator<(QInt param)
{
	if (*this == param)
		return false;
	QInt comp = *this - param;
	if (Bit::getBit(comp.data[0], 31)) {
		return true;
	}
	return false;
}
bool QInt::operator>(QInt param)
{
	if (*this == param)
		return false;
	QInt comp = *this - param;
	if (Bit::getBit(comp.data[0], 31)) {
		return false;
	}
	return true;

}
bool QInt::operator==(QInt param)
{
	for (int i = 0; i < 4; i++) {//chay cho tung block data tu dau den cuoi
		if (data[i] != param.data[i])
			return false;
	}
	return true;
}
bool QInt::operator<=(QInt param)
{
	return ((*this == param) == true) ? true : (*this < param);
}
bool QInt::operator>=(QInt param)
{
	return ((*this == param) == true) ? true : (*this > param);
}



//-------------------------------------BIT-OPERATOR--------------
QInt QInt::operator&(QInt param)
{
	QInt res;
	for (int i = 3; i >= 0; i--) {//chay cho tung block data
		res.data[i] = 0;
		res.data[i] = (data[i] & param.data[i]);
	}
	return res;
}
QInt QInt::operator|(QInt param)
{
	QInt res;
	for (int i = 3; i >= 0; i--) {//chay cho tung block data
		res.data[i] = 0;
		res.data[i] = (data[i] | param.data[i]);
	}
	return res;
}
QInt QInt::operator^(QInt param)
{
	QInt res;
	for (int i = 3; i >= 0; i--) {//chay cho tung block data
		res.data[i] = 0;
		res.data[i] = (data[i] ^ param.data[i]);
	}
	return res;
}
QInt QInt::operator~()
{
	QInt res;
	for (int i = 3; i >= 0; i--) {//chay cho tung block data
		res.data[i] = 0;
		res.data[i] = ~data[i];
	}
	return res;
}
QInt QInt::operator<<(unsigned int l)
{

	QInt temp = *this;
	QInt res;

	if (l == 0) {
		return temp;
	}

	if (l > 127 || l < 0) {
		//exception
	}

	//lap lai L lan de shift L bit
	for (unsigned int i = 0; i < l; i++) {

		for (unsigned int j = 0; j < 4; j++) {

			//copy bit so 1 o data[j] bang bit so 31 o data[j+1]
			if (j != 3) {
				Bit::bitCopy(temp.data[j + 1], 31, res.data[j], 0);
			}
			else {
				Bit::setBit0(res.data[j], 0);
			}

			//copy cac bit con lai
			for (unsigned int k = 1; k < 32; k++) {
				Bit::bitCopy(temp.data[j], k - 1, res.data[j], k);
			}
		}
		temp = res;
	}

	return res;
}
QInt QInt::operator>>(unsigned int l)
{
	QInt temp = *this;
	QInt res;
	if (l == 0) {
		return temp;
	}
	if (l > 127 || l < 0) {
		//exception
	}
	for (unsigned int i = 0; i < l; i++) {//lap lai L lan de shift L bit
		for (int j = 3; j >= 0; j--) {
			if (j != 0) { //copy bit so 31 o data[j] bang bit so 0 o data[j-1]
				Bit::bitCopy(temp.data[j - 1], 0, res.data[j], 31);
			}
			else { //if j==0
				Bit::setBit0(res.data[j], 31);
			}
			for (unsigned int k = 0; k < 31; k++) { //copy cac bit con lai
				Bit::bitCopy(temp.data[j], k + 1, res.data[j], k);
			}
		}
		temp = res;
	}
	return res;
}
bool QInt::rol(unsigned int l) // no param -> rotate 1 bit
{
	QInt temp = *this;
	QInt res;
	if (l > 127 || l < 1) {
		//exception
		return false;
	}
	for (unsigned int i = 0; i < l; i++) {//lap lai L lan de shift L bit
		for (unsigned int j = 0; j < 4; j++) {
			if (j != 3) { //copy bit so 1 o data[j] bang bit so 31 o data[j+1]
				Bit::bitCopy(temp.data[j + 1], 31, res.data[j], 0);
			}
			else { //if j==3
				Bit::bitCopy(temp.data[0], 31, res.data[j], 0);
			}
			for (unsigned int k = 1; k < 32; k++) { //copy cac bit con lai
				Bit::bitCopy(temp.data[j], k - 1, res.data[j], k);
			}
		}
		temp = res;
	}
	*this = res;
	return true;
}
bool QInt::ror(unsigned int l) //no param -> rotate 1 bit;
{
	QInt temp = *this;
	QInt res;
	if (l > 127 || l < 1) {
		//exception
		return false;
	}
	for (unsigned int i = 0; i < l; i++) {//lap lai L lan de shift L bit
		for (int j = 3; j >= 0; j--) {
			if (j != 0) { //copy bit so 31 o data[j] bang bit so 0 o data[j-1]
				Bit::bitCopy(temp.data[j - 1], 0, res.data[j], 31);
			}
			else { //if j==0
				Bit::bitCopy(temp.data[3], 0, res.data[j], 31);
			}
			for (unsigned int k = 0; k < 31; k++) { //copy cac bit con lai
				Bit::bitCopy(temp.data[j], k + 1, res.data[j], k);
			}
		}
		temp = res;
	}
	*this = res;
	return true;
}