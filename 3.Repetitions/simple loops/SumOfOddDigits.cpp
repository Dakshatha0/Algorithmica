#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,oddNum,sum = 0;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        oddNum = 2*i + 1;
        sum += oddNum;
    }
    cout << sum << endl;
    return 0;
}