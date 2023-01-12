#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s){
    if(s.empty()) return 0;
    unordered_map<char, int> umap= { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
    
    int count = umap[s[s.length()-1]];
    for(int i = s.length()-2; i >= 0; i--){
        if(umap[s[i]] < umap[s[i+1]]){
            count -= umap[s[i]];
        }
        else count += umap[s[i]];
    }
    return count;
}
int main(){
    string s;
    cout << "enter str: ";
    cin >> s;
    cout << romanToInt(s);
    return 0;
}