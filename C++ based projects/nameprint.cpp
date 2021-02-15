//nameprint.cpp
//Author: Argonyte

#include <iostream>
using namespace std;

int main(){
    string name;
    cout << "Your Name : ";
    getline(cin,name);
    cout << "Printing Your Name: " << name << '\n';
    return 0;
}