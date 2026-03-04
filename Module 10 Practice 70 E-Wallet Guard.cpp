#include <iostream>
using namespace std;

class EWallet
{
private:
	int balance;

public:

	EWallet()
	{
		balance = 0;
	}


	void set_balance(int new_balance)
	{
		if (balance = 0)
		{
			balance = new_balance;
		}
		else
		{
			cout << "Invalid balance!\n";
		}
	}

	int get_balance()
	{
		return balance;
	}
	void spend(int amount)
	{
		if (amount > 0 && amount <= balance)
		{
			balance -= amount;
		}
		else
		{
			cout << "You're Too Broke!\n";
		}
	}
};

int main()
{
	EWallet wallet;

	int initial_balance;
	int spend_amount;

	cout << "Enter the amount that you have in your account.\n";
	cin >> initial_balance;

	cout << "Enter the amount of money that you want to deduct.\n";
	cin >> spend_amount;

	wallet.set_balance(initial_balance);
	wallet.spend(spend_amount);

	cout << "The total money that you've got: " << wallet.get_balance() << endl;


	return 0;
}