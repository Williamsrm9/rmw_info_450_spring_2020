#pragma once

#include "account.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

 class savings : public account{


public:
  void DoWithdraw(double amount){
     
     Setbalance(Getbalance() - amount);
     numwithdraws++;

  }

  savings() { 
    account();
  }

  savings(string val_name, long val_taxID, double val_balance ){
      account(val_name, val_taxID, val_balance);
  }

  void display(){

  cout << "Withdraw record: " << endl;
 
  cout << numwithdraws << endl;

  cout << "Deposit record: " << endl;
 
  cout << numdeposits << endl;

  }

     
  };