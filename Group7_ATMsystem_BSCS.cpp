// ATM System
//Group 7
//if else statement ATM program
// Made by Juliana Jasmin D. Aliswag
// BSCS - 1D (STEM)
// October 28, 2020

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main ()
{
    int deposit = 0;
    int amount = 5000;
    int withdraw = 0;
    int choice = 0;
    int PIN = 0;
    char keypin;
    keypin = 0000;
    char comppin;
    
    cout << "Enter your PIN: ";
    cin >> PIN;
    
    comppin= (PIN, keypin);
    
    if (PIN==0000)
    {
    cout << "\nPIN Approved!\n";
        
    cout << "\n\t************************************";
    cout << "\n\t* Welcome to Group 7's Special ATM *";
    cout << "\n\t*                                  *";
    cout << "\n\t*     1. Check Balance             *";
    cout << "\n\t*     2. Withdraw                  *";
    cout << "\n\t*     3. Deposit                   *";
    cout << "\n\t*     4. Exit                      *";
    cout << "\n\t*                                  *";
    cout << "\n\t************************************";
    cout << "\n\n";
        
        int balance=1;
        int withdraw=2;
        int deposit=3;
        int Exit=4;
        
        s:
        cout << "\nSelect an Operation: ";
        cin >> choice;
        
        if (choice==1)
        {
            cout <<"\nYour current balance is: \n" << amount;
            goto s;
        }
        
        else if (choice==2)
        {
            cout << "\nEnter the amount you want to withdraw: ";
            cin >> withdraw;
            
            if (withdraw>amount)
            {
                cout << "\nYou don't have sufficient balance.\n";
                goto s;
            }
            
            else
            {
            amount=amount-withdraw;    
            cout << "\nYour current balance is: \n" << amount;
            
            goto s;
            }
        }
        
        else if (choice==3)
        {
            cout << "\nEnter the amount you want to deposit: ";
            cin >> deposit;
            
            amount=amount+deposit;
            
            cout << "\nYour current balance is: \n" << amount;
            
            goto s;
        }
        
        else if (choice==4)
        {
            cout << "\nThank You for Trusting Group 7's Services!";
        }
        
    }
    
    else if (PIN!=0)
    {
        cout << "\nInvalid PIN!" << "\nPlease try again.";
    }
    
    return 0;
    getch();
    
}
