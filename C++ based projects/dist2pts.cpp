//Calculating the Distance Between 2 points
//Author: Argonyte

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float x1,x2,y1,y2,dist;
    
    cout << "Enter X1, X2, Y1, Y2";
    cin >> x1 >> x2 >> y1 >> y2;

    dist = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    cout << "The Distance: " << dist << '\n';
}