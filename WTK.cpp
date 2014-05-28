#include<iostream>
using namespace std;
int jose(int,int);
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<jose(n,1);
	}
	return 0;
}
int jose(int n, int k)
{
	if( n==1)
		return 1;
	else	
		return (jose(n-1,k+1)+k-1)%n+1;
}