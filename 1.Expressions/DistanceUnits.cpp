#include <bits/stdc++.h>
using namespace std;
int main(){
    int feet;
    int inch;
    float yard,mile;
    cout << "Enter measurement in feet: ";
    cin >> feet;
    inch = feet * 12;
    cout << "\nIn inches: " << inch;
    yard = feet * 0.3333;
    cout << "\nIn yard: " << yard;
    mile = feet * 0.000189;
    cout << "\nIn miles: " << mile;
    return 0;
}