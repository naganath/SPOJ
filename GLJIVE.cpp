#include<stdio.h>

using namespace std;
int main()
{
	int a[10],i,j,sum;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	sum=0;
	for(i=0;i<10;i++)
	{
		//printf("%d ",a[i]);
		sum+=a[i];
		if(sum>=100)
			break;
	}
	if(sum>=100)
	{
	j=sum-a[i];
	if((sum-100) <= (100-j))
		printf("%d\n",sum);
	else
		printf("%d\n",j);
	}
	else
	{
		printf("%d\n",sum);
	}
	return 0;
}

