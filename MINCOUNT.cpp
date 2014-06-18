#include<stdio.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,i,j,sum=0;
		printf("%lld",&n);
		if(n>1)
		{
			n--;
			j=n/3;
			sum = j*(j+1)/2 + (n%3)*(k+1);
		}
		printf("%lld\n",sum);
			
	}
	return 0;
}
