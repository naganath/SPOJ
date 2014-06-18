#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;
string toC(char s[101])
{
	int i,k=0;
	string out(300,' ');
	for(i=0;i<strlen(s);i++)
	{
		if(s[i] >96)
			out[k++] = s[i];
		else if(s[i]<91 )
		{	out[k++] ='_'; out[k++] = (char)s[i]-65+97;}
	}
	out.resize(k);
	return out;
}
string toJ(char s[101])	
{		
	int i,k=0,f=0;
	string out(300,' ');
	for(i=0;i<strlen(s);i++)
	{
		if(s[i] >96 && f==0)
			out[k++] = s[i];
		else if(s[i]=='_' )
			f=1;
		else if(s[i] >96 && f==1)
		{	out[k++] = s[i]-97+65; f=0; }
	}
	out.resize(k);
	return out;
}



int main()
{
	char s[101];
	
	int i,f,k,l,java=0;
	
	while(scanf("%s",s)!=EOF)
	{
		k=0;l=0;java=0;		
		
		for(i=0;i<strlen(s);i++)
		{	
			if(s[0]=='_'|| s[strlen(s)-1]=='_' || s[0]<91)
			{	java=2; break;}
			else if(s[i]=='_' && s[i-1] == '_')
				{ java=2;break;}
			
			if(s[i]=='_'&& java!=-1 )
				java=1;
			else if(s[i]<91 && !(java>0))
				java=-1;
			else if(s[i]>96){}
			else
				break;
		}			
		//cout<<i<<" ";
		if(i!=strlen(s))		
			cout<<"Error!"<<endl;
		else if(java!=-1	&& java!=0 && java!=1 )
			cout<<"Error!"<<endl;
		else if(java==-1)
			cout<<toC(s)<<endl;
		else if(java=1)
			cout<<toJ(s)<<endl;
		else	
			cout<<s<<endl;
	}
	return 0;
}
	