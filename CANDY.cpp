#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t!=-1)
	{
		int a[t],i,j=0;
		long long int avg=0,av=0;;
		for(i=0;i<t;i++)
		{	cin>>a[i]; avg+=a[i]; }
		
		av= avg/t;
		if(av*t!=avg)
			cout<<"-1\n";
		else
		{
			avg/= t;
			for(i=0;i<t;i++)
			if(a[i]<t)
			j+=avg-a[i];
			cout<<j<<endl;
		}
		cin>>t;
	}
	return 0;
}

