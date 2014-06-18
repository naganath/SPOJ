#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n)
	{
		vector<int> array;
		int input[n],nextEle;
		int i=0,j=1;
		for(i=0;i<n;i++)
			cin>>input[i];
			i=0;
		while( array.size() >0 || i<n)
		{
			
			if(i==n|| (array.size() > 0 &&  array.back()< input[i]) )
			{
				nextEle = array.back();array.pop_back(); } //cout<<j<<"a ";}
			else
				nextEle = input[i++];
			if(nextEle>j)
				{array.push_back(input[i-1]); } //cout<<array.back()<<"b "; }
			else 
				j++;
		}
		if(j-1==n)
			cout<<"yes\n";
		else	
			cout<<"no\n";
		cin>>n;
	}
	return 0;
}	
		