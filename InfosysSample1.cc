#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int power,bonus;
    int number_of_monster;
    cin>>number_of_monster;
    int my_experience;
    cin>>my_experience;
    vector<pair<int,int>> monster;
    for(int i=0; i<number_of_monster; i++)
    {
    cin>>power>>bonus;
    monster.push_back(make_pair(power,bonus));
    }
    sort(monster.begin(),monster.end());
    int count = 0;
    for(int i=0; i<number_of_monster; i++)
    {
        if(my_experience>=monster[i].first)
        {
            my_experience = my_experience + monster[i].second;
            count++;
        }
    }
    cout<<count<<endl;
}