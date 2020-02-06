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
char  get_user_input(){
  
}
void to_upper_case(char &letter){
   
   cin >> &letter;
   
   if(&letter == A || &letter == B || &letter == C || &letter == D || &letter == F)
   {
       char loopActivation
       
       cout << "Would you like to run this program again? Insert Y if yes, insert N if you would like to exit:" << endl;
       
       if(loopActivation == Y || loopActivation == y)
       {
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
       
    else if(loopActivation == N || loopActivation == n)
    {
        return 0;
    }
    else
    {
        cout << "Invalid response! Please enter Y or N." << endl;
        
        cout << "Would you like to run this program again? Insert Y if yes, insert N if you would like to exit:" << endl;
    }
    
   }
   
}

