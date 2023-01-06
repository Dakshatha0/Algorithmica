#include <bits/stdc++.h>
using namespace std;
string bigIntAddition(string s1,string s2){
    int e1 = s1.length(),e2 = s2.length();
    int res[max(e1,e2)] = {0};
    int carry = 0;
    string ans = "";
    for(int i = e2-1, j = e2 - 1; i >= 0, j >= 0; i--, j--){
        int firstDigit = s1[i] - '0';
        int secondDigit = s2[j] - '0';
        char temp = (firstDigit + secondDigit) % 10 + '0';
        ans = (char) ((firstDigit + secondDigit + carry) % 10 + '0') + ans;
        carry = (firstDigit + secondDigit + carry) / 10;
    }
    if(carry > 0){
        ans = char(carry + '0') + ans;
    }
    return ans;
}
int main(){
    string s1;
    string s2;
    cout << "enter: ";
    cin >> s1 >> s2;
    cout << bigIntAddition(s1,s2);
    return 0;
}