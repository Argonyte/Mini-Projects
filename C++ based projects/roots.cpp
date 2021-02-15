//Roots of a Quadratic Equation
//Author: Argonyte

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a,b,c,r1,r2;
    cout << "Enter the Values of a,b,c: ";
    cin >> a >> b >> c;

    r1 = (-b+ sqrt(b*b-4*a*c))/(2*a);
    r2 = (-b- sqrt(b*b-4*a*c))/(2*a);

    cout << "Roots are: " << r1 << " " << r2 << '\n';
    return 0;
}