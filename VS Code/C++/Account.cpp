#include<iostream>
using namespace std;
class Account {
public:
    int id;
    string name;
    int balance;
    Account(int id, string name) {
    }
    Account(int id, string name, int balance) {

    }
    int getID() {
        return id;
    }
    void setName(string name) {

    }
    string getName() {
        return name;
    }
    int getBalance() {
        return balance;
    }
    void deposit(int amount) {
        balance += amount;
    }
    void deposit(int amount) {
        if (balance < amount) {
            printf("That amount exceeds your current balance.​");
        }
        else {
            balance -= amount;
        }
    }
    void display() {
        printf("Id: %d \n", id);
        printf("Name: %d\n", name);
        printf("Balance: %d", balance);
    }

};