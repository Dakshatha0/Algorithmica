#include <bits/stdc++.h>
using namespace std;
string randomPassword(){
    string res = "";
    int length = rand() % (10-7+1) + 7;
    int max = 126,min = 33;
    char generateChar;
    for(int i = 0; i < length; i++){
        generateChar = rand() % (max-min+1) + min;
        res += generateChar;
    }
    return res;
}

int main(){
    srand(time(0));
    cout << randomPassword();
    return 0;
}