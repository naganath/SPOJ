#include<stdio.h>
using namespace std;
int main()
{
	long long int t,g,m,i;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&g);
		long long int sum=0;
		for(i=0;i<g;i++)
		{
			scanf("%lld",&m);
			sum=(sum+m)%g;
		}
		if(sum%g == 0 )
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}  

