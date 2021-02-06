#include <bits/stdc++.h>

using namespace std;
int main()
{
    long int n,sum=0,sum1=0,arr[300000],opt;
	cin>>n;
	sum=(n*(n+1))/2;
	for(int i=0;i<n-1;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<n-1;j++)// hello
	{
		sum1+=arr[j];
	}
	opt=sum-sum1;
	cout<<opt;
	return 0;
}
