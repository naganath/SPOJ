#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  for(int l=0;l<=n;l++)
  {
     char a[400],ch[100];
	 int i,top=0;
	 gets(a);
	 for(i=0;a[i]!='\0';i++)
	 {
	 //	printf("%c",a[i]);
	     if( a[i] == '(')
		    continue;
		 else if( a[i] ==  '+' ||  a[i] == '-' ||  a[i] == '*' ||  a[i] == '/' ||  a[i] == '^')
			{
			ch[top++]=a[i];
		//	printf("%c%d",ch[top-1],top);
		}
		 else if( a[i] == ')')
		   printf("%c",ch[--top]);
		 else
		   printf("%c",a[i]);
	 }
	 printf("\n");
	 }
  return 0;
}
