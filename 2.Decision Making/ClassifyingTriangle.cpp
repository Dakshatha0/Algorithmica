#include <bits/stdc++.h>
using namespace std;
int main(){
    int side1,side2,side3;
    cout << "Enter three sides of a triangle:\n";
    cin >> side1 >> side2 >> side3;
    if(side1 == side2 && side2 == side3){
        cout << "The triangle is equilateral\n";
    }
    else if(side1 == side2 || side2 == side3 || side1 == side3){
        cout << "The traingle is isosceles\n";
    }
    else{
        cout << "The triangle is scalene";
    }
    return 0;
}