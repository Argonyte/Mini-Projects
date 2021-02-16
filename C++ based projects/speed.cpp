//Calculate Speed
//Author : Argonyte

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float a,u,v,speed;

    cout << "Enter u: ";
    cin >> u;
    cout << "Enter v: ";
    cin >> v;
    cout << "Enter a: ";
    cin >> a;

    speed = pow(v,2) - pow(u,2)/(2*a);
    cout << "Speed is: " << speed << '\n';

    return 0;
}