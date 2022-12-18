#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cout << "enter: ";
    cin >> n1 >> n2 >> n3;
    if(n1 > n2 && n1 > n3){
        swap(n3,n1);
    }
    else if(n2 > n1 && n2 > n3){
        swap(n3,n2);
    }
    else if(n3 < n1 && n3 < n2){
        swap(n1,n3);
    }
    else if(n2 < n1 && n2 < n3){
        swap(n1,n2);
    }
    else if(n1 < n3 && n1 > n2 || n1 < n2 && n1 > n3){
        swap(n2,n1);
    }
    else if(n3 < n2 && n3 > n1 || n3 < n1 && n3 > n2){
        swap(n2,n3);
    }
    cout << "n1: " << n1 << " n2: " << n2 << " n3: " << n3;
    return 0;
}