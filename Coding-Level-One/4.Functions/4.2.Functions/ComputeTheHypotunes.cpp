#include <bits/stdc++.h>
using namespace std;
int getHypotenuse(int s1,int s2){
    int hypotenuse;
    hypotenuse = sqrt(s1*s1 + s2*s2);
    return hypotenuse;
}
int main(){
    int side1,side2;
    cout << "enter sides: ";
    cin >> side1 >> side2;
    cout << getHypotenuse(side1,side2);
    return 0;
}