#include<iostream>
using namespace std;
int main()
{
	float f,sum;
	int t;
	cin>>f;
	while(f!=0.00)
	{
		sum=0;	
		t=2;
		while(sum<f)
		{
			sum+=1/(float)t;
			t++;
		}
	cin>>f;
	cout<<(t-2)<<" card(s)\n";
	}
	return 0;
}
