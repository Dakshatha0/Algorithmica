#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout << "string: ";
    cin >> str;
    int vowelCount = 0, consonantCount = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vowelCount++;
        }
        else{
            consonantCount++;
        }
    }
    cout << "vowel count is: " << vowelCount << endl;
    cout << "consonant count is: " << consonantCount << endl;
    return 0;
}