#include <bits/stdc++.h>
using namespace std;
bool getPerfectNumber(int num){
    int sum = 0;
    for(int i = 1; i <= num / 2; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum != num){
        return false;
    }
    return true;
}
int main(){
    int num;
    cout << "num: ";
    cin >> num;
    cout << getPerfectNumber(num);
    return 0;
}