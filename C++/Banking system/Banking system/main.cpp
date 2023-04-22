//
//  main.cpp
//  Banking system
//
//  Created by Morris Hinneh on 4/21/23.
//

#include <iostream>
#include <string>
using namespace   std;


int main()
{
    // Creating Attributes.
    int idNumber = 0;
    string name;
    float balance;
    float deposit = 0.0;
    float withdraw = 0.0;
    
    
    // Prompt for user input.
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter Balance: $";
    cin >> balance;
    
    // Creating a Menu
    cout << "Account Menu\n"<< endl;

    // Options to choice from the menu

     cout << " 0. Quit Program" << endl
          << " 1. Display Account Information"
          << endl << " 2. Add Deposit"
          << endl << " 3. Withdraw amount\n\n" ;
    
    int choice = -1;
    while(choice != 0)
    {
    cout << "Select from the menu: ";
    cin >> choice;
        
    if (choice == 1)
    {
    cout << " Your choice: " << choice;
    cout << " Account ID: " << idNumber << " Name: " << name << " Balance: " << balance<< endl;
    }

    if (choice == 2)
    {
    cout << " Your choice: " << choice << "\n";
    cout << " Deposit amount: ";
    cin >> deposit;
    balance = balance + deposit;
    }
        
    if (choice == 3)
    {
    cout << " Withdrawal amount: ";
    cin >> withdraw;
     balance = balance - withdraw;
    }
        
    }
        return 0;
}
