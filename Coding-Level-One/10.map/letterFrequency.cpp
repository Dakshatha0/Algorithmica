#include <bits/stdc++.h>
using namespace std;
void letterFrequency(string s){
    transform(s.begin(),s.end(),s.begin(),::tolower);
    unordered_map<char,int> umap;
    for(auto i:s){
        if(isalpha(i)) umap[i]++;
    }
    for(auto ele:umap){
        cout << ele.first << ":" << ele.second << "\n";
    }
}
int main(){
    string s;
    cout << "enter string: ";
    getline(cin,s);
    letterFrequency(s);
    return 0;
}