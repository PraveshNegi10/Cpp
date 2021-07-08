#include <iostream>
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
    
    i=0;
    
        for(j=i+1;j<n;j++)
        {   
            if(arr[i]==arr[j])
            {
                cout<<"found";
                return 0;
                
            }
            i++;
        }
    
        cout<<"not found";
    
}
