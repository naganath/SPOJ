#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		long long int out=1, n,k,i;
		cin>>n>>k;
		n--;
		k--;		
		if(k>n-k)
			k= n-k;
		for(i=1;i<=k;i++)
		{
			out =(out*n--)/i;
		}cout<<out<<"\n";
	}
	return 0;
}
