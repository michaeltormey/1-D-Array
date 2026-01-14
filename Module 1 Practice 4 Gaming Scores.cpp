#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int score[size];
	
	cout << "Enter the five game scores.\n";
	for (int index = 0; index < size; index++)
	{
		cin >> score[index];
	}

	cout << "Here are the five game scores.\n";
	for (int index = 0; index < size; index++)
	{
		cout << score[index] << endl;
	}

	return 0;
}
