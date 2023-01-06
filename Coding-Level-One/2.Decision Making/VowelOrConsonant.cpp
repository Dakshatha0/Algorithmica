#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        cout << "The character is a vowel";
    }
    else{
        cout << "\nThe charactaer is a consonant";
    }
    return 0;
}