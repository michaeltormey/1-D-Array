#include <iostream>
using namespace std;


int main()
{
    const int max_row = 3;
    const int max_column = 4;
    int marks[max_row][max_column];
    int best_cashier_index;
    int best_cashier_total;
    int comparative_cashier_total = 0;
    int day_index;

    cout << "Enter the sales for the each of the four cashiers.\n";
    for (int row = 0; row < max_row; row++)
    {
        for (int column = 0; column < max_column; column++)
        {
            cin >> marks[row][column];

        }
        cout << row + 1 << " of " << max_row << " cashiers have been accounted for.\n";
    }
    cout << endl;


    // The following is the addition of each of the rows.
    /*cout << "The totoal of the first cashier over the last four days is: \n";
    cout << marks[0][0] + marks[0][1] + marks[0][2] + marks[0][3] << endl;

    cout << "The totoal of the secondcashier over the last four days is: \n";
    cout << marks[1][0] + marks[1][1] + marks[1][2] + marks[1][3] << endl;

    cout << "The totoal of the third cashier over the last four days is: \n";
    cout << marks[2][0] + marks[2][1] + marks[2][2] + marks[2][3] << endl;  */

    //cout << "Best sales days for each cashier: \n";
    for (int row = 0; row < max_row; row++)
    {
        best_cashier_total = marks[row][0];
        for (int column = 1; column < max_column; column++)
        {
            if (marks[row][column] > best_cashier_total)
            {
                best_cashier_total += marks[row][column];
                day_index = column;
            }
            
        }
        
        if (comparative_cashier_total < best_cashier_total)
        {
            comparative_cashier_total = best_cashier_total;
            best_cashier_index = row;
        }

        


        //cout << "Cashier " << (row + 1) << ": " << best_day << endl;
    }

    if (best_cashier_index == 0)
    {
        cout << "The best cashier is cashier 1.\n";
    }
    else if (best_cashier_index == 1)
    {
        cout << "The best cashier is cashier 2.\n";
    }
    else if(best_cashier_index == 2)
    {
        cout << "The best cashier is cashier 3.\n";
    }
    else
    {
        cout << "You must have done something wrong.\n";
    }
    cout << "The best day yeild day is day#"<< day_index<<" with $" << comparative_cashier_total << endl;
    
    return 0;
}