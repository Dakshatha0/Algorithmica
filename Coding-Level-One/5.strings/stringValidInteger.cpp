#include <bits/stdc++.h>
using namespace std;
bool isInteger(string s){
    string val = " ";
    for(int i = 1; i < s.size(); i++){
        if(s[0] == '-' || s[0] == '-' || isdigit(s[0]) && isdigit(s[i])){
            val += s[i];
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    string str;
    cout << "enter: ";
    cin >> str;
    cout << isInteger(str) << endl;
    return 0;
}
