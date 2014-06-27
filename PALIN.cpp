#include<cstring>
#include<vector>
#include<iostream>
using namespace std;
bool check(vector<int> a,vector<int> b)
{
	if(a.size() != b.size())
		return a.size() > b.size();
	for(int i=0;i<a.size();i++)
		if(a[i] >b[i] )
			return true; 
		else if(a[i] <b[i])
			return false;
		
	return false;
}
int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		 string s;
		 cin>>s;
		 int left,right,k;
		 if(s.size()%2==0)
			right=s.size()/2,left=right-1;
		else
			left=right=s.size()/2;
		vector<int> b;
		for(k=0;k<s.size();k++)
			b.push_back(s[k]-'0');
		vector<int>	a(b);
		for(i=left,j=right;i>=0;i--,j++)
			a[j]=a[i];
		if(check(a,b))
			for(i=0;i<a.size();i++)
				cout<<a[i];
		else
		{
			i=left, j=right;
			while(1)
			{
				if(i==-1){
				a.insert(a.begin(),1);
				a[a.size()-1]=1;break;	
				}
				else if(a[i]!=9)
				{	a[j]=++a[i];  break; }
				else 
					a[j]=a[i]=0,++j,--i;
			}
			for(i=0;i<a.size();i++)
				cout<<a[i];
			
		}
/*		cout<<" ";
		for(i=0;i<b.size();i++)
			cout<<b[i];
*/		cout<<"\n";
		
	}
	return 0;
}
