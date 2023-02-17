#include<iostream>
#include<fstream>
using namespace std;

void Format(string inp,string out)
{
	ifstream fin(inp);
	ofstream fout(out);
	string z;
	int a=1;
	while(getline(fin,z))
	{
		for(int i=0;i<z.length();i++)
		{
			if(a==50)
			{
				fout<<z[50]<<"\n";
				a=1;
			}
			else
			{
				fout<<z[i];
				a++;
			}
		}
	}
}
int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	Format(a,b);
	return 0;
}