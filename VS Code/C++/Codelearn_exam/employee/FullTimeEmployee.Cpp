#include "Employee.cpp"

class FullTimeEmployee : public Employee {
public:
	FullTimeEmployee(string name, int paymentPerHour) :Employee(name, paymentPerHour) {
	}

public:
	int calculateSalary() {
		return 8 * getPaymentPerHour();
	}
};