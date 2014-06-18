#include<iostream>
#include<cmath>

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
	int n;
	while(scanf("%lld",&n)!=EOF)
	{
		cout<<n<<"="<<;
		print(n[i]); cout<<"\n"; }
	return 0;
}