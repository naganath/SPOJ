#include<map>
#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	map<long long int,long long int>a,b,prime; 
	while(t--)
	{
		long long int m,n,fac,ut,i,j,k;
		cin>>m>>n;
		for(j=2;j*j<=m;j++)
			while(m%j==0 )
			{
				a[j]++;
				m/=j;
			}
		if(m>1)
			a[m]++;
		for(j=2;j*j<=n;j++)
			while(n%j==0 )
			{
				b[j]++;
				n/=j;
			}
			if(n>1)
				b[n]++;
		map<long long ,long long>::iterator it;
		for(it = a.begin();it!=a.end();it++)
			if(it->second > b[it->first])
				prime[it->first] = it->second;
		
		for(it = b.begin();it!=b.end();it++)
			if(it->second > a[it->first])
			if(it->second >prime[it->first])
				prime[it->first] = it->second;
			
		ut=1;
		for(it=prime.begin();it!=prime.end();it++)
			for(j=1;j<=it->second;j++)
				ut *=it->first;
		prime.clear();
		a.clear();
		b.clear();
		cout<<ut<<endl;
	}
	return 0;
}