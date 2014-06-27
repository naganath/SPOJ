#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n],i,max=0,note,f=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
			if(a[i]>max)
				max=a[i],note=i;
		}
		for(i=0;i<n;i++)
			if(i!=note)
				if(max<b[i])
				{	f=1; break; }
		if(f)
			cout<<"-1\n";
		else	
			cout<<note+1<<endl;
	}
	return 0;
}