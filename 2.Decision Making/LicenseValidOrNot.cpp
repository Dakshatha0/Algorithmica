#include <bits/stdc++.h>
using namespace std;
int main(){
	string licensePlate;
	cout<<"Enter license plate number:";
	cin>>licensePlate;
		if(licensePlate.length() == 6 && licensePlate[0]>='A' && licensePlate[0]<='Z' && licensePlate[1]>='A' && licensePlate[1]<='Z' && licensePlate[2]>='A' && licensePlate[2]<='Z' && licensePlate[3]>='0' && licensePlate[3]<='9' && licensePlate[4]>='0' && licensePlate[4]<='9' && licensePlate[5]>='0' && licensePlate[5]<='9')
		{
			cout<<"Old license plate version";
		}
		else if(licensePlate[0]>='0' && licensePlate[0]<='9' && licensePlate[1]>='0' && licensePlate[1]<='9' && licensePlate[2]>='0' && licensePlate[2]<='9' && licensePlate[3]>='0' && licensePlate[3]<='9' && licensePlate[4]>='A' && licensePlate[4]<='Z' && licensePlate[5]>='A' && licensePlate[5]<='Z' && licensePlate[6]>='A' && licensePlate[6]<='Z')
		{
			cout<<"New license plate version";
		}
        else
        {
            cout<<"License plate not valid";
        }
	return 0;
}