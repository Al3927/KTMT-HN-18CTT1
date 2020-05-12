#include "QInt.h"

//Added by Nguyen Khang for UI

void QInt::input(std::string tempInput, int mode)
{
	bool isNeg = false;// kiem tra so am
	string input;
	QInt::mode md;

	setMode(md,mode);
	clear();


	//check if string is empty
	if (tempInput.empty()) {
		throw std::invalid_argument("No input.");
	}

	//check if decimal number is negative
	if ((tempInput[0] == '-') && (md == mode::decimal)) {
		isNeg = true;
	}

	//strip all non-numeric characters
	if (md == QInt::mode::hexadecimal) {
		tempInput.erase(std::remove_if(tempInput.begin(), tempInput.end(), NaN_hex), tempInput.end());
	}
	else {
		tempInput.erase(std::remove_if(tempInput.begin(), tempInput.end(), NaN), tempInput.end());
	}

	//if more than 128 characters after stripping, use only rightmost 128 characters
	if (tempInput.length() > 128) {
		input = tempInput.substr(tempInput.length() - 128);
	}
	else {
		input = tempInput;
	}


	//parse characters based on mode
	switch (md)
	{
	case QInt::mode::hexadecimal:
		hexInp(input);
		break;
	case QInt::mode::binary:
		binInp(input);
		break;
	case QInt::mode::decimal:
		decInp(input);
		break;
	default:
		//if mode not set, throw exception here
		throw std::invalid_argument("No mode.");
		break;
	}
	if (isNeg) {
		QInt one;

		one.clear();
		one.data[3] = 1;

		QInt temp = (~*this) + one;
		*this = temp;
	}
}

std::string QInt::print1(int mode)
{
	QInt::mode md;
	setMode(md,mode);
	string result;
	switch (md)
	{
	case QInt::mode::binary:
		result = binOut();
		break;
	case QInt::mode::decimal:
		result = decOut();
		break;

	case QInt::mode::hexadecimal:
		result = hexOut();
		break;
	default:
		break;
	}
	return result;
}

void QInt::setMode(QInt::mode& md, int mode)
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
		setMode(md);
		break;

	}
	cin.ignore(); // bo dau enter
}


//End UI



QInt::QInt()
{
	for (int i = 0; i < 4; i++)
	{
		data[i] = 0;
	}
}
QInt::QInt(unsigned int param)
{
	clear();
	data[3] = param;
}
QInt::~QInt()
{
}


void QInt::setMode(QInt::mode& md)
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
		setMode(md);
		break;

	}
	cin.ignore(); // bo dau enter
}
//-------------------------------------------EX

unsigned int QInt::MulAdd(const unsigned int& mul, const unsigned int add) {
	unsigned long long temp = 0; // tranh tran so

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

	//if overflow -> return overflowed part
	return temp >> 32;
}

void QInt::hexInp(string input)
{
	int count = 0;
	int len = input.length();
	while (count < len) {

		if ((input[count] >= '0' && input[count] <= '9')) {
			if (MulAdd(16, input[count] - '0') > 0) { // if overflow
				//undefined, do nothing
			}
		}
		else
			if (input[count] >= 'A' && input[count] <= 'F') {

				if (MulAdd(16, input[count] - 'A' + 10) > 0) { // if overflow
					//undefined, do nothing
				}
			}
			else
				if (input[count] >= 'a' && input[count] <= 'f') {
					if (MulAdd(16, input[count] - 'a' + 10) > 0) { //if overflow
						//undefined, do nothing
					}
				}
		count++;
	}
}

void QInt::binInp(string input)
{
	int count = 0;
	int len = input.length();
	while (count < len) {
		if ((input[count] >= '0' && input[count] <= '1')) {
			if (MulAdd(2, input[count] - '0') > 0) { //if overflow
				//undefined, do nothing
			}
		}
		count++;
	}
}

void QInt::decInp(string input)
{
	int count = 0;
	int len = input.length();
	while (count < len) {
		if ((input[count] >= '0' && input[count] <= '9')) {
			if (MulAdd(10, input[count] - '0') > 0) { //if overflow
				//undefined, do nothing
			}
		}
		count++;
	}
}

string QInt::hexOut()
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

string QInt::binOut()
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
		output = " " + output;// dau cach giua bit cua cac block -> cho de nhin thoi
	}
	return output;
}

string QInt::decOut()
{
	string output;

	QInt temp = *this;

	//if negative -> convert to pos and add -
	if (Bit::getBit(data[0], 31)) {
		temp = QInt(0) - temp;
		output = '-';
	}

	//if no data in data[0]-data[2] -> don't export
	for (int i = 0; i < 3; i++) {
		if (temp.data[i] != 0) {
			output.append(to_string(temp.data[i]));
		}
	}

	//export data[3] manually in case of QInt = 0
	output.append(to_string(temp.data[3]));

	return output;
}


void QInt::input()
{
	bool isNeg = false;// kiem tra so am
	string tempInput, input;
	QInt::mode md;

	setMode(md);
	clear();

	cout << "Nhap: ";
	cin >> tempInput;
	cout << endl;

	//check if string is empty
	if (tempInput.empty()) {
		throw std::invalid_argument("No input.");
	}

	//check if decimal number is negative
	if ((tempInput[0] == '-') && (md == mode::decimal)) {
		isNeg = true;
	}

	//strip all non-numeric characters
	if (md == QInt::mode::hexadecimal) {
		tempInput.erase(std::remove_if(tempInput.begin(), tempInput.end(), NaN_hex), tempInput.end());
	}
	else {
		tempInput.erase(std::remove_if(tempInput.begin(), tempInput.end(), NaN), tempInput.end());
	}

	//if more than 128 characters after stripping, use only rightmost 128 characters
	if (tempInput.length() > 128) {
		input = tempInput.substr(tempInput.length() - 128);
	}
	else {
		input = tempInput;
	}


	//parse characters based on mode
	switch (md)
	{
	case QInt::mode::hexadecimal:
		hexInp(input);
		break;
	case QInt::mode::binary:
		binInp(input);
		break;
	case QInt::mode::decimal:
		decInp(input);
		break;
	default:
		//if mode not set, throw exception here
		throw std::invalid_argument("No mode.");
		break;
	}
	if (isNeg) {
		QInt one;

		one.clear();
		one.data[3] = 1;

		QInt temp = (~*this) + one;
		*this = temp;
	}

	//used for debugging
	//cout << "Cac block: " << data[0] << " " << data[1] << " " << data[2] << " " << data[3] << endl;
}
void QInt::print()
{
	QInt::mode md;
	setMode(md);
	string result;
	switch (md)
	{
	case QInt::mode::binary:
		result = binOut();
		break;
	case QInt::mode::decimal:
		result = decOut();
		break;

	case QInt::mode::hexadecimal:
		result = hexOut();
		break;
	default:
		break;
	}
	cout << "Result: " << result << endl;
}

//----------MATH-OPERATOR---------

QInt QInt::operator+(QInt param)
{
	QInt res;
	int temp = 0; //bien nho
	res.clear();// khoi tao bien ket qua

	for (int i = 3; i >= 0; i--) {//chay cho tung block data
		for (int j = 0; j < 32; j++) {//bit cua tung block
			switch (temp + Bit::getBit(data[i], j) + Bit::getBit(param.data[i], j))//cong bit cua 2 tha, so voi bien nho roi xet TH
			{
			case 0:// 0 + 0 + 0 = 0 nho 0
				res.data[i] = Bit::setBit0(res.data[i], j);
				temp = 0;
				break;
			case 1:// 0 + 0 + 1 = 1 nho 0
				res.data[i] = Bit::setBit1(res.data[i], j);
				temp = 0;
				break;
			case 2:// 0 + 1 + 1 = 0 nho 1
				res.data[i] = Bit::setBit0(res.data[i], j);
				temp = 1;
				break;
			case 3:// 1 + 1 + 1 = 1 nho 1
				res.data[i] = Bit::setBit1(res.data[i], j);
				temp = 1;
				break;
			default:
				//do sth
				break;
			}
		}
	}
	return res;
}
QInt QInt::operator-(QInt param)
{
	QInt diff;// bien ghi ket qua
	QInt one;// 1

	diff.clear();
	one.clear();

	one.data[3] = 1;

	QInt minuend = (~param) + one; // lay so doi cua param
	// A - B = A + (-B)
	diff = *this + minuend;//cong so doi

	return diff;
}
QInt QInt::operator*(QInt param)
{
	QInt multiplier, multiplicand, result;

	multiplicand = param;
	multiplier = *this;
	int count = 0;// bien danh dau so lan cong de => shift trai bao nhieu don vi
	for (int i = 3; i >= 0; i--) {
		for (int j = 0; j < 32; j++) {
			if (Bit::getBit(multiplier.data[i], j))// x 1 thi cong them multiplicant dich trai theo count, x 0 thi khong can cong
			{
				result = result + (multiplicand << count);
			}
			count++;
		}
	}
	return result;
}
QInt QInt::operator/(QInt param)
{
	// So chia phai khac 0
	if (param == QInt(0)) {
		throw std::overflow_error("Divide by zero exception");
	}

	QInt dividend, divisor; //so bi chia, so chia
	QInt quotient = 0;// thuong
	int k = 0;
	bool isNeg = false;

	//check sign bit
	if (Bit::getBit(data[0], 31) == Bit::getBit(param.data[0], 31)) {
		if (Bit::getBit(data[0], 31)) {
			//both negative
			dividend = QInt(0) - *this;
			divisor = QInt(0) - param;
		}
		else {
			//both positive
			dividend = *this;
			divisor = param;
		}
	}
	else {
		isNeg = true;
		if (Bit::getBit(data[0], 31)) {
			// dividend neg, divisor pos
			dividend = QInt(0) - *this;
			divisor = param;
		}
		else {
			//dividend pos, divisor neg
			dividend = *this;
			divisor = QInt(0) - param;
		}
	}

	//edge cases
	if (dividend == divisor) {
		if (isNeg) {
			return QInt(0) - QInt(1);
		}
		return QInt(1);
	}
	if (dividend < divisor) {
		return QInt(0);
	}

	//left align
	do {
		divisor = divisor << 1;
		k++;
	} while ((divisor <= dividend) && (divisor > 0));

	while (k > 0) {
		k--;
		divisor = divisor >> 1;
		if (dividend >= divisor) {
			quotient = (quotient << 1) + 1;
			dividend = dividend - divisor;
		}
		else {
			quotient = quotient << 1;
		}
	}

	if (isNeg) {
		quotient = QInt(0) - quotient;
	}

	return quotient;
	//need remainder? use a-(a/b);
}

//---------------COMPARERATIVE-OPERATOR-----------
bool QInt::operator<(QInt param)
{
	if (*this == param) {
		return false;
	}

	QInt comp = *this - param;// bien chua hieu hai so -> de so sanh

	if (Bit::getBit(comp.data[0], 31)) { //bit most significant = 1 -> so am -> so bi tru nho hon so tru
		return true;
	}
	return false;
}
bool QInt::operator>(QInt param)
{
	if (*this == param) {
		return false;
	}

	QInt comp = *this - param;

	if (Bit::getBit(comp.data[0], 31)) {
		return false;
	}
	return true;

}
bool QInt::operator==(QInt param)
{
	for (int i = 0; i < 4; i++) { //chay cho tung block data tu dau den cuoi
		if (data[i] != param.data[i])
			return false;// neu co 1 bit khac thi khong bang nhau
	}
	return true;
}
bool QInt::operator<=(QInt param)
{
	return ((*this == param) == true) ? true : (*this < param);// xet dieu kien bang -> dieu kien nho hon
}
bool QInt::operator>=(QInt param)
{
	return ((*this == param) == true) ? true : (*this > param);
}



//-------------------------------------BIT-OPERATOR--------------
QInt QInt::operator&(QInt param)
{
	QInt res;
	for (int i = 3; i >= 0; i--) { //chay cho tung block data
		res.data[i] = 0;
		res.data[i] = (data[i] & param.data[i]);//and tung block
	}
	return res;
}
QInt QInt::operator|(QInt param)
{
	QInt res;
	for (int i = 3; i >= 0; i--) {//chay cho tung block data
		res.data[i] = 0;
		res.data[i] = (data[i] | param.data[i]);//or tung block
	}
	return res;
}
QInt QInt::operator^(QInt param)
{
	QInt res;
	for (int i = 3; i >= 0; i--) {//chay cho tung block data
		res.data[i] = 0;
		res.data[i] = (data[i] ^ param.data[i]);//xor tung block
	}
	return res;
}
QInt QInt::operator~()
{
	QInt res;
	for (int i = 3; i >= 0; i--) {//chay cho tung block data
		res.data[i] = 0;
		res.data[i] = ~data[i];//not tung block
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
	//lap lai L lan de shift L bit
	for (unsigned int i = 0; i < l; i++) {

		for (int j = 3; j >= 0; j--) {

			//copy bit so 31 o data[j] bang bit so 0 o data[j-1]
			if (j != 0) {
				Bit::bitCopy(temp.data[j - 1], 0, res.data[j], 31);
			}
			else {
				Bit::setBit0(res.data[j], 31);
			}

			//copy cac bit con lai
			for (unsigned int k = 0; k < 31; k++) {
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

	//lap lai L lan de shift L bit
	for (unsigned int i = 0; i < l; i++) {

		for (unsigned int j = 0; j < 4; j++) {

			if (j != 3) {
				//copy bit so 1 o data[j] bang bit so 31 o data[j+1]
				Bit::bitCopy(temp.data[j + 1], 31, res.data[j], 0);
			}
			else {
				Bit::bitCopy(temp.data[0], 31, res.data[j], 0);
			}

			//copy cac bit con lai
			for (unsigned int k = 1; k < 32; k++) {
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

	//lap lai L lan de shift L bit
	for (unsigned int i = 0; i < l; i++) {

		for (int j = 3; j >= 0; j--) {

			if (j != 0) {
				//copy bit so 31 o data[j] bang bit so 0 o data[j-1]
				Bit::bitCopy(temp.data[j - 1], 0, res.data[j], 31);
			}
			else {
				Bit::bitCopy(temp.data[3], 0, res.data[j], 31);
			}

			//copy cac bit con lai
			for (unsigned int k = 0; k < 31; k++) {
				Bit::bitCopy(temp.data[j], k + 1, res.data[j], k);
			}
		}
		temp = res;
	}

	*this = res;
	return true;
}