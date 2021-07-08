#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,k;
    int count=0;
    cin>>n>>k;
    vector<pair<int,int>> vec;
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(k==1)
            {
                cout<<n;
                return 0;
            }
            else if(j%i==0)
            {
            vec.push_back(make_pair(i,j));
            count++;
            }
        }
    }

    cout<<count<<endl;
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i].first<< " " << vec[i].second<<endl;
    }

}