#include <bits/stdc++.h>
using namespace std;
void diceRolling(int a,int b,int c)
{
    if(a == b && b == c && a == c){
        cout << "Yahoo";
    }
    else{
        cout << "Try again";
    }
}

int main(){
    srand(time(0));
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;
    int dice3 = rand() % 6 + 1;
    cout << dice1 << "\n" << dice2 << "\n" << dice3 << "\n";
    diceRolling(dice1,dice2,dice3);
    return 0;
}