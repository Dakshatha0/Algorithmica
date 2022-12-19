#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    int start = 0, end = s.size()-1;
    for(int i = 0; i < s.size(); i++){
        if(s[start] == s[end]){
            start++;end--;
            return true;
        }
    }
    return false;
}
int main(){
    string str;
    cout << "enter: ";
    cin >> str;
    cout << isPalindrome(str);
    return 0;
}