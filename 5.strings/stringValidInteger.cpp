#include <bits/stdc++.h>
using namespace std;
bool isInteger(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[0] == '+' || s[0] == '-' || isdigit(s[0]) && isdigit(s[i+1]))
            return true;
    }
    return false;
}
int main(){
    string str;
    cout << "enter: ";
    cin >> str;
    cout << isInteger(str) << endl;
    return 0;
}