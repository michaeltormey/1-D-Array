#include <iostream>
using namespace std;

struct booking
{
	int booking_id;
	string customer_name;
	float ticket_price;
	int number_of_tickets;
	string movie_name;
};

void display_bookings(booking booking_list[], int size)
{
	for (int index = 0; index < size; index++)
	{
		cout << "\nBooking Identification: " << booking_list[index].booking_id << endl;
		cout << "Customer Name: " << booking_list[index].customer_name << endl;
		cout << "Price of Ticket: " << booking_list[index].ticket_price << endl;
		cout << "Number of Tickets: " << booking_list[index].number_of_tickets << endl;
		cout << "Movie Name: " << booking_list[index].movie_name << endl;
		float ticket_total = booking_list[index].number_of_tickets * booking_list[index].ticket_price;
		cout << "Total Amount: " << ticket_total << endl;
		cout << "----------------------------" << endl;
	}
}
	int main()
	{
		const int size = 3;

		booking booking_list[size];

		for( int index = 0; index < size; index++)
		{
			cout << "Enter the details for the customer " << index + 1 << endl;

			cout << "Booking Identification: ";
			cin >> booking_list[index].booking_id;

			cout << "Customer Name: ";
			cin >> booking_list[index].customer_name;

			cout << "Ticket Price: ";
			cin >> booking_list[index].ticket_price;

			cout << "Number of Tickets: ";
			cin >> booking_list[index].number_of_tickets;

			cout << "Movie Name: ";
			cin >> booking_list[index].movie_name;


			cout << "----------------------------" << endl;
		}

		display_bookings(booking_list, size);

		return 0;
	}
