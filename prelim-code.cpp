/******************************************************************************

/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
using namespace std;


int main()
{
    int balance, amount_to_withdraw;
    
    cout << "Input current balance: ";
    cin >> balance;
    
    cout << "------------------------------------------------------";
    
    cout << "Current Balance: " + balance <<endl;
    
    cout << "Enter amount to withdraw: ";
    cin >> amount_to_withdraw;
    
    //balance - amount_to_withdraw;
    
    if (balance > amount_to_withdraw)
        {
            cout<<"Withdraw successful!";
            
            
            cout << "Total balance: " + (balance - amount_to_withdraw) <<endl;
        }
        
        
        
    else if (balance < amount_to_withdraw)
        {
            cout<< "Insufficient Funds" << endl;
            //return 24;
        }
    
    cout << "Total Balance left: ";
    cout << balance - amount_to_withdraw;
    
    /*while (amount_to_withdraw < balance);
    {
        balance - amount_to_withdraw;
        if (balance > amount_to_withdraw)
        {
            cout<<"Withdraw successful"<< endl;
            return 24;
        }
        
        else if (balance < amount_to_withdraw)
        {
            cout<< "Insufficient Funds" << endl;
            return 24;
        }
        
    }*/
    
    

    return 0;
}
