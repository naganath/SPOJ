#include<iostream>
using namespace std;
long long int gcd(long long int,long long int );
int main()
{
	int n,i;
	cin>> n;
	long long int A,B,fac;
	for(i=0;i<n;i++)
	{
		cin>>A>>B;
		fac = gcd(A,B);
		cout<<(B/fac)<<" "<<(A/fac)<<"\n";
	}
	return 0;
}
long long int gcd(long long int A, long long int B)
{
	if(B==0)
		return A;
	return gcd(B,A%B);
}

	