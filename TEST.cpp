#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   do
   {
    printf("%d\n",a);
	scanf("%d",&a);
   }while(a!=42);
   return 0;
   }

