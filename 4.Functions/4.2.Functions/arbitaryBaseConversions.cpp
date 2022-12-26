#include <bits/stdc++.h>
using namespace std;
int baseConversion(int a,int b,int num){
    int sum = 0,x = 0;
    while(x > 0){
        int rem = x%10;
        sum += rem*pow(a,b);
    }
    return sum;
}
int main(){
    int a,b,num;
    cout << "a: ";
    cin >> a;
    cout << "num: ";
    cin >> num;
    cout << "b: ";
    cin >> b;
    cout << baseConversion(num,a,b);

    return 0;
}