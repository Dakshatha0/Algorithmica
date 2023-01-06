#include <bits/stdc++.h>
using namespace std;
int main(){
    int amount;
    cout<< "enter: ";
    cin >> amount;
    double year1 = 0.0,year2 = 0.0,year3 = 0.0;
    double ROI = 0.04;
    year1 = amount + (ROI*amount);
    year2 = (year1*ROI) + year1;
    year3 = (year2*ROI) + year2;
    cout << year1 << " " << year2 << " " << year3; 
    return 0;
}