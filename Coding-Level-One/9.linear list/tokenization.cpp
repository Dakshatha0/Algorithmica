#include <bits/stdc++.h>
using namespace std;
vector<string> tokenize(string s){
    vector<string> ans;
    string res = "";
    int l = s.length();
    for(auto i = 0; i < l; i++){
        if(isdigit(s[i])){
            res += i;
            continue;
            if(!isdigit(i)) break;
            ans.push_back(res);
            res.clear();
        }
        
    }
    return ans;
}
int main(){
    string s;
    cout << "enter string: ";
    vector<string> bases = tokenize(s);
    getline(cin, s);
    for(auto i:bases){
        cout << i << "\n";
    }
    return 0;
}