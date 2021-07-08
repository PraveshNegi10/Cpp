#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+n);
   
   for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            cout<<"found";
        }
    }
    cout<<"Not found";
}