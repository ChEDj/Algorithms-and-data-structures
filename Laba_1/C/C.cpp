
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float rad;
    float pi = 3.14;
    cout << "Enter radius of the circle:" << endl;
    cin >> rad;
    float C = 2 * pi * rad;
    float S = pi * pow(rad, 2);
    cout << "Length of the circle = " << C << endl;
    cout << "Area of the circle = " << S << endl;
}
