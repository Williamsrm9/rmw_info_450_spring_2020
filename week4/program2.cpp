#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t, i;
    char text [30][80];
    
    for (t=0; t<30; t++) {
        cout <<"Please enter student for index " << t << ": ";
        gets(text[t]);
        if(!text[t][0]) break;
        
    }
    
    for(i=0; i<t; i++)
    cout << "students [" << i << "] = " << text[i] << '\n';
    
    return 0;
}

