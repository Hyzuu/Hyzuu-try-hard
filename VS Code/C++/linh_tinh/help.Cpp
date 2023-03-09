#include<iostream>
using namespace std;

class Base {
public:
    ~Base() {
        cout << "Base's destructor" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived's destructor" << endl;
    }
};

int main() {
    Base* b = new Derived();
    delete b;
    return 0;
}