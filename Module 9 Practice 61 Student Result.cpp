#include <iostream>
using namespace std;


class Student
{
private:
	string student_name;
	int marks = 0;

public:
	void set_student_data(string name, int grades)
	{
		if (grades >= 0 && grades <= 100)
		{
			marks = grades;
		}
		else {
			marks = 0;
		}
	}

	bool is_pass()
	{
		return marks >= 40;
	}

	void display_result()
	{
		cout << "Student name: " << student_name << endl;
		cout << "Marks: " << marks << endl;
		cout << "Result: " << (is_pass() ? "Pass" : "Fail") << endl;
	}

};

int main()
{
	Student student_1;

	student_1.set_student_data("Asha", 55);
	student_1.display_result();

	return 0;
}
