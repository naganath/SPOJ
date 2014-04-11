#include<stdio.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,j,c,n,top=0;
		scanf("%d",&n);
		int a[1000];
		a[0]=1;
		c=0;
		for(i=1;i<1000;i++)
			a[i]=0;
		for(j=2;j<=n;j++)
		{
			for(i=0;i<=top;i++)
			{
			a[i] =( a[i]* j) + c;
			c=a[i]/10;
			a[i] =a[i] % 10;
			//printf("a%da%dq",a[i],i);
			if ( c != 0 && top == i )
			   top++;
			
			}
		//	printf("outside");
		}
		for(i=top;i>=0;i--)
		 printf("%d",a[i]);
		 printf("\n");
	}
	return 0;
}


