#include<iostream>
#include <vector>
using namespace std;
int main()
{
     int number_of_monsters;
     cin>>number_of_monsters;
     int my_experience;
     cin>>my_experience;
     vector<int> vector_power;
     for(int i=0;i<number_of_monsters;i++)
     {
         int p;
         cin>>p;
        vector_power.push_back(p);
     }

    //  vector_power.push_back(101);
    //  vector_power.push_back(100);
    //  vector_power.push_back(304);

     vector<int>vector_bonus;
     for(int i=0;i<number_of_monsters;i++)
     {
         int p;
         cin>>p;
        vector_bonus.push_back(p);
     }

    //  vector_bonus.push_back(100);
    //  vector_bonus.push_back(1);
    //  vector_bonus.push_back(524);
    
     int count=0;
     int it = 0;
     while(it != vector_power.size())
     {
         if(my_experience>=vector_power[it])
         {
             
             my_experience=my_experience+vector_bonus[it];
             vector_power.erase(vector_power.begin()+it);
             vector_bonus.erase(vector_bonus.begin()+it);
             count++;
             it=0;
         }
         else 
         {
             it++;
         }
     }

    
     cout<<my_experience<<endl;
     cout<<count<<endl;
     
}