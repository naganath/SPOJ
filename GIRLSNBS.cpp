#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	while(a!=-1 && b!=-1)
	{
	int t;
	if(a>b)
	{
		t=a;
		a=b;
		b=a;
	}
	t=ceil(b/(a+1));
	cout<<t<<"\n";
	cin>>a>>b;
	}
	return 0;
}
