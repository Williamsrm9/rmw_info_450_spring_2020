#include <iostream>
using namespace std;
char  get_user_input();
void to_upper_case(char &letter);
int main(){
  char user_input_letter;
  cout << "Type in a letter grade, lowercase or uppercase." << endl; 
  if ('0' != (user_input_letter = get_user_input())){
    to_upper_case(user_input_letter);
    switch (user_input_letter){
      case 'A': cout << "Super Great job on an A!" << endl;break;
      case 'B': cout << "Great job on a B!" << endl;break;
      case 'C': cout << "Good job on a C!" << endl;break;
      case 'D': cout << "Keep at it, you can get there." << endl;break;
      case 'F': cout << "F is for #fail" << endl;break;
      default : cout << "This is not a valid grade: " << user_input_letter << endl;
    }
  }
  cout << "You have entered 0.  Exiting." << endl; 
}

char get_user_input(){
    
    char user_input_letter;
    to_upper_case(user_input_letter);
    switch (user_input_letter){
      case 'a': cout << "Super Great job on an A! Press 0 to exit." << endl;break; 
      case 'b': cout << "Great job on a B! Press 0 to exit." << endl;break;
      case 'c': cout << "Good job on a C! Press 0 to exit." << endl;break;
      case 'd': cout << "Keep at it, you can get there. Press 0 to exit." << endl;break;
      case 'f': cout << "F is for #fail. Press 0 to exit." << endl;break;
      case 'A': cout << "Super Great job on an A! Press 0 to exit." << endl;break;
      case 'B': cout << "Great job on a B! Press 0 to exit." << endl;break;
      case 'C': cout << "Good job on a C! Press 0 to exit." << endl;break;
      case 'D': cout << "Keep at it, you can get there. Press 0 to exit." << endl;break;
      case 'F': cout << "F is for #fail. Press 0 to exit." << endl;break;
      default : cout << "This is not a valid grade. Press 0 to exit. " << user_input_letter << endl;
    }
    
    

}
  
void to_upper_case(char &letter){
   
   cin >> &letter;
  
}
