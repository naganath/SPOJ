#include<iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t)
	{		
		long long int a[t+1],i,b[t+1];
		int f=0;
		for(i=0;i<t;i++)
		{
			cin>>a[i]; b[a[i]] =i+1;
		}	
		for(i=0;i<t;i++)
		
		if(b[i+1] !=a[i])
			f=1;
		
		if(f)
			cout<<"not ambiguous";
		else
			cout<<"ambiguous";
		cout<<"\n";
		cin>>t;
	}
	return 0;
}
