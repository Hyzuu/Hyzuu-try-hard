#include<iostream>
using namespace std;
class Manager {
private:
	string name;
	print()

public:
	Manager() {

	}
	Manager(string name) {
		this->name = name;
	}

	string getName() {
		return name;
	}
};

class Employee {
private:
	string name;
	Manager manager;

public:
	Employee(string name, Manager manager) {
		this->name = name;
		this->manager = manager;
	}

	string getManagerName() {
		return manager.getName();
	}

	string getName() {
		return name;
	}
};

int main() {
	Employee s("hyzuu", );
	cout << s.getManagerName();
}