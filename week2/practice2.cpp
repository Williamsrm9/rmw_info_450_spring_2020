#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int j, value;
    cout << "*****TO STOP EXECUTING THE PROGRAM, ENTER 0*****" << endl;
    cout << "Please enter a positive integer: " << endl;
        
    cin >> value;
    
    
     while(value != 0) {
    

for(j=2; j <= (value/j); j++)

if(!(value%j)) break;

if(j > (value/j)) { 

cout << value << " is prime\n";

cout << "Please enter a positive integer: " << endl;
        
    cin >> value;
           
       }

else { 

cout << value << " is not prime\n";

cout << "Please enter a positive integer: " << endl;
        
    cin >> value;
         
       }
       
     }

}
