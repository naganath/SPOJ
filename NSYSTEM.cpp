#include<iostream>
using namespace std;
int process(char[]);
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		char a[10],b[10],*C="mcxia";
		cin>>a>>b;
		int c  = process (a);
		int d = process (b);
		d+=c;
		//cout<<d<<"\n" ;
		
		int e =1000;
		while(d>0)
		{
			c= d/e;
			if(c>1)
				cout<<c;
			if(c>0)
				cout<<*C;
			d=d%e;
			e=e/10;
			C++;
		}
		cout<<"\n";
	}
	return 0;
}

int process(char s[])
{
	int sum=0,l=1,i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]<60)
			l = s[i] -'0';
		else	
		{
		switch (s[i])
		{
		case 'm':
			sum += l*1000; break;
		case 'c':
			sum+=l*100; break;
		case 'x':
			sum+=l*10; break;
		case 'i':
			sum+=l; break;
		}
		l=1;
		}
	}	
	return sum;
}
		