#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c,diff,div,last;
	while(1)
		{
			scanf("%d%d%d",&a,&b,&c);
			if (a == b)
			 break;
			diff =b-a;
			div = b/a;
			if (diff == (c-b) )
			{
				last= c+diff;
				printf("AP %d\n",last);
			}
			
			else
			{
				last = c*div;
				printf("GP %d\n",last);
			}
		}
		return 0;
}
			
