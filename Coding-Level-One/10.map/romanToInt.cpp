#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s){
    int count = 0;
    unordered_map<char, int> umap;
            umap['I'] = 1;
            umap['V'] = 5;
            umap['X'] = 10;
            umap['L'] = 50;
            umap['C'] = 100;
            umap['D'] = 500;
            umap['M'] = 1000;
    for(auto i:s){
        count += umap[i];
    }
    return count;
}
int main(){
    string s;
    cout << "enter str: ";
    getline(cin,s);
    cout << romanToInt(s);
    return 0;
}