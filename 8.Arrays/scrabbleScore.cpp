#include <bits/stdc++.h>
using namespace std;
int scrabbleScore(string s,int arr[]){
    int result = 0;
    // unordered_map<char,int> umap = {{'A',1},{'E',1},{'I',1},{'L',1},{'N',1},{'O',1},{'R',1},{'S',1},{'T',1},{'U',1},
    //                                 {'D',2},{'G',2},{'B',3},{'C',3},{'M',3},{'P',3},
    //                                 {'F',4},{'H',4},{'V',4},{'W',4},{'Y',4},
    //                                 {'K',5},{'J',8},{'X',8},{'Q',10},{'Z',10}
    //                                 };
    // for(char c:s){
    //     result += umap[toupper(c)];
    // }
    for(int i = 0; i < s.length(); i++){
        result += arr[toupper(s[i])-'A'];
    }
    return result;
}

int main(){
    string str;
    cout << "enter: ";
    cin >> str;
    int letterScore[26] = {1,  // A
            3,  // B
            3,  // C
            2,  // D
            1,  // E
            4,  // F
            2,  // G
            4,  // H
            1,  // I
            8,  // J
            5,  // K
            1,  // L
            3,  // M
            1,  // N
            1,  // O
            3,  // P
            10, // Q
            1,  // R
            1,  // S
            1,  // T
            1,  // U
            4,  // V
            4,  // W
            8,  // X
            4,  // Y
            10  // Z}
    };
    cout << scrabbleScore(str,letterScore);

    return 0;
}