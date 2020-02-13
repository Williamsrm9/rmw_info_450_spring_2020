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
    
    cout << "-----This program will calculate the mean and standard deviation for a set of 10 numbers. Please enter in 10 whole numbers-----" << endl;
    cout << "" << endl;
    
    cout << "Enter the number for index 0:" << endl;
    cin >> integer_array[0];
    
    cout << "Enter the number for index 1:" << endl;
    cin >> integer_array[1];
    
    cout << "Enter the number for index 2:" << endl;
    cin >> integer_array[2];
    
    cout << "Enter the number for index 3:" << endl;
    cin >> integer_array[3];
    
    cout << "Enter the number for index 4:" << endl;
    cin >> integer_array[4];
    
    cout << "Enter the number for index 5:" << endl;
    cin >> integer_array[5];
    
    cout << "Enter the number for index 6:" << endl;
    cin >> integer_array[6];
    
    cout << "Enter the number for index 7:" << endl;
    cin >> integer_array[7];
    
    cout << "Enter the number for index 8:" << endl;
    cin >> integer_array[8];
    
    cout << "Enter the number for index 9:" << endl;
    cin >> integer_array[9];
    
    
    sum = integer_array[0] + integer_array[1] + integer_array[2] + integer_array[3] + integer_array[4] + integer_array[5] + integer_array[6] + integer_array[7] + integer_array[8] + integer_array[9];
    
    mean = sum / 10;
    
    sqdif_array[0] = pow((integer_array[0] - mean), 2);
    sqdif_array[1] = pow((integer_array[1] - mean), 2);
    sqdif_array[2] = pow((integer_array[2] - mean), 2);
    sqdif_array[3] = pow((integer_array[3] - mean), 2);
    sqdif_array[4] = pow((integer_array[4] - mean), 2);
    sqdif_array[5] = pow((integer_array[5] - mean), 2);
    sqdif_array[6] = pow((integer_array[6] - mean), 2);
    sqdif_array[7] = pow((integer_array[7] - mean), 2);
    sqdif_array[8] = pow((integer_array[8] - mean), 2);
    sqdif_array[9] = pow((integer_array[9] - mean), 2);
    
    SqDifSum = sqdif_array[0] + sqdif_array[1] + sqdif_array[2] + sqdif_array[3] + sqdif_array[4] + sqdif_array[5] + sqdif_array[6] + sqdif_array[7] + sqdif_array[8] + sqdif_array[9];
    
    SqDifMean = SqDifSum / 10;
    
    StdDev = sqrt(SqDifMean);
    
    cout << "" << endl;
    cout << "RESULTS: Mean = " << mean << " Standard Deviation = " << StdDev << endl;
