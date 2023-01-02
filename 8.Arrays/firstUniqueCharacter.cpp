#include <bits/stdc++.h>
using namespace std;
int firstUniqueChar(string s){
    sort(s.begin(),s.end());
    int i;
    for(i = 0; i < s.length(); i++){
        if(s[i] == s[i+1]){
            return i;
            break;
        }
    }
    return -1;
}
int main(){
    string s;
    cout << "enter: ";
    cin >> s;
    cout << firstUniqueChar(s);
    return 0;
}