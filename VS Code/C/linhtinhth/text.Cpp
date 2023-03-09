#include<iostream>

using namespace std;

class Person {
private:
	string name;
	int dob;
public:
	Person(string name, int dob) {
		this->name = name;
		this->dob = dob;
	}
	void getName() {
		return name;
	}
};

class Student : public Person {
	
};

int main() {
	Student s("Hai", 1999, 8.8);
	cout << "Name: " << s.getName() << endl;
	cout << "Date of birth: " << s.getDob() << endl;
	cout << "GPA: " << s.getGpa() << endl;
	return 0;
}
