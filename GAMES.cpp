

#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int i,flag=0,no=0,ab=1;
		for(i=0;i<s.size();i++)
			if(s[i]=='.')
			{	flag=1; break; }
		if(!flag)	
			cout<<"1\n";
		else
		{for(i++;i<s.size();i++)
			no= no*10 + s[i]-'0',ab*=10;
		
		for(i=2;i<=no;i++)
			while(no%i==0 && ab%i==0)
			{
				no/=i;
				ab/=i;
			}
		cout<<ab<<endl;
		}
	}
	return 0;
}

