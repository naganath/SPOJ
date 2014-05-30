#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int len;
	cin>>len;
	while(len)
	{
		char ch[200];
		int i,j,k;
		cin>>ch;
		
		int row = strlen(ch)/len;
		char c[row][len];
		k=0;i=1;
		int p =1;
		for(j=0;j<row;j++)
		{
		while(i<=len && i !=0)
			{
				c[j][i-1] = ch[k++];
				i+=p;	
			}
			p*=-1;
			i+=p;
		}
		
		for(i=0;i<len;i++)
		for(j=0;j<row;j++)
			cout<<c[j][i];
		cout<<"\n";
		cin>>len;
	}
	return 0;
}
	