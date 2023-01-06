#include <bits/stdc++.h>
using namespace std;
int main(){
    int binary;
    cout << "enter: ";
    cin >> binary;
    int res = 0;
    int rem,i=0;
    while(binary != 0){
        rem = binary % 10;
        binary /= 10;
        res += rem * pow(2,i);
        i++;
    }
    cout << res << endl;
    return 0;
}