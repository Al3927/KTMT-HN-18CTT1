#include <iostream>

class abc {
private:
	std::string a = "";
public: 

	std::string getA() { return a; }
	void sss() {
		a = "sss";
	}
	abc() {}
	~abc() {}
};

//void main() {
//	std::cout << "HHH";
//}