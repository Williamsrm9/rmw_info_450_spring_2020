#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int year;
    cout << "*****TO STOP EXECUTING THE PROGRAM, ENTER 0*****" << endl;
    cout << "Please enter in a year: " << endl;
        
    cin >> year;
    
    
     while(year != 0) {
         
        if(year % 4 == 0 && year % 100 != 0) {
         
        cout << year << " is a LEAP YEAR\n";

cout << "Please enter in a year: " << endl;
        
    cin >> year;
           
       }
         
        else if(year % 4 == 0 && year % 400 == 0) {
         
        cout << year << " is a LEAP YEAR\n";

cout << "Please enter in a year: " << endl;
        
    cin >> year;
           
       }
       
       else {
           
                  cout << year << " is NOT a leap year\n";

cout << "Please enter in a year: " << endl;
        
    cin >> year;
           
       }
       
     }
           
       }
