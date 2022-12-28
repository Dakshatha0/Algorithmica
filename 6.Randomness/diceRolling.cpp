#include <bits/stdc++.h>
using namespace std;
int main(){
    int min = 1,max = 6;
    int count = 0;
    for(int i = 1; i < 5; i++){
        cout << rand() % (max-1+min)+1 << endl;
        if(rand() == 1){
            count++;
        }
    }
    cout << count;
    return 0;
}