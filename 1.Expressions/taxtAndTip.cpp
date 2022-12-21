#include <bits/stdc++.h>
using namespace std;
int main(){
    int cost;
    cout << "enter: ";
    cin >> cost;
    double tax = (18/100)*cost;
    double tip = (5/100)*cost;
    cout << tax << " " << tip << " " << tax + tip << endl;
    return 0;
}