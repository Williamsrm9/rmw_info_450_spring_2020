#include "account.h"
#include "checking.h"
#include "savings.h"
#include "creditcard.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
 
int main(){

int action;
double amount;
int checknum;
string name;
checking check;
savings s;
creditcard cc;

check.Setbalance(100);
s.Setbalance(100);
cc.Setbalance(100);

while(action != 0) {

cout << "Checking balance: " << check.Getbalance() << " Savings balance: " << s.Getbalance() << " Credit Card balance: " << cc.Getbalance()<< endl;
cout << "1. Savings Deposit" << endl;
cout << "2. Savings withdrawal" << endl;
cout << "3. Checking Deposit" << endl;
cout << "4. Write A Check" << endl;
cout << "5. Credit Card Payment" << endl;
cout << "6. Make A Charge" << endl;
cout << "7. Display Savings" << endl;
cout << "8. Display Checking" << endl;
cout << "9. Display Credit Card" << endl;
cout << "0. Exit" << endl;

cin >> action;

switch(action){

      case 1: cout << "Enter the amount you wish to deposit: " << endl;
              cin >> amount;
              s.MakeDeposit(amount);
              break;
      
      case 2: cout << "Enter the amount you wish to withdraw: " << endl;
              cin >> amount;
              s.DoWithdraw(amount);
              break;

      case 3: cout << "Enter the amount you wish to deposit: " << endl;
              cin >> amount;
              check.MakeDeposit(amount);
              break;              
      
      case 4: cout << "Enter your check number: " << endl;
              cin >> checknum;
              cout << "Enter the amount you are writing the check for: " << endl;
              cin >> amount;
              check.WriteCheck(checknum, amount);
              break;

      case 5: cout << "Enter the amount of your payment: " << endl;
              cin >> amount;
              cc.MakePayment(amount);
              break;

      case 6: cout << "Enter the name of your charge: " << endl;
              cin >> name;
              cout << "Enter the amount of your charge: " << endl;
              cin >> amount;
              cc.DoCharge(name, amount);
              break;

      case 7: s.display();
              break;
      
      case 8: check.display();
              break;

      case 9: cc.display();
              break;

      case 0: return 0;

      default: cout << "This is not a valid selection. Please select a suitable option or exit." << endl;
              break;
}

}

}