#include<iostream>
using namespace std;
void merge(int[],int,int);
void mergesort(int[],int,int,int);

int main()
{
	int t,sum,j=0;
	cin>>t;
	while(t--)
	{
		int tot,n,i;
		cin>>tot>>n;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		merge(a,0,n-1);
		sum=0;
		for(i=0;sum<tot && i<n;i++)
			sum+=a[i];
		cout<<"Scenario #"<<++j <<":\n";
		if(tot<=sum)
			cout<<(i);
		else	
			cout<<"impossible";
		cout<<"\n";
	}
	return 0;
}

void merge(int a[], int low, int high)
{
	int mid;
	if(low<high)
	{	
		mid= (low+ high)/2;
		merge(a,low,mid);
		merge(a,mid+1,high);
		mergesort(a,low,mid,high);
	}
}
void mergesort(int a[],int low, int mid, int high)
{
	int i=low,j=low,k=mid+1;
	int temp[high+10];
	while(i<=mid && k<=high)
	{
		if(a[i] <a[k])
			temp[j++] = a[k++];
		else	
			temp[j++] = a[i++];
	}
	if(i>mid)
		for(;k<=high;k++)
			temp[j++]= a[k];
	else	
		for(;i<=mid;i++)
			temp[j++] = a[i];
	for(i=low;i<=high;i++)
		a[i] = temp[i];
}
	
	
			