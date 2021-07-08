#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the limit of n"<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"NOT PRIME NUMBER"<<endl;
            break;
        }
        

    }
    if(i==n)
    {
        cout<<"prime number";
    }

    
}