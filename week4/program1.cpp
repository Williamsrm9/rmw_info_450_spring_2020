#include <iostream>
#include <cmath>
using namespace std;
int main()

{
    double integer_array[10];
    double sum;
    double mean;
    double sqdif_array[10];
    double SqDifSum;
    double SqDifMean;
    double StdDev;
    
    int t;
    
    cout << "-----This program will calculate the mean and standard deviation for a set of 10 numbers. Please enter in 10 whole numbers-----" << endl;
    cout << "" << endl;
    
    for(t =0; t<10; t++) {
    
    cout << "Enter the number for index " << t << ": ";
    cin >> integer_array[t];
    
    }
    
    sum = integer_array[0] + integer_array[1] + integer_array[2] + integer_array[3] + integer_array[4] + integer_array[5] + integer_array[6] + integer_array[7] + integer_array[8] + integer_array[9];
    
    mean = sum / 10;
    
    for(t =0; t<10; t++) {
    
    sqdif_array[t] = pow((integer_array[t] - mean), 2);
    
    }
    
    SqDifSum = sqdif_array[0] + sqdif_array[1] + sqdif_array[2] + sqdif_array[3] + sqdif_array[4] + sqdif_array[5] + sqdif_array[6] + sqdif_array[7] + sqdif_array[8] + sqdif_array[9];
    
    SqDifMean = SqDifSum / 10;
    
    StdDev = sqrt(SqDifMean);
    
    cout << "" << endl;
    cout << "RESULTS: Mean = " << mean << " Standard Deviation = " << StdDev << endl;
    
}
