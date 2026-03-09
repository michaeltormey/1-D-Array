#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
	string book_title;

	float book_price;

public:
	void setBook(string title, float price);

	void displayBook();

};

void Book::setBook(string title, float price)
{
	book_title = title;
	book_price = price;
}

void Book::displayBook()
{
	cout << "Book Title: " << book_title << endl;
	cout << "Book Price: " << book_price << endl;
}

int main()
{
	Book my_book;

	string input_title;
	float input_price;

	cout << "Enter book title:\n";
	getline(cin, input_title);

	cout << "Enter book price:\n";
	cin >> input_price;

	my_book.setBook(input_title, input_price);
	my_book.displayBook();



	return 0;
}