#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    string encryptedString;
    cout << "enter str: ";
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        encryptedString = str[i] + 3;
    }
    cout << encryptedString << endl;
    return 0;
}