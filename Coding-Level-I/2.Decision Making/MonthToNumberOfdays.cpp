#include <bits/stdc++.h>
using namespace std;
int main(){
    string monthName;
    cout << "Enter name of a month: ";
    cin >> monthName;
    if(monthName == "january" || monthName == "march" || monthName == "may" || monthName == "july" || monthName == "september" || monthName == "november"){
        cout << "The number of days is in this month : 30";
    }
    else if(monthName == "february"){
        cout << "The number of days in this month is: 28";
    }
    else{
        cout << "The number of days in this month is: 31";
    }
    return 0;
}