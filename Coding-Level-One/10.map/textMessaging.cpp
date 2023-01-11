#include <bits/stdc++.h>
using namespace std;
int countKeyPressesForText(string s){
    transform(s.begin(),s.end(),s.begin(),::toupper);
    unordered_map<char,int> umap {{'A',1},{'B',2},{'C',3},
                                    {'D',1},{'E',2},{'F',3},
                                    {'G',1},{'H',2},{'I',3},
                                    {'J',1},{'K',2},{'L',3},
                                    {'M',1},{'N',2},{'O',3},{':',5},
                                    {'P',1},{'Q',2},{'R',3},{'S',4},
                                    {'T',1},{'U',2},{'V',3},{'!',4},
                                    {'W',1},{'X',2},{'Y',3},{'Z',4},
                                    {' ',0},{'.',1},{',',2},{'?',3}};
    int count = 0;
    for(auto i:s){
        count += umap[i];
    }
    return count;
}
int main(){
    string s;
    cout << "enter string: ";
    getline(cin,s);
    cout << countKeyPressesForText(s);
    return 0;
}