#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int h,w;
	cin>>h>>w;
	int a[h][w],max,i,j;
	for(i=0;i<h;i++)
	for(j=0;j<w;j++)
		cin>>a[i][j];
	for(i=1;i<h;i++)
		for(j=0;j<w;j++)
		{
			max=a[i-1][j]; 
			
			if(j && max<a[i-1][j-1])
				max=a[i-1][j-1];
			if(j!=w-1 && max<a[i-1][j+1])
				max=a[i-1][j+1];
			a[i][j]+=max;
		}
	max=0;
	for(j=0;j<w;j++)
		if(a[h-1][j] > max)
			max= a[h-1][j];
	cout<<max<<endl;
	}
	return 0;
}
