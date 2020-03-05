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
    
  cout <<  reverse(&phrase);
  
  return 0;
}

string reverse(string *s1)
{
    string letval;
    
    for(int i=(s1->length()-1);i>=0;i--) { 
     
    letval += s1->at(i);
     
 }

return letval;
 
}
