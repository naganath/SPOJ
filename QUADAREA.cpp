#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double a,b,c,d,s;
		cin>>a>>b>>c>>d;
		s= (a+b+c+d)/2;
		s = sqrt((s-a)*(s-b)*(s-c)*(s-d));
		cout<<setprecision(2)<<s<<endl;
	}
	return 0;
}