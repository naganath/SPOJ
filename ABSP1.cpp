#include<stdio.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j;
		scanf("%d",&n);
		long long int a[n],sum=0,t,count;
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
		for(i=0;i<n;i++)
		{
				for(j=i;j<n && a[j]==a[j+1];j++);
				count = j-i+1;
				t= (-(n-1-i-j)*a[i]*count);
				//printf("%lld\t",t);
				sum+=t;
				i=j;
		}
		printf("%lld\n",sum);
	}
	return 	0;
}
