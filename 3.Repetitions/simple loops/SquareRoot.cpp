#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout << "x: ";
    cin >> x;
    int guess = x/2;
    while(abs(guess * guess - x) <= 10^(-12)){
        guess = (guess + x/guess) / 2;
    }
    cout << "The approx sqrt is: " << guess;
    return 0;
}