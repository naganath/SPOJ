#include<iostream>
#include<stdio.h>
using namespace std; 
int b[100],a[100][100];
int sum(int,int);
int mix(int i,int j)
{
	if(i==j)
		return 0;
	if(a[i][j]!=-1)
		return a[i][j];
	int g,k,min=1000000;
	for(k=i;k<j;k++)
	{	g= mix(i,k) + mix(k+1,j);
		g+=sum(i,k) * sum(k+1,j);
		
		if(g<min)
			min=g;
	}
		a[i][j] = min;
		return min;
}
int sum(int i,int k)
{
	int ac,sum;
	for(ac=i;ac<=k;ac++)
		sum+=b[ac];
	return sum%100;
}
	
int main()
{
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		int i,j,k;
		for(i=0;i<t;i++)
			cin>>b[i];
		for(i=0;i<t;i++)
		{	for(j=0;j<t;j++)
				a[i][j]=-1;
				a[i][i]=0;
		}
		cout<<mix(0,t-1)<<"\n";
	}
	return 0;
}

