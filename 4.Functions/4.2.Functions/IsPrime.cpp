#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i = 2; i < n/2; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int num;
    cout << "enter num: ";
    cin >> num;
    cout << isPrime(num);
    return 0;
}