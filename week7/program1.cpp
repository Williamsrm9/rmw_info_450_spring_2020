#include <iostream>
#include <string>
#include <cstring>
using namespace std;


string reverse(string *s1);

int main ()
{
  string phrase;

  cout << "Please enter a string: ";
  getline (cin,phrase);
  
  reverse(phrase);
  
  return 0;
}

string reverse(string *s1)
{
    for(int i=(strlen(s1)-1);i>=0;i--) { 
     
     cout<<s1[i];
 }
 
}
