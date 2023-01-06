#include <bits/stdc++.h>
using namespace std;
int main(){
    int decimal;
    cout << "enter: ";
    cin >> decimal;
    int convert;
    string res = " ";
    while(decimal > 0){
        convert = decimal % 2;
        res += to_string(convert);
        decimal /= 2;
    }
    for(int i = res.length()-1; i >= 0; i--){
        cout << res[i];
    }
    cout << endl;
    return 0;
}