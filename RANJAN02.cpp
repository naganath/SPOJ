#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long long int sum=2,i,n;
	cin>>n;
	while(--n)
		sum = sum*3 +2 ;
	cout<<sum<<endl;
	}
	return 0;
	