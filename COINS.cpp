#include<map>
#include<stdio.h>
#include<iostream>
using namespace std;
map<long long int,long long int> a;
long long int coins(long long int n);
int main()
{
	long long int n,i;
	while(scanf("%lld",&n)!=EOF)
	{
		printf("%lld\n",coins(n));
	}
	return 0;
}


long long int coins(long long int n)
{
/*	map<long long int, long long int>::iterator it;
	for(it=a.begin();it!=a.end();it++)
		cout<<it->second<<"a ";*/
	long long int sum=0;
	if( n==0)
		return 0;
	if(a.find(n)!=a.end())
		return a[n]; 
	sum= coins(n/2) + coins(n/3) + coins(n/4);
	sum = sum>n? sum:n;
	a.insert(pair<long long int,long long int>(n,sum));
	//a[n]= sum;*
	//cout<<a[n]<<" "<<n<<" ";
	return sum;
}