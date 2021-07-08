#include<iostream>
using namespace std;

int partition(int arr[],int s,int e)
{
    int p=arr[s];
    int i=s;
    int j=e;
    while(i<j)
    {
        while(arr[i]<=p)
        {
            i++;
        }
        while(arr[j]>p)
        {
            j--;
        }
        if(i<j)
        {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
    }
    int temp=arr[s];
    arr[s]=arr[j];
    arr[j]=temp;

    
    return j;
    
}

void quicksort(int arr[],int s,int e)
{
    if(s<e)
    {
        int p= partition (arr,s,e);
        quicksort(arr,s,(p-1));
        quicksort(arr,(p+1),e);
    }
  
  
}


int main()
{   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //int arr[]={5,4,3,2,1};
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


