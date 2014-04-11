#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int n,a,i,b,s;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		i= b%4;
		if(b==0)
			printf("1\n");
		else
		{
			a=a%10;
			i++;
			s = pow(a,i);
			s = s * a *a *a;
			printf("%d\n",s%10);
		}
	}
	return 0;
}

