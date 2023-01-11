#include <bits/stdc++.h>
using namespace std;
int getNumOfFlips(){
    int count = 0;
    //head - 1, tail - 0
    char computerChoice[2] = {'H','T'};
    char comp_choice;
    while(true){
        comp_choice = computerChoice[rand() % 1];
        cout << comp_choice;
        if(comp_choice == 'H' && comp_choice+1 == 'H' || comp_choice == 'T' && comp_choice + 1 == 'T') break;
        count++;
    }
    return count;
}
int main(){
    srand(time(0));
    cout << getNumOfFlips();
    return 0;
}