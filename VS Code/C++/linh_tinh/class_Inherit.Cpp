#include<iostream>
using namespace std;
class Base {
public:
	virtual ~Base() {
		cout << "Bake" << endl;
	}
};

class Derived :public Base {
public:
	~Derived() {
		cout << "Derived " << endl;
	}
};

int main() {
	Base* b = new Derived();
	delete b;
	return 0;
}