#include <bits/stdc++.h>
using namespace std;
int main(){
    string month;cout << "month: ";
    cin >> month;
    int day;
    cout << "day: ";
    cin >> day;

    if(month == "april" || month == "may"){
        cout << "spring";
    }
    else if(month == "june" && day >= 21 || month == "september" && day < 22){
        cout << "summer";
    }
    else if(month == "september" && day >= 22 || month == "december" && day < 21){
        cout << "fall";
    }
    else if(month == "march" && day >= 20 || month == "june" && day < 21){
        cout << "spring";
    }
    else if(month == "july" || month == "august"){
        cout << "summer";
    }
    else if(month == "october" || month == "november"){
        cout << "fall";
    }
    else{
        cout << "winter";
    }
    return 0;
}
