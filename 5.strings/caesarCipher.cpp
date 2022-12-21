#include <bits/stdc++.h>
using namespace std;
string shiftByThree(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'x'){
            cout << 'a';
        }
        else if(s[i] == 'y'){
            cout << 'b';
        }
        else if(s[i] == 'z'){
            cout << 'c';
        }
        else if(s[i] == 'X'){
            cout << 'A';
        }
        else if(s[i] == 'Y'){
            cout << 'B';
        }
        else if(s[i] == 'Z'){
            cout << 'C';
        }
        s[i] += 3;
    }
    return s;
}
int main(){
    string s;
    cout << "enter: ";
    cin >> s;
    cout << shiftByThree(s);
    return 0;
}