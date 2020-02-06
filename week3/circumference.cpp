#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14159265358979323846;
double calculateCircumference(double radius);

int main ()
{

    double radius;
    
    cout << "Please enter the radius of the circle:" << endl;
    
    cin >> radius;
    
    
    cout << "The circumference of the circle is: " << calculateCircumference << endl;
    
    return 0;
    
}

double calculateCircumference(double radius)
{
    int i;
    
    i = (radius * 2 * PI);
}
