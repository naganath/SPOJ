#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t,g,m,i,c,d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&g,&m);
		int ng[g],nm[m];
		for(i=0;i<g;i++)
			scanf("%d",&ng[i]);			
		for(i=0;i<m;i++)
			scanf("%d",&nm[i]);			
		c=ng[0];
		for(i=1;i<g;i++)
			if(c<ng[i])
				c=ng[i];
		d =nm[0];
		for(i=1;i<m;i++)
			if(d<nm[i])
				d=nm[i];
		if(c>=d)
			printf("Godzilla\n");
		else
			printf("MechaGodzilla\n");
	}
	return 0;
}  
