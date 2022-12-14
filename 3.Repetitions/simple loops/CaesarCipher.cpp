#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    string encryptedString;
    cout << "enter str: ";
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'X'){
            cout << 'A';
        }
        else if(str[i] == 'Y'){
            cout << 'B';
        }
        else if(str[i] == 'Z'){
            cout << 'C';
        }
        if(str[i] == 'x'){
            cout << 'a';
        }
        else if(str[i] == 'y'){
            cout << 'b';
        }
        else if(str[i] == 'z'){
            cout << 'c';
        }
        if(isalpha(str[i])){
            str[i] = str[i] + 3;
            cout << str[i];
        }
        else{
            cout << " ";
        }
    }
    return 0;
}
