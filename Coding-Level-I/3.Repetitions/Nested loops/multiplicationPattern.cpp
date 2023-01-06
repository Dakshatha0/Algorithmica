#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << setw(2) << i << " ";
    }
    cout << endl;
    cout << endl;
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= n; j++){
            cout << setw(2) << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}