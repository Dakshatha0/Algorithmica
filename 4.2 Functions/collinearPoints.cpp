#include <bits/stdc++.h>
using namespace std;
bool isCollinear(int x1,int x2,int x3, int y1, int y2,int y3){
    int m1,m2;
    m1 = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    if(m1 == 0){
        return true;
    }
    return false;
}
int main(){
    int x1,x2,x3,y1,y2,y3;
    cout << "enter: ";
    cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
    cout << isCollinear(x1,x2,x3,y1,y2,y3);

    return 0;
}