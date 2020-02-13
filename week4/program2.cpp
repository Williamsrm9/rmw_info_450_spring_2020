#include <iostream>
#include <cstdio>
using namespace std;

int main() {
        

    char name[30][80];
    
    void enter()
    {
        int i;
        char temp[80];
        
        for (i=0; i < 30; i++) {
            
            cout << "Please enter student for index " << i << ": ";
            cin >> name[i];
            
        }
    }
            
            void report()
            {
                int i;
                
                for (i=0; i < 30; i++) {
                    cout << "students[" << i << "] = " << name[i];
                }
            }
    }
        
