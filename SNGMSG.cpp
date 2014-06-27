#include<iostream>
using namespace std;
	
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,input;
		cin>>s>>input;
		//cout<<input;
		string output(input.size(),'\0');
		char a;
		int i,j=0,k=1;
		for(i=0;i<input.size();i++)
		{	a=(char)(input[i]-(int)(s[j]-'0'));
			a = a<97?a+26:a;
			output[i]=a;
			j+=k;
			if(j==s.size())
				k=-1,j+=k;
			if(j==-1)
				k=1,j+=k;
		}/*
		for(i=0;i<input.size();i++)*/
		cout<<output;
		cout<<"\n";
	}
	return 0;
}
		