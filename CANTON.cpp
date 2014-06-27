#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i=1,j=1;
		cin>>n;
		for(i=1,j=1;i<n;j++,i+=j);
		cout<<"TERM "<<n<<" IS ";
		if(j%2==0)
			cout<<n-i+j<<"/"<<i-n+1<<endl;
		else
			cout<<i-n+1<<"/"<<n+j-i<<endl;
	}
	return 0;
}