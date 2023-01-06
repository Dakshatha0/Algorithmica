#include <bits/stdc++.h>
using namespace std;
int main(){
    int height;
    cout << "height: ";
    cin >> height;
    double acc = 9.8;
    int v = 0;
    double vf = sqrt(v*v + 2*acc*height);
    cout << vf << endl;
    return 0;
}