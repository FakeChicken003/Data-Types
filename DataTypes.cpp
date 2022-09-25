/// @file DataTypes.cpp
/// @author Jordan Scherf <5005736913@student.csn.edu>
/// @date 02/08/2021
/// @note I pledge my word of honor that I have complied with the
/// CSN Academic Integrity Policy while completing this assignment.
/// @brief This lab demonstates the Understanding of the diffrent data types
/// and implementation of equations to solve mathmatic problems. Outputs a table that
/// displays a sellers name, house price, the commision to the agent, and the total
/// cost to sell the home.
/// @note Time Taken to Develop Program is 4 hours with assitance of TA
/// Jairef Fowler.

// include statements iostream, string
// using namespace statement std

/**
 Use the following memory table to show what occurs in memory when C++ code is
 executed. (Include line numbers as documentation only. Do not use line numbers
 when entering your final program.)

 To fill out the memory table, use two lines for each variable. On one line,
 enter declaration information. Write the name of the declared variable, its
 data type, and the line number at declaration. On the next line in the memory
 table, enter test data for that variable. The variable 'name' is entered as an
 example, but you may use different variable identifiers. And of course, use 
 actual line numbers from your solution when completing the table.
+-----------+-----------+-----------+----------------+------------------------+
| Variable  | Data      | Value in  | Line Number    | Line Number when       |
| Name      | Type      | Memory    | at Declaration | Initialized or Changed |
+-----------+-----------+-----------+----------------+------------------------+
| name      | string    | ?         |             24 |                     31 |
| home_price| float     | 4 bytes   |             38 |                     47 |
| Agency    | float     | 4 bytes   |             39 |                     51 |
| Agent     | float     | 4 bytes   |             40 |                     52 |
|           |           |           |                |                        |
+-----------+-----------+-----------+----------------+------------------------+
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    // local constant definition(s)
     const float mls = .06;
     const float agent_commission = .015 ;
    // local variable declaration(s)
    string name;
    float home_price;
    float agency_total_commission;
    float agent_total_commission;
    // input phase
    cout << "Please enter the owner's last name: ";
    cin >> name;
    cout << endl;

    cout << "Please enter the sales price of the home ($): ";
    cin >> home_price;
    cout << endl;
    // processing phase

    //cin >> agency_total_commission = << mls << * << home_price <<;
    //cin >> agent_total_commission = << agent_commission << * 
    //<< agency_total_commission <<;
    agency_total_commission = mls * home_price;
    agent_total_commission = home_price * agent_commission;

    // output phase
    cout << "The "<< name <<"'s home sold for $"<< home_price;
    cout << endl;

    cout << "The cost to sell the home is $"<< agency_total_commission;
    cout << endl;

    cout << "The selling or listing agent commission is $"<< agent_total_commission;
    cout << endl;
    // return statement
    return 0;
}


