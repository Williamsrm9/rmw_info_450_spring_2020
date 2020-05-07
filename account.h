#pragma once

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class account{

private:
    string name;
    long taxID;
    double balance;

    protected:
      int numdeposits=0;
      int numwithdraws=0;

    public:
      void SetName(string val_name){
        name = val_name;
      }

      void SetTaxID(long val_taxID){
        taxID = val_taxID;
      }

      void Setbalance(double val_balance){
        balance = val_balance;
      }

      string GetName() const {
        return name;
      }

      int GetTaxID() const {
        return taxID;
      }

      int Getbalance() const {
        return balance;
      }

      void MakeDeposit(double amount) {
        balance += amount;
        numdeposits++;
      }

      account() {

      }

      account(string val_name, long val_taxID, double val_balance ){

          name = val_name;
          taxID = val_taxID;
          balance = val_balance;
      }

      void display(){
        cout << "Name: " << name << " TaxID: " << taxID << " Balance: " << balance << endl;
      }
};