#include<iostream>
using namespace std;
int main()
{
	 long int t;
	 cin>>t;
	 while(t!=0)
	 {
		long int out=0;
		out = t*(t+1)*(2*t+1)/6;
		cout<<out;
		cin>>t;
	}
	return 0;
}
