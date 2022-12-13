#include <bits/stdc++.h>
using namespace std;
int main(){
    int side1,side2,side3;
    cout << "Enter sides of all three sides: ";
    cin >> side1 >> side2 >> side3;
    int s = (side1 + side2 + side3) / 2;
    int area;
    int partialAns = s * (s - side1) * (s - side2) * (s - side3);
    area = sqrt(partialAns);
    cout << "The area of a triangle is: " << area << endl;
    
    return 0;
}