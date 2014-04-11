#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int rev(int n)
{
	int rev=0;
	while(n>0)
	{
	rev= rev*10 + n%10;
	n=n/10;
	}
	return rev;
}
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int a,b,sum;
		scanf("%d%d",&a,&b);
		a=rev(a);
		b=rev(b);
		sum=a+b;
		sum=rev(sum);
		printf("%d\n",sum);
	}
	return 0;
}


