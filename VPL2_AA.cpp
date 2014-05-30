#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
	int t,i=1;
	cin>>t;
	while(t--)
	{
	float p0,p1,p,t,t1,k;
	cin>>p0>>p1>>t>>p;
	k = log(p1/p0)/t;
	t1 = log(p/p0)/k;
	cout<<"Scenario #"<<i++<<": "<<t1;
	printf("Scenario #%d: %.2f\n" , i++,t1);
	}
	return 0;
}