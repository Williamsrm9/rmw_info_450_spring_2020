#include <iostream>
#include <fstream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){

    ofstream outputfile;
    outputfile.open("randoms.txt");

    int n;
    int countOut;

    srand(time(NULL));

     for (countOut = 0; countOut < 1000; countOut++) {

           n=(rand()%20000)-10000;

            outputfile << n << endl;
        }

    ifstream inputfile;
    inputfile.open("randoms.txt");

}
