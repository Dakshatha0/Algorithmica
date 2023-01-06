#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cout << "enter btw a and h: ";
    cin >> c;
    int i;
    cout << "enter btw 1 to 8: ";
    cin >> i;
    if((c == 'a' || c == 'c' || c == 'e' || c == 'g') && i % 2 != 0){
        cout << "black square";
    }
    else if((c == 'a' || c == 'c' || c == 'e' || c == 'g') && i % 2 == 0){
        cout << "white square";
    }
    else if((c == 'b' || c == 'd' || c == 'f' || c == 'h') && i % 2 != 0){
        cout << "white square";
    }
    else{
        cout << "black square";
    }
    return 0;
}