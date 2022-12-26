#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s){
    string res;
    int i = 0;
    while(i < s.length()){
        while(i < s.length() && s[i] == ' ') i++;
        if(i >= s.length()) break;
        int j = i+1;
        while(j < s.length() && s[j] != ' ') j++;
        string sub = s.substr(i, j - i);
        if(res.length() == 0) res = sub;
        else res = sub + " " + res;
        i = j + 1;
    }
    return res;
}
int main(){
    string str;
    cout << "enter: ";
    cin >> str;
    cout << reverseWords(str);
    return 0;
}