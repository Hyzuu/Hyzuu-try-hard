#include<iostream>

using namespace std;

class Person {
private:
	string name;
public:
	Person(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
};

class Student : public Person {
public:
	Student(string names) :Person(names) {
	}
};

int main() {
	Student s("Viet");
	cout << s.getName();
	return 0;
}
