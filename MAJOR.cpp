#include<algorithm>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n],i,j,k;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		vector<int> array(a,a+n);
		sort(array.begin(),array.end());
		j=1;k=0;
		for(i=1;i<n;i++)
		{
			if(array[i]==array[i-1])
				j++;
			if(array[i]!=array[i-1])
			{	if(j>n/2)
				{	printf("YES %d ",array[i-1]);k=1;}
				j=1;
			}
		}
		if(j>n/2)
				{	printf("YES %d ",array[i-1]);k=1;}
		if(!k)
			printf("NO");
		printf("\n");
	}
	return 0;
}