#include<stdio.h>
#include<cmath>
using namespace std;
int IsPrime(long long int);
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		long long int a,b,i,j,k,count=0,cp=0;
		scanf("%lld%lld",&a,&b);
		i = sqrt(a);
		if(a<3)
			cp=1;
		for(;i*i<=b;i++)
		{
			j = i*i;
			count=0;
			for(k=1;k<=i;k++)
				if(j%k==0)
				{
					count+=k;
					count+=j/k;
				}
					count-=i;
		
			if(IsPrime(count))
			{
				cp++;
				}
				//cout<<count<<" "<<j<<" \n";
		}
		printf("%lld\n",cp);
	}
	return 0;
}
int IsPrime(long long int n)
{
	if(n==2 || n == 3)
		return 1;
	if(n%2 == 0 || n%3==0|| n == 1)
		return 0;
	long long int k=5,j=2;
	while(k*k<=n)
	{
		if(n%k==0)
			return 0;
		k =k +j;
		j = 6-j;
	}
	return 1;
}

