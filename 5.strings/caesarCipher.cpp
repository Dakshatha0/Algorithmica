#include <bits/stdc++.h>
using namespace std;
string shiftByThree(string s){
    for(int i = 0; i < s.size(); i++){
        s[i] += 3;
    }
    return s;
}
int main(){
    string s;
    cout << "enter: ";
    cin >> s;
    cout << shiftByThree(s);
    return 0;
}