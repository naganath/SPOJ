#include<iostream>
using namespace std;
int main()
{
	long long int t,n;
	cin>>t;
	while(t--)
	{
		int a;
		cin>>n>>a;
		char *s[] ={"Airborne wins.\n" ,"Pagfloyd wins.\n"};
		cout<<s[a];
	}
	return 0;
}
