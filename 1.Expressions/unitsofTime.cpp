#include <bits/stdc++.h>
using namespace std;
int main(){
    long long seconds;
    long long day,hour,minute;
    cout << "enter: ";
    cin >> seconds;
    day = seconds / 86400;
    seconds = seconds % 86400;
    hour = seconds / 3600;
    seconds = seconds % 3600;
    minute = seconds / 60;
    seconds = seconds % 60;

    cout << day << ":" << hour << ":" << minute << ":" << seconds;
    return 0;
}