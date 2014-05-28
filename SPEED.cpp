#include<iostream>
#include<stdlib.h>
using namespace std;
int gcd(int , int);
int main()
{
	int n,i,a,b,fac;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		fac = gcd(a,b);
		a = a/fac, b = b/fac;
		cout<<abs(a-b)<<"\n";
	}
	return 0;
}

int gcd(int a, int b)
{
	if(b == 0)
		return a;
		
	return	gcd(b,a%b);
}