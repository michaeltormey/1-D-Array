#include <iostream>
using namespace std;

class Trip
{
private:
	float distance_km;
	float rate_per_km;

public:

	Trip()
	{
		distance_km = 0;
		rate_per_km = 12.5f;
	}


	void set_distance_km(float dist)
	{
		if (dist > 0)
		{
			distance_km = dist;
		}
		else
		{
			cout << "Invalid distance!" << endl;
		}
	}

	void get_rate_per_km(float rate)
	{
		if (rate > 0)
		{
			rate_per_km = rate;
		}
		else
		{
			cout << "Invalid rate!" << endl;
		}
	}

	float get_fare()
	{
		return distance_km * rate_per_km;
	}
};

int main()
{
	Trip trip;

	cout << "Enter the distance of the trip.\n";
	float dist;
	cin >> dist;

	cout << "Enter the rate fare of the trip.\n";
	float rate;
	cin >> rate;

	trip.set_distance_km(dist);
	trip.set_rate_per_km(rate);

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Your fare is: " << trip.get_fare() << endl;
	return 0;
}