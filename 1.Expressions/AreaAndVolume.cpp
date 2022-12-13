#include <bits/stdc++.h>
using namespace std;
int main(){
    int radius;
    cout << "Enter radius: ";
    cin >> radius;
    float areaOfCirle, VolumeOfSphere;
    areaOfCirle = 3.14 * radius * radius;
    cout << "Area of circle is: " << areaOfCirle;
    VolumeOfSphere = (4/3) * 3.14 * radius * radius * radius;
    cout << "\nVolume of sphere is: " << VolumeOfSphere;
    return 0;
}