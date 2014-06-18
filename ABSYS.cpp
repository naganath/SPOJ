#include<iostream>
#include<string>

using namespace std;
int main()
{
	int t;
	string s;
	cin>>t;
	getline(cin,s);
	while(t--)
	{
		getline(cin,s);getline(cin,s);
		//cout<<s;
		int i,num1[3],j=0,k=0,m=0,l=0;
		for(i=0;i<s.length();i++)
		{	if(s[i] == '+' || s[i] == '=')
			{
				 num1[k++] = j;j=0;
			}	
			else	
				if((s[i] >='0' && s[i] <='9') && j!=-1)
					j= j*10 + s[i] -'0';
			else
				if (s[i] >60 )
				{ j=-1; 
					if( m==0)
					 l=1; else l=0;
				}
			if(s[i] == '=')
				m=1;
		}
		num1[k] = j;
		
		if(num1[0] == -1)
			num1[0] = num1[2]- num1[1];
		else if(num1[1] ==-1)
			num1[1] = num1[2]- num1[0];
		else	
			num1[2] = num1[0] + num1[1];
		cout<<num1[0]<<" + "<<num1[1]<<" = "<<num1[2]<<endl;
	}
	return 0;
}