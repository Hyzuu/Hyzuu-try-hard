#include<iostream>
using namespace std;
class Animal {
public:
	virtual void sound() {
		cout << "some sound" << endl;
	}
	int tinhdientich(int chieudai, int chieurong) {
		return chieudai * chieurong;
	}
};

class Dog : public Animal {
public:
	void sound() {
		cout << "woof woof" << endl;
	}
	void play() {
		cout << "The dog is playing" << endl;
	}
};

int main() {
	Animal* animal = new Animal();
	animal->sound();
	animal = new Dog();
	animal->sound();
	return 0;
}