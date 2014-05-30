#include<stdio.h>
using namespace std;
int main()
{
	long long t,n,a=0;
	scanf("%lld",&t);
	while(t--)
	{
		cin>>n;
		a=a^n;
	}
	printf("%lld\n",a);
	return 0;
}
