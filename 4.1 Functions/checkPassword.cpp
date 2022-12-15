#include <bits/stdc++.h>
using namespace std;
bool checkPassword(string password){
    int upperCaseCount = 0,digitCount = 0,lowerCaseCount = 0;
    for(int i = 0; i < password.length(); i++){
        if(isupper(password[i])){
            upperCaseCount++;
        }
        else if(isdigit(password[i])){
            digitCount++;
        }
        else if(islower(password[i])){
            lowerCaseCount++;
        }
    }
    if(password.length() >= 8 && upperCaseCount > 0 && digitCount > 0 && lowerCaseCount > 0){
            return true;
    }
    return false;
}
int main(){
    string password;
    cout << "enter password: ";
    cin >> password;
    cout << checkPassword(password);
    return 0;
}