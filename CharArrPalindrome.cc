#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=1;
    for(i=0;i<n;i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            check=0;
            break;
        }
    }
    if(check==true)
    {
        cout<<"The char array is a palindrome";
    }
    else
    {
        cout<<"the char array in not a palindrome";
    }
    

    
}