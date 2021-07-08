#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,key;
    cin>>n>>m;
    int arr [n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];

        }
    }
    bool flag=false;
    cout<<"Enter the key";
    cin>>key;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
          if(arr[i][j]==key)
          {
              cout<<i<<" "<<j<<endl;
              flag=true;
          }
        }   
    }
    if(flag==true)
    {
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
}