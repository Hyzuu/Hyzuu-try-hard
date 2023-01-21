#include<iostream>

using namespace std;

struct Student {
	string name;
	int age;
	void display() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
	void getInformation() {
		cin >> name >> age;
	}
};

int main() {
	int n;
	Student students[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		students[i].getInformation();
	}
	for (int i = 0; i < n; i++) {
		students[i].display();
	}
	return 0;
}