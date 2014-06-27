#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	while(s[0]!='0')
	{
		int i,no,flag=0;
		long long int a[s.size()+1];
		a[0]=1;a[1]=1;
		for(i=1;i<s.size();i++)
		{
			flag=0;
			if(s[i]=='0'|| s[i-1]=='0')
				flag=2;
			else if(s[i-1]=='1')
				flag=1;
			else if(s[i-1]=='2' && s[i-1]-'0'<7)
				flag=1;
			else	
				flag=3;
			if(flag==3)
				a[i+1] = a[i];
			else if(flag==1)
					a[i+1] = a[i] + a[i-1];
			else 
					a[i+1] =a[i-1],a[i]=a[i-1];			
		}
		cout<<a[i]<<endl;
		cin>>s;
	}
	return 0;
}

