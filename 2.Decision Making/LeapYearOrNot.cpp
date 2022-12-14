#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "n: ";
    cin >> n;
    if(n % 400 == 0 || n % 4 == 0){
        cout << "leap year";
    }
    else if(n % 100 == 0){
        cout << "not a leap year";
    }
    else{
        cout << "Not a leap year";
    }
    return 0;
}