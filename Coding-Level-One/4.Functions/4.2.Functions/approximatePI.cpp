#include <bits/stdc++.h>
using namespace std;
double approximatePI(int n){
    double ans = 0,d = 2;
    int changeSign = 1;
    for(int i = 1; i <= n; i++){
        ans += 1/( d * (d+1) * (d+2) )*changeSign;
        d += 2;
        changeSign *= -1;
    }
    return 3 + 4*ans;
}
int main(){
    int n;
    cout << "enter: ";
    cin >> n;
    cout << approximatePI(n);
    return 0;
}