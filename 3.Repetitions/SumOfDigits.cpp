#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int rem;
    int div = 0;
    int sumOfDigits = 0;
    while(num > 0){
        rem = num % 10;
        sumOfDigits += rem;
        num = num / 10;
    }
    cout << sumOfDigits << "\n";
    return 0;
}