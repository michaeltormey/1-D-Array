#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
	string employee_name;
	double salary;
};

class Manager : public Employee
{
public:
	double bonus;
};


int main()
{
	Manager manager_object;
	double total_income;

	getline(cin, manager_object.employee_name);
	cin >> manager_object.salary;
	cin >> manager_object.bonus;

	total_income = manager_object.salary + manager_object.bonus;

	cout << "manager Name: " << manager_object.employee_name << endl;
	cout << "Salary: " << manager_object.salary << endl;
	cout << "Bonus: " << manager_object.bonus << endl;
	cout << "Total Income: " << total_income << endl;


	return 0;

}