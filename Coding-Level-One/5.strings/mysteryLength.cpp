#include <bits/stdc++.h>
using namespace std;
string removeMysteryLength(string s){
    int l = s.length();
    for(int i = l - 1; i >= 0; i--){
        l--;
        if(l == stoi(s.substr(i))){
            return s.substr(0, l);
        }
    }
    return "";
}
int main(){
    string str;
    cout << "enter: ";
    cin >> str;
    cout << removeMysteryLength(str);
    return 0;
}