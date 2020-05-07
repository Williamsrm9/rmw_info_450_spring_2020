#pragma once

#include "account.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class checking : public account{

private:
  int last10checks[10];

public:
  void WriteCheck(int checknum, double amount){
     Setbalance(Getbalance() - amount);

    for(int i=9; i>0; i--) {

      last10checks[i] = last10checks[i-1];
    }

    last10checks[0] = checknum;

    numwithdraws++;

  }

  checking() { 
    account();
  }

  checking(string val_name, long val_taxID, double val_balance ){
      account(val_name, val_taxID, val_balance);
  }

  void display(){

    cout << "Check register: " << endl;

    for(int i=0; i<10; i++ ){

        cout << last10checks[i] << endl;

    }

  cout << "Deposit record: " << endl;
 
  cout << numdeposits << endl;

  }
     
  };