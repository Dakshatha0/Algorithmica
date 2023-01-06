#include<bits/stdc++.h>
using namespace std;
int main(){
	string month;
	int day;
	cout<<"month:";
	cin>>month;
	cout<<"day:";
	cin>>day;
	if((month=="dec" && day>=22)||(month=="jan" && day<=19))
	{
		cout<<"capricorn";
	}
	else if((month=="jan" && day>=20)||(month=="feb" && day<=18))
	{
		cout<<"aquarius";
	}
	else if((month=="feb" && day>=19)||(month=="march" && day<=20))
	{
		cout<<"pisces";
	}
	else if((month=="march" && day>=21)||(month=="apr" && day<=19))
	{
		cout<<"aries";
	}
	else if((month=="apr" && day>=20)||(month=="may" && day<=20))
	{
		cout<<"taurus";
	}
	else if((month=="may" && day>21)||(month=="june" && day<=20))
	{
		cout<<"gemini";
	}
	else if((month=="june" && day>=21)||(month=="july" && day<=22))
	{
		cout<<"cancer";
	}
	else if((month=="july" && day>=23)||(month=="aug" && day<=22))
	{
		cout<<"leo";
	}
	else if((month=="aug" && day>=23)||(month=="sept" && day<=22))
	{
		cout<<"virgo";
	}
	else if((month=="sept" && day>=23)||(month=="oct" && day<=22))
	{
		cout<<"libra";
	}
	else if((month=="oct" && day>=23)||(month=="nov" && day<=21))
	{
		cout<<"scorpio";
	}
	else if((month=="nov" && day>=22)||(month=="dec" && day<=21))
	{
		cout<<"sagittarius";
	}
	else
	{
		cout<<"Enter correct D.O.B.";
	}
	return 0;
}