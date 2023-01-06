#include <bits/stdc++.h>
using namespace std;
string* createDeck() {
    string *deck = new string[52];
    string values = "23456789TJQKA";
    string suits = "shdc";
    int i = 0;
    for(auto v:values){
        for(auto s:suits){
            string tmp = "" + v + s;
            deck[i++] = tmp;
        }
    }
    return deck;
}
void shuffle(string deck[52]) {
    srand(time(0));
    for(int i = 0; i < 52; i++){
        int r = rand() % 52;
        swap(deck, i , r);
    }
}
int main(){
    string *deck = createDeck();
    for(int i = 0; i < 52; i++){
        cout << deck[i] << " ";
    }
    delete deck;
    return 0;
}