#include<iostream>
#include "Person.Cpp"

using namespace std;

class Customer : Person {
private:
    int balance;
public:
    Customer(string name, string address, int balance) : Person(name, address) {
        this -> balance = balance;
    }
    
};
