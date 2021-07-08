#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	n= sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+n);
	for(int i=0;i<n/2;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(int j=n-1;j>=n;j--)
	{
		cout<<arr[j]<<" ";
	}
}