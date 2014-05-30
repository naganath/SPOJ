#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool myfunc(long int a,long int b) { return a>b; }
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,flag=0,flag2=0;
		cin>>n;
		vector<long int> myvec;
		int a;
		for(i=0;i<n;i++)
		{	
			cin>>a;			
			if(a==1)
			{	flag++; continue; }
			myvec.insert(myvec.end(),a);
			if(a==2 || a== 3)
				flag2++;
		}
		sort(myvec.begin(),myvec.end(),myfunc);
		while(flag--)
		{
			cout <<"1 ";n--;
		}
		if(flag2==2 && n==2)
			cout<<"2 3";
		else
		for(i=0;i<n;i++)
			cout<<myvec[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
		