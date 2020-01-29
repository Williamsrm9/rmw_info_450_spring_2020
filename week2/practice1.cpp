#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    
    int value;
    cout << "*****TO STOP EXECUTING THE PROGRAM, ENTER 0*****" << endl;
    cout << "Please enter a positive value: " << endl;
        
    cin >> value;
    
    while(value != 0) {
        
   
    
    if(value > 0){
    cout << "Your value squared is: " << pow(value, 2) << endl;
    
          cout << "Please enter a positive value: " << endl;
        
    cin >> value;
    
        
    }
    
    else if(value < 0) {
        cout << "You have entered a negative value."<< endl;
    
          cout << "Please enter a positive value: " << endl;
        
    cin >> value;
    }
    
    else {
        
        return 0;
        
    }
    
    }
    
}
