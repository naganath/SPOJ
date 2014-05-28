#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,last;
		cin>>n;
		int a[n],l[n],r[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			l[i] = 1;
			r[i] = 1;
		}
		for(i=1;i<n;i++)
		for(j=0;j<i;j++)
		{
			if(a[i]>a[j])
			if(l[i]<=l[j])
				l[i] =l[j]+1;
		}
		for(i=n-2;i>=0;i--)
		for(j=n-1;j>i;j--)
		{
			if(a[i]>a[j])
			if(r[i]<=r[j])
				r[i] =r[j]+1;
		}
		int max = l[0] +r[0] -1;
		for(i=1;i<n;i++)
		if((l[i] +r[i] -1) > max)
			max = l[i] +r[i] -1;
		cout<<max<<endl;
	}
	return 0;
}

