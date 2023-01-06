#include<bits/stdc++.h>
using namespace std;
string encrypt(string s,int k)
{
	string encr="",position="";
	int length=s.length();
	for(int i=0;i<length;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			position=(s[i]-'a'+k)%26+'a';
			encr+=position;
		}
		else if(s[i]>='A'&&s[i]<='Z')
		{
			position=(s[i]-'A'+k)%26+'A';
			encr+=position;
		}
		else
		{
			encr+=s[i];
		}
	}
	return encr;
}
string decrypt(string encrypt,int k)
{
	string decr="",position="";
	int length=encrypt.length();
	for(int i=0;i<length;i++)
	{
		if(encrypt[i]>='a'&&encrypt[i]<='z')
		{
			position=(encrypt[i]-'a'-k)%26+'a';
			decr+=position;
		}
		else if(encrypt[i]>='A'&&encrypt[i]<='Z')
		{
			position=(encrypt[i]-'A'-k)%26+'A';
			decr+=position;
		}
		else
		{
			decr+=encrypt[i];
		}
	}
	return decr;
}
int main()
{
	string input,enc="";
	int k;
	cout<<"String:";
	cin>>input;
	cout<<"k:";
	cin>>k;
	enc=encrypt(input,k);
	cout<<"encr message is "<<enc<<"\n";
	cout<<"decr message is "<<decrypt(enc,k);
	return 0;
}