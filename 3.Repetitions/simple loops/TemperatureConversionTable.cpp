#include <bits/stdc++.h>
using namespace std;
int main(){
    double fahrenheit;
    cout << "CELSIUS : \t" << "FAHRENHEIT : " << endl;
    for(int i = 10; i < 100; i++){
        if(i % 10 == 0){
            cout << i << endl;
            fahrenheit = i * 9 / 5 + 32;
            cout << "\t\t\t" << fahrenheit << endl;   
        }
    }
    return 0;
}