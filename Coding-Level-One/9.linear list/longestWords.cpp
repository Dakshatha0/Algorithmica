#include <bits/stdc++.h>
using namespace std;
vector<string> longestWords(vector<string> inp){
    vector<string> res;
    int maxlength = 0;
    for(auto ele:inp) {
        if(ele.length() > maxlength) {
            maxlength = ele.length();
            res.clear();
            res.push_back(ele);
        }
        else if(ele.length() == maxlength){
            res.push_back(ele);
        }
    }
    return res;
}
int main(){
    vector<string> inp{"vector","list","set","map","words","string"};
    vector<string> ans = longestWords(inp);
    for(auto i:ans){
        cout << i << "\n";
    }
    return 0;
}