#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float radius, area;

    cout << "Enter The Radius of the Circle: ";
    cin >> radius;

    area = 3.14 * pow(radius,2);

    cout << "Area of the Circle is: " << area << '\n';
    return 0;
}