#include <bits/stdc++.h>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string filename;
    fstream fileC;
    int count = 1;
    fileC.open("headOfFile.txt");
    if(!fileC.is_open())
        return -1;
    int numOfLines = 0;
    while(getline(fileC, filename) && numOfLines < 10){
        cout << filename << endl;     
        numOfLines++;
    }
    
    return 0;
}