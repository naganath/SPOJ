#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin>>s;
	int flag=0;
	int i,j;
	for(i=s.size()-1,j=0;i>=j;i--,j++)
	{
		if(s[i]!=s[j])
		{	flag=1; break; }
	}
	if(!flag)
		cout<<"YES\n";
	else	
		cout<<"NO\n";
	}
	return 0;
}
