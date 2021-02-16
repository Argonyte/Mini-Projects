//calculate simple interest
//author: argonyte

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int P, T, R;
    float SI;

    cout << "Enter P, T & R: ";
    cin >> P >> T >> R;

    SI = (P*T*R)/100;

    cout << "SI is: " << SI << '\n';
    return 0;
}