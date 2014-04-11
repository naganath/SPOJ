#include<stdio.h>
#include<cmath>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int i=0,five=5,j=1,a;
		scanf("%d",&a);
		do
		{
			i+=a/five;
			five=pow(5,++j);
		}while(five<=a);
		printf("%d\n",i);
	}
return 0;
}

