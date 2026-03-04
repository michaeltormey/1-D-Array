#include <iostream>
using namespace std;

class Thermostat
{
private:
	int temperature;

public:

	Thermostat()
	{
		temperature = 24; //default temperature in farenheit (for occasion)
	}


	void set_temperature(int t)
	{
		if (t >= 16 && t <= 30)
		{
			temperature = t;
		}
		else
		{
			cout << "Invalid temperature!\n";
		}
	}

	int get_temperature()
	{
		return temperature;
	}
};

int main()
{
	Thermostat room;

	int new_temp;
	cout << "Enter the temperature of the room you are in.\n";
	cin >> new_temp;

	room.set_temperature(new_temp);

	cout << "The temperature in the room is apporximately " << room.get_temperature() << " degrees Farenheit.\n";

	return 0;
}