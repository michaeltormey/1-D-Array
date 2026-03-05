Module 6, Practice 50
#include <iostream>
using namespace std;

struct bank_account {
    int account_number;
    int balance;
};

void deposit_money(bank_account &account_ref, int deposit_amount) {
    account_ref.balance += deposit_amount;
    cout << "Balance inside function (reference): " 
         << account_ref.balance << endl;
}

int main() {
    bank_account acc;
    int deposit;

    cin >> acc.account_number;
    cin >> acc.balance;
    cin >> deposit;

    cout << "Balance before call (main): " 
         << acc.balance << endl;

    deposit_money(acc, deposit);

    cout << "Balance after call (main): " 
         << acc.balance << endl;

    return 0;
}






Module 6, Practice 52
#include <iostream>
using namespace std;

struct product_record {
    int product_id;
    float price;
};

product_record create_product(int product_id, float price) {
    product_record temp_product;
    temp_product.product_id = product_id;
    temp_product.price = price;

    return temp_product;
}

int main() {
    int id;
    float price;

    cin >> id;
    cin >> price;

    product_record product = create_product(id, price);

    cout << "Product ID: " << product.product_id << endl;
    cout << "Price: " << product.price << endl;

    return 0;
}



Module 6, Practice 53
#include <iostream>
using namespace std;

struct result_record {
    int total;
    float average;
};

result_record calculate_result(int mark1, int mark2, int mark3) {
    result_record result;
    result.total = mark1 + mark2 + mark3;
    result.average = result.total / 3.0;

    return result;
}

int main() {
    int m1, m2, m3;

    cin >> m1 >> m2 >> m3;

    result_record final_result = calculate_result(m1, m2, m3);

    cout << "Total: " << final_result.total << endl;
    cout << "Average: " << final_result.average << endl;

    return 0;
}







Module 7, Practice 59
#include <iostream>
#include <string>
using namespace std;

enum order_status {
    placed,
    preparing,
    out_for_delivery,
    delivered
};

struct order {
    int order_id;
    string customer_name;
    float total_amount;
    order_status status;
};

int main() {
    order order_1;
    int status_choice;

    cout << "Enter Order ID: ";
    cin >> order_1.order_id;

    cout << "Enter Customer Name: ";
    cin >> order_1.customer_name;

    cout << "Enter Total Amount: ";
    cin >> order_1.total_amount;

    cout << "Choose Order Status:" << endl;
    cout << "0 - Placed" << endl;
    cout << "1 - Preparing" << endl;
    cout << "2 - Out for Delivery" << endl;
    cout << "3 - Delivered" << endl;

    cout << "Enter your choice: ";
    cin >> status_choice;

    if (status_choice == 0)
        order_1.status = placed;
    else if (status_choice == 1)
        order_1.status = preparing;
    else if (status_choice == 2)
        order_1.status = out_for_delivery;
    else
        order_1.status = delivered;

    cout << endl << "Order Summary" << endl;
    cout << "Order ID: " << order_1.order_id << endl;
    cout << "Customer: " << order_1.customer_name << endl;
    cout << "Total Amount: " << order_1.total_amount << endl;

    if (order_1.status == placed)
        cout << "Status: Placed" << endl;
    else if (order_1.status == preparing)
        cout << "Status: Preparing" << endl;
    else if (order_1.status == out_for_delivery)
        cout << "Status: Out for Delivery" << endl;
    else
        cout << "Status: Delivered" << endl;

    return 0;
}





Module 7, Practice 60
#include <iostream>
#include <string>
using namespace std;

enum match_result { win, loss, draw };

struct player {
    int player_id;
    string player_name;
    int goals_scored;
};

struct team {
    string team_name;
    match_result results[3];
    int total_goals;
    int points;
};

int main() {
    player league_players[3][4];
    team teams[3];

    // Input team names
    for (int i = 0; i < 3; i++) {
        cout << "Enter Team " << i + 1 << " name: ";
        cin >> teams[i].team_name;
        teams[i].total_goals = 0;
        teams[i].points = 0;
    }

    // Input players
    for (int i = 0; i < 3; i++) {
        cout << "--- Enter Players for Team "
             << teams[i].team_name << " ---" << endl;

        for (int j = 0; j < 4; j++) {
            cout << "Player ID: ";
            cin >> league_players[i][j].player_id;

            cout << "Player Name: ";
            cin >> league_players[i][j].player_name;

            cout << "Goals Scored: ";
            cin >> league_players[i][j].goals_scored;

            teams[i].total_goals += league_players[i][j].goals_scored;
        }
    }

    // Input match results
    for (int i = 0; i < 3; i++) {
        cout << "--- Enter Results for "
             << teams[i].team_name << " ---" << endl;

        for (int j = 0; j < 3; j++) {
            int choice;
            cout << "Match " << j + 1
                 << " (0-win,1-loss,2-draw): ";
            cin >> choice;

            if (choice == 0) {
                teams[i].results[j] = win;
                teams[i].points += 3;
            }
            else if (choice == 2) {
                teams[i].results[j] = draw;
                teams[i].points += 1;
            }
            else {
                teams[i].results[j] = loss;
            }
        }
    }

    // Determine winner
    int winner_index = 0;
    for (int i = 1; i < 3; i++) {
        if (teams[i].points > teams[winner_index].points ||
           (teams[i].points == teams[winner_index].points &&
            teams[i].total_goals > teams[winner_index].total_goals)) {
            winner_index = i;
        }
    }

    // Display report
    cout << endl
         << "=========== SOCCER TOURNAMENT REPORT ===========" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Team: " << teams[i].team_name << endl;
        cout << "Total Goals: " << teams[i].total_goals << endl;
        cout << "Total Points: " << teams[i].points << endl;
        cout << "-----------------------------------------------" << endl;
    }

    cout << "Tournament Winner: "
         << teams[winner_index].team_name << endl;
    cout << "Points: " << teams[winner_index].points
         << " | Goals: " << teams[winner_index].total_goals << endl;

    return 0;
}



Module 8, Practice 54
#include <iostream>
using namespace std;

enum PowerState {
    Off,
    On,
    Sleep
};

int main() {
    PowerState device_state = Sleep;

    switch (device_state) {
        case Off:
            cout << "Device is turned off" << endl;
            break;
        case On:
            cout << "Device is running" << endl;
            break;
        case Sleep:
            cout << "Device is in power-saving mode" << endl;
            break;
    }

    return 0;
}




Module 8, Practice 54 Food Tracker:
#include <iostream>
#include <string>
using namespace std;

enum OrderStatus {
    Placed,
    Cooking,
    Ready,
    Delivered
};

int main() {
    string input;
    OrderStatus status;

    cout << "Enter order status (Placed/Cooking/Ready/Delivered): ";
    cin >> input;

    if (input == "Placed")
        status = Placed;
    else if (input == "Cooking")
        status = Cooking;
    else if (input == "Ready")
        status = Ready;
    else if (input == "Delivered")
        status = Delivered;
    else {
        cout << "Invalid status entered." << endl;
        return 0;
    }

    switch (status) {
        case Placed:
            cout << "Your order has been placed." << endl;
            break;
        case Cooking:
            cout << "Your food is being prepared." << endl;
            break;
        case Ready:
            cout << "Your food is ready. Please collect it!" << endl;
            break;
        case Delivered:
            cout << "Your order has been delivered." << endl;
            break;
    }

    return 0;
}




Module 8, Practice 55
#include <iostream>
#include <string>
using namespace std;

enum TransactionType {
    Deposit,
    Withdraw,
    CheckBalance,
    Exit
};

int main() {
    string input;
    TransactionType transaction;

    cout << "Enter transaction (Deposit/Withdraw/CheckBalance/Exit): ";
    cin >> input;

    if (input == "Deposit")
        transaction = Deposit;
    else if (input == "Withdraw")
        transaction = Withdraw;
    else if (input == "CheckBalance")
        transaction = CheckBalance;
    else if (input == "Exit")
        transaction = Exit;
    else {
        cout << "Invalid transaction type." << endl;
        return 0;
    }

    switch (transaction) {
        case Deposit:
            cout << "Processing deposit..." << endl;
            break;
        case Withdraw:
            cout << "Processing withdrawal..." << endl;
            break;
        case CheckBalance:
            cout << "Displaying current balance..." << endl;
            break;
        case Exit:
            cout << "Exiting ATM. Thank you!" << endl;
            break;
    }

    return 0;
}




Module 8, Practice 56
#include <iostream>
using namespace std;

enum HomeMode {
    Home = 1,
    Away = 2,
    Night = 3,
    Vacation = 4
};

int main() {
    int choice;

    cout << "Enter mode (1-Home, 2-Away, 3-Night, 4-Vacation): ";
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cout << "Invalid mode selected." << endl;
        return 0;
    }

    HomeMode mode = static_cast<HomeMode>(choice);

    switch (mode) {
        case Home:
            cout << "Home Mode: All systems normal." << endl;
            break;
        case Away:
            cout << "Away Mode: Security system activated." << endl;
            break;
        case Night:
            cout << "Night Mode: Lights dimmed, doors locked." << endl;
            break;
        case Vacation:
            cout << "Vacation Mode: Energy-saving and full security enabled." << endl;
            break;
    }

    return 0;
}


Once again, sorry for the inconvenience, but since i didn't have access to the AUM, advanced computers at the time of writing these codes, i wasnt able to create the codes in the same compiler i ususally use.
