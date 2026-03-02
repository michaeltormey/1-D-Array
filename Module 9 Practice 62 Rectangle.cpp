#include <iostream>
using namespace std;


class Rectangle
{
private:
	float length;
	float width;

public:
	void set_dimensions(float rect_length, float rect_width)
	{
		length = rect_length;
		width = rect_width;

		float area = rect_length * rect_width;
		float perimeter = 2 * (rect_width + rect_length);
	}


	void dispaly_details()
	{
		cout << "Length: " << length << endl;
		cout << "Width: " << width << endl;
		cout << "Area: " << length*width<< endl;
		cout << "Perimeter: " << 2 * (length + width) << endl;
	}

};

int main()
{
	Rectangle rect_1;

	rect_1.set_dimensions(10,20);
	rect_1.dispaly_details();

	return 0;
}