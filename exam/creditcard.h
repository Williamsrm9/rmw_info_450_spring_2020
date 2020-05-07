#pragma once

#include "account.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class creditcard : public account{

private:

  long cardnumber;
  string last10charges[10];

public:
  void DoCharge(string name, double amount){
     Setbalance(Getbalance() - amount);

    for(int i=9; i>0; i--) {

      last10charges[i] = last10charges[i-1];
    }

    last10charges[0] = name;
    numwithdraws++;

  }


  void MakePayment( double amount){

    Setbalance(Getbalance() + amount);
    numdeposits++;
  }

creditcard() { 
    account();
  }

  creditcard(string val_name, long val_taxID, double val_balance ){
      account(val_name, val_taxID, val_balance);
  }

  void display(){

    cout << "Account charges: " << endl;

    for(int i=0; i<10; i++ ){

        cout << last10charges[i] << endl;

    }

  cout << "Deposit record: " << endl;
 
  cout << numdeposits << endl;

  }
     
  };