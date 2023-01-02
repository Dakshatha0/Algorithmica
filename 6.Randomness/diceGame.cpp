#include <bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0));
    int dice,count = 0;
    dice = rand() % 6 + 1;
    for(int i = 0; i < 10; i++){
        cout << dice << endl;
    }
    for(int i = 0; i < 10; i++){
        if(dice == 6){
            count++;
        }
    }
    cout << "count is: " << count;
    return 0;
}