#include<iostream>

using namespace std;

class Person {
private:
	string name;
public:
    Person() {
        cout << "123";
    }
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

class Student : Person {
public: 
    Student() {
        cout << "Hyzuu";
    }
};

int main() {
	Student s;
	return 0;
}