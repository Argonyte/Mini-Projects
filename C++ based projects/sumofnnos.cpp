#include <iostream>
using namespace std;

int main(){
    int n, sum;
    cout << "Enter n: ";
    cin >> n;
    sum = n * (n + 1)/2;
    cout << "Sum is: " << sum << '\n';
    return 0;
}