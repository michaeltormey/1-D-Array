#include <iostream>
#include <string>
using namespace std;

class Product
{
public:

	string product_name;
	double product_price;

};

class DiscountedProduct : public Product
{
public:
	double discount_percentage;
};

int main()
{
	DiscountedProduct product_object;
	double discount_amount;
	double final_price;

	getline(cin, product_object.product_name);
	cin >> product_object.product_price;
	cin >> product_object.discount_percentage;

	discount_amount = product_object.product_price * product_object.discount_percentage / 100.0;
	final_price = product_object.product_price - discount_amount;

	cout << "Product Name: " << product_object.product_name << endl;
	cout << "Origianl Price: " << product_object.product_price << endl;
	cout << "Discount Percentage: " << product_object.discount_percentage << endl;
	cout << "Final Price: " << final_price << endl;

	return 0;

}