#include <iostream>
using namespace std;

struct Bank
{
	int acc_number;
	char holder_name[50];
	float balance;
};

int main()
{
	Bank customer_1;

	cout << "Enter the account number: \n";
	cin>>customer_1.acc_number;

	cin.ignore();

	cout << "Enter the account holder's name: \n";
	cin.getline(customer_1.holder_name, 50);

	cout << "Enter account balance: \n";
	cin>>customer_1.balance;

	cout << "\nAccount number: " << customer_1.acc_number << endl;
	cout << "Balance: $" << customer_1.balance << endl;
	cout << "This account belongs to: " << customer_1.holder_name;

	return 0;
}