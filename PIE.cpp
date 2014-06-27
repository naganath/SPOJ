#include<vector>
#include<stdio.h>
#include<cmath>
#include<algorithm>
#include<iostream>
bool maxx (int i,int j) { return (i>j); }
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,f,i;
		long long int sum=0;
		cin>>n>>f;
		int a[n];
		 double Pi=3.14159265358979323846264338327950,r;
		for(i=0;i<n;i++)
			cin>>a[i];
		vector<int> array(a,a+n);
		sort(array.begin(),array.end(),maxx);
		float low,mid,high;
		low=Pi*array[0]*array[0];
		high=Pi*array.back()*array.back();
		for(int j=0;j<50;j++)
		{
			mid=(low+high)/2;sum=0;
			for(i=0;i<n;i++)
				if(mid/(Pi*array[i]*array[i])
					sum++;
			if(sum>f+1)
				high =mid;
			else
				low = mid;
		}
		printf("%.4f\n",low);
	}
	return 0;
}