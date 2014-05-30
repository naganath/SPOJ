#include<iostream>
using namespace std;

void mergesort(int a[], int low, int mid, int high)
{
	int i,j,k;
	i =j = low;
	k= mid+1;
	int temp[11];
	while(i<=mid && k<=high)
	{
		if(a[i]<a[k])
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
	for(i=low;i<=high;i++)
		a[i] = temp[i];
}

void merge(int a[], int low, int high)
{
	int mid;
	if(low<high)
	{
		mid= (low +high)/2;
		merge(a,low,mid);
		merge(a,mid+1,high);
		mergesort(a,low,mid,high);
	}
}


int main()
{
	int a,b,A[11],D[11],i,j,k;
	cin>>a>>b;
	while(a && b )
	{
	for(i=0;i<a;i++)
		cin>>A[i];
	for(i=0;i<b;i++)
		cin>>D[i];
	merge(A,0,a-1);
	merge(D,0,b-1);
	if(A[0] <D[1])
		cout<<"Y\n";
	else	
		cout<<"N\n";
	cin>>a>>b;
	}
	return 0;
}
