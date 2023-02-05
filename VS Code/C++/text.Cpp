#include <iostream>

using namespace std;

class Student {

public:
    Student(string name) {
        cout << "My name is " << name;
    }
};

int main() {
    Student s("Viet");
    return 0;
}