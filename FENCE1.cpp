#include<iomanip>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	float t;
	cin>>t;
	while(t)
	{
		printf(" %.2f\n",(t*t)/(2*3.1415926));
		cin>>t;
	}
	return 0;
}