#include <bits/stdc++.h>
using namespace std;
list<int> getSeq1() {
    list<int> res;
    int n;
    while(true) {
        cin >> n;
        if(n == 0) break;
        res.push_back(n);
    }
    return res;
}
vector<int> getSeq2() {
    vector<int> res;
    int n;
    while(true) {
        cin >> n;
        if(n == 0) break;
        res.push_back(n);
    }
    return res;
}
int main(){
    vector<int> data1 = getSeq2();
    for(auto ele:data1){
        cout << ele << "\n"; 
    }
    list<int> data2 = getSeq1();
    for(auto ele:data2){
        cout << ele << "\n"; 
    }
    return 0;
}