#include<iostream>
using namespace std;
void input(int[]);
void next(int[],int);
int main()
{
	int a[250],b[250],c[250],t=10,d,e,carry,i,j,k;
	while(t--)
	{
		input(a);
		input(b);		
		d = a[0];k=0;
		e =b[0];
		
	//-------------------------------------------------sum of 2 no's----------------------------------------------------------//
		carry=0;
		for(i=d,j=e;i>0 && j>0;i--,j--)
		{
		c[k++] = (a[i]+b[j]+ carry )%10;
		carry = (a[i]+b[j] )/10;
					
		}
		if(d<e)
			for(j;j>0;j--)
				c[k++]  = (b[j]+ carry )%10, carry = (b[j] )/10;
		else if(e<d)
			for(i;i>0;i--)
				c[k++]  = (a[i]+ carry )%10, carry = (a[i] )/10;
		else if((a[i+1]+b[j+1] )/10)
			c[k++] =(a[i+1]+b[j+1] )/10;
			//cout<<"L";
	//------------------------------------------------ divide by 2 and print -----------------------------------------------//
		for(i=k-1;i>=0;i--)
		{
			if(c[i]%2==1)
				c[i-1] +=10;
			c[i]=c[i]/2;	
		}
		if(c[k-1] >0)
			cout<<c[k-1];
		for(i=k-2;i>=0;i--)
		{
			cout<<c[i];
		}
		cout<<"\n";
	//--------------------------------------------------------diff of 2 no's-----------------------------------------------//	
		d=a[0];k=0;
		for(i=d,j=e;i>0 && j>0 ;i-- ,j--)
		{
			if(a[i] < b[j])
					next(a,i); 
			c[k++] = a[i]-b[j];
		}
		
		if(i>0)
		for(i;i>0;i--)
			c[k++] = a[i];
		//cout<<k;
		if(!a[1])
			k--;
	//---------------------------------------------- divide by 2 and print --------------------------------------------------//
		for(i=k-1;i>=0;i--)
		{
			if(c[i]%2==1)
				c[i-1] +=10;
			c[i]=c[i]/2;	
		}
		if(c[k-1] >0 || k==1)
			cout<<c[k-1];
		for(i=k-2;i>=0;i--)
		{
			cout<<c[i];
		}
		cout<<"\n";		
	}
	return 0;
}
 
void input(int a[])
{
	char c[250];
	cin.getline(c,250);
	int i=1;
	while(c[i-1]!='\0')
	{
		a[i] =c[i-1]-'0';
		i++;
	}
	a[0] = i-1;
}


void next(int a[],int i)
{
	int j;
	for(j=i;a[j] ==0;j--);
	a[j]--;
	for(j++;j<i;j++)
			a[j] +=9;
	a[i] +=10;

}