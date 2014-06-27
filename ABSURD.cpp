#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
inline int absurd1( int n)
{
	while(n%10==0)
		n=n/10;
	int cpy =n;
	int count=0;
	while(cpy)
	{
		count++;
		cpy/=10;
	}
	if(n%10==5)
		return 2*count-1;
	return 2*count;
}
inline int absurd2(int n)
{
	int rev=0;
	while(n)
		rev= rev*10 + n%10, n/=10;
return rev;
}
int main()
{
	int t,c,i,j,count;
	scanf("%d",&t);
	int l,u;
	int g,o,f=0;
	char s[10],t[10];
	while(t--)
	{
		scanf("%d",&c);
		f=0;
		l = ceil(0.95*c);
		u = floor(1.05*c);
		g=absurd1(c);
		s=itoa(l);
		t=itoa(u);
		
		i=absurd2(l);
		j= absurd2(u);
		int d=0,e=0;
		do
		{
		e=j%10;
		d=i%10;f++;
		if(d==e)
			j/=10,i/=10;
		}while(d==e);
		//cout<<d << " "<< e <<" ";
		if(l<u)
			if(i%10==5)
				count=2*f-1;
			else	
				count=2*f;
		else	
			if(j%10==5)
				count=2*f-1;
			else	
				count=2*f;
				
		if(count<g)
			printf("absurd\n");
		else
			printf("not absurd\n");
	}
	return 0;
}

