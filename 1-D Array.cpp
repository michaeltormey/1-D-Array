// 1-D Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int reading_practices[size];
    for (int index = 0; index < size; index++)
    {
        cin >> reading_practices[index];
    }
    int first_reading = reading_practices[0];
    cout << first_reading << endl;
    int last_reading = reading_practices[size-1];
    cout << last_reading<<endl;

    return 0;

}
