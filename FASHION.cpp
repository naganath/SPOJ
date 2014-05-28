#include<iostream>
using namespace std;
void merge(int[],int ,int);
void mergesort(int[],int,int,int);
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int w[n],m[n],i,sum=0;
		for(i=0;i<n;i++)
			cin>>w[i];
		merge(w,0,n-1);	
		for(i=0;i<n;i++)
			cin>>m[i];
		merge(m,0,n-1);	
		for(i=0;i<n;i++)
			sum+=(w[i]*m[i]);
		cout<<" "<<sum<<"\n";
	}
	return 0;
}
void merge(int a[] , int low, int high )
{
	int mid;
	if(low<high)
	{
		mid =(low + high ) /2;
		merge(a,low,mid);
		merge(a,mid+1,high);
		mergesort(a,low,mid,high);
	}
}

void mergesort(int a[],int low, int mid, int high )
{
	int temp[1000];
	int i,j,k;
	i = low;j=low; k = mid+1;
	while(i<=mid && k<=high )
	{
		if(a[i]< a[k])
			temp[j++] = a[i++];
		else
			temp[j++] = a[k++];
	}
	if(i>mid)
		for(k;k<=high;k++)
			temp[j++] = a[k];
	else
		for(i;i<=mid;i++)
			temp[j++] = a[i];
	for(j=low;j<=high;j++)
		a[j]= temp[j];
		
}
