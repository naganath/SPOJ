#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	while(n>1)
	{
		if(n%2 == 0)
			n=n/2;
		else	
			break;
	}
	if(n!=1)
		cout<<"NIE "<<endl;
	else
		cout<<"TAK "<<endl;
	return 0;
}
