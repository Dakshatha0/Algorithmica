#include <bits/stdc++.h>
using namespace std;
int main(){
    int decimal;
    cout << "enter: ";
    cin >> decimal;
    while(decimal > 0){
        if(decimal % 2 == 0){
            cout << "0";
        }
        else{
            cout << "1";
        }
        decimal /= 2;
    }
    return 0;
}