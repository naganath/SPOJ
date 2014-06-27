#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,i,sum,flag=0;
		scanf("%lld",&n);
		for(i=2;i*i<=n;i++)
		{
			sum =0;
			while(n%i==0)
				n/=i,sum++; //cout<<i; }
			if(i%4==3)			
				if(sum%2==1)
				{	flag=1; break; }
		}
		if(n%4==3)
			flag=1;
		if(flag)
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}

