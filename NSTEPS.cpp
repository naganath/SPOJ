#include<stdio.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		if (x ==y || x == y + 2 )
		{
		if( x %2 && y %2 )
			printf("%d\n",x+y-1);
		else if ( x % 2 == y %2)
		  printf("%d\n",x+y);
		 }
		else
		  printf("No Number\n");
	}
	return 0;
}



