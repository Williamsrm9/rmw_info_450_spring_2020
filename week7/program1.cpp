#include <iostream>
#include <string>
#include <cstring>
using namespace std;


string reverse(string *s1);

int main ()
{
  string name;

  cout << "Please, enter your full name: ";
  getline (cin,name);
  
  reverse(name);
  
  cout << "Hello, " << name << "!\n";
  return 0;
}

string reverse(string *s1)
{
    for(int i=(strlen(s1)-1);i>=0;i--)
 { cout<<s1[i];
 }
}
