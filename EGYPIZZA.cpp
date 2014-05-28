#include<stdio.h>
using namespace std;
int main()
{
	int i,n,hlf=0,qa=0,qa3=0,tot=1;
	cin>>n;
	char in[n][3];
	for(i=0;i<n;i++)
	{
		cin>>in[i];
		if(in[i][2] =='2')
			hlf++;
		else if (in[i][0] == '1')
			qa++;
		else	
			qa3++;
	}
	tot += (hlf+1)/2;
	if(qa3 >=qa )
		tot+=qa3;
	else
	{
		tot+=qa3;
		qa-=qa3;
		if(hlf%2)
			qa-=2;
		tot+=(qa+3)/4;
	}
	cout<<tot;
	return 0;
}


	