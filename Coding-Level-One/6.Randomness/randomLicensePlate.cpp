#include <bits/stdc++.h>
using namespace std;
string randomLicensePlate(){
    string res = "";
    char letters;int digits;
    int length = rand() % (7-6+1) + 6;
    if(length == 6){
        for(int i = 0; i < 3; i++){
            letters = rand() % (89-65+1) + 65;
            res += letters;
        }
        for(int i = 0; i < 3; i++){
            digits = rand() % (57-48+1) + 48;
            res += digits;
        }
    }
    else{
        for(int i = 0; i < 4; i++){
            digits = rand() % (57-48+1) + 48;
            res += digits;
        }
        for(int i = 0; i < 3; i++){
            letters = rand() % (89-65+1) + 65;
            res += letters;
        }
    }
    return res;
}
int main(){
    srand(time(0));
    cout << randomLicensePlate();    
    return 0;
}