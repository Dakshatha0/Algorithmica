#include <bits/stdc++.h>
using namespace std;
bool isInteger(string s){
    string val = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[0] == '+' || s[0] == '-' || isdigit(s[0]) && isdigit(s[i])){
            val += s[i];
        }
        else if(isalpha(s[i])){
            return false;
        }
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
