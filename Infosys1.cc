#include<iostream>
#include <vector>
using namespace std;
int main()
{
     int n = 3;
     int my_power=100;
     vector<int> vector_power;
     vector_power.push_back(101);
     vector_power.push_back(100);
     vector_power.push_back(304);
     vector<int>vector_bonus;
     vector_bonus.push_back(100);
     vector_bonus.push_back(1);
     vector_bonus.push_back(524);
    
     int count=0;
     
     for(int i =0; i<vector_power.size(); i++)
     { 
         cout<<"F"<<" ";
         if(my_power>=vector_power[i])
         {
             my_power=my_power+vector_bonus[i];
            //  vector_power.erase(vector_power.begin()+i);
            //  vector_bonus.erase(vector_bonus.begin()+i);
             count ++;
         }
         cout<<my_power<<" ";
         

     }
     cout<<count<<" ";
     for(auto it=vector_power.begin();it!=vector_power.end();it++)
     {
         cout<<*it<<" ";
     }
     
        
}
     
     
     
