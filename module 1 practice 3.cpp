// 1-D Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int attempts[size];
    for (int index = 0; index < size; index++)
    {
        cin >> attempts[index];
        cout << endl;
    }
    int third_attempt = attempts[2];
    cout << third_attempt;

    return 0;

}