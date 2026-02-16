

#include <iostream>
using namespace std;

struct employee_record
{
	int employee_id;
	int salary;
};

void change_marks(employee_record employee_copy);

int main()
{
	employee_record employee_main;

	employee_main.employee_id = 1;
	employee_main.salary = 120000;

	cout << "Before function call: " << employee_main.salary << endl;

	cout << "Address inside main: " << &employee_main << endl;

	change_marks(employee_main);

	cout << "After function call: " << employee_main.salary << endl;

	return 0;
}

void change_marks(employee_record employee_copy)
{
	employee_copy.salary = 150000;

	cout << "Inside function (copy): " << employee_copy.salary << endl;

	cout << "Address inside funtion: " << &employee_copy << endl;
}

