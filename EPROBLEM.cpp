#include<iostream>
#include<cmath>
#include<stdio.h>
#define C std::cout<<
#define ll long long int 
void p(ll n)
{if(!n){C"0";return;}
ll i;
while(n){
i=(ll)(log10(n)/0.3010);C"2";
if(i!=1){C"(";p(i);C")";}
n-=pow(2,i);if(n)C"+";}}
int main()
{
ll n;while(scanf("%lld",&n)!=EOF){Cn<<"=";p(n);C"\n";}return 0;
}


/*#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
void print(long long int n)
{
	
	if(n==0)
	{	cout<<"0";
		return;
	}
	long long int i;
	
	while(n>0)
	{
		
		i= (int)(log10(n)/0.3010);
		cout<<"2"; 
		if(i!=1) {
			cout<<"(";
			print(i);
			cout<<")"; 
		}
		n=n-pow(2,i);
		if(n>0)
		cout<<"+";
	}
	
}
int main()
{
	long long int n;
	while(scanf("%lld",&n)!=EOF)
	{
		cout<<n<<"=";
		print(n); cout<<"\n"; }
	return 0;
}*/