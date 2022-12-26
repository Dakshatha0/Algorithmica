#include <bits/stdc++.h>
using namespace std;
bool isValidTriangle(int s1,int s2,int s3){
    if(s1 >= s2 + s3 || s3 >= s1 + s2 || s2 >= s1 + s3 || s1 <= 0 || s2 <= 0 || s3 <= 0){
        return false;
    }
    return true;
}
int main(){
    int side1,side2,side3;
    cout << "enter sides: ";
    cin >> side1 >> side2 >> side3;
    cout << isValidTriangle(side1,side2,side3);
    return 0;
}