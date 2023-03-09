#include<iostream>
#include "Person.Cpp"

class Employee : Person {
private:
    int salary;
public:
    Employee (string name, string address, int salary) : Person(name, address) {
        this -> salary = salary;
    }
    void display() {
        cout << "Salary: " << salary << endl;
    }
};