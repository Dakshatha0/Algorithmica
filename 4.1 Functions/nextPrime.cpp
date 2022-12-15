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
int nextPrime(int n){
    int m = n+1;
    while(m > 0){
        if(isPrime(m) == true){
            break;
        }
        else{
            m++;
        }
    }
    return m;
}
int main(){
    int num;
    cout << "num: ";
    cin >> num;
    cout << nextPrime(num);
    return 0;
}