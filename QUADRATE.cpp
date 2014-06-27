#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		long long int i,a[3]={0,0,0},*b,no=0,sign=0;
		b=a;
		for(i=0;i<s.size();i++)
		{
			if(s[i]=='x' && i==0)
			{	no=1; }
			else if(s[i]=='-')
			{	*b=(sign==1)?-no:no;  no=0;b++; sign=1; }
			else if(s[i]=='+')
			{	*b=(sign==1)?-no:no; no=0;b++; sign=0; }
			else if(s[i]=='='&& s[i-1]!='x')
			{	a[2]=(sign==1)?-no:no; no=0;b++; }
			else if(s[i]>='0' && s[i]<='9')
				no= no*10+s[i]-'0';
			else if(s[i]=='x' && (s[i-1]=='-'|| s[i-1]=='+'))
				no=1;//cout<<"x"<<i<<" "; }
			else if(s[i]=='='&& s[i-1]=='x')
			{	*b=(sign==1)?-no:no; no=0;b++; }	
		}
		//cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" ";
		long long int td =a[1]*a[1] - (4*a[0]*a[2]);
		if(td >0)
			cout<<"Distinct real roots."<<endl;
		else if(td<0)
			cout<<"Imaginary roots.\n";
		else
			cout<< "Equal roots.\n";	
	}
	return 0;
}
