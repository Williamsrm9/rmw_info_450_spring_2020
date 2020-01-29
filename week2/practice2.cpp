#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    
    int value;
    cout << "*****TO STOP EXECUTING THE PROGRAM, ENTER 0*****" << endl;
    cout << "Please enter a positive integer: " << endl;
        
    cin >> value;
    
    while(value != 0) {
        
        for(int i = 2; i <= value / 2 || value == 1 || value == 2 || value == 3;){
            
   
                 if( value == 2){
           
           
                   cout<<value<<" is a PRIME number" << endl;

    cout << "Please enter a positive integer: " << endl;
        
    cin >> value;
           
       }
         
        
        
       else if(value == 1 || value % i == 0 && value / 9 == 1 ) {
           
           cout<<value<<" is NOT a prime number" << endl;
           
               cout << "Please enter a positive integer: " << endl;
        
    cin >> value;
         
       }
       
       

       
       else {
           
           cout<<value<<" is a PRIME number" << endl;

    cout << "Please enter a positive integer: " << endl;
        
    cin >> value;

       }
       
       
       
        
   
    
}

}

}
