//Calculating Volume of a cylinder
//Author: Argonyte

#include <iostream>

using namespace std;

int main(){
    float radius, height, volume;
    
    cout << "Enter the Radius: ";
    cin >> radius;
    cout << "Enter the Height: ";
    cin >> height;

    volume = 3.14*radius*radius*height;

    cout << "The Volume of the Cylinder is: " << volume << '\n';
    return 0;
}