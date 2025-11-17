#include <bits/stdc++.h>
using namespace std;

int train_count(vector <pair<int,int>>trains)
{
    int ans=1;
    sort(trains.begin(),trains.end(),[](pair<int,int>&a,pair<int,int>&b)
    {
        if(a.second==b.second)return a.first>a.second;


        return a.second<b.second;
    } );


    int finish=trains[0].second;
    for(int i=1; i<trains.size(); i++)
    {
        if(trains[i].first>=finish+1)
        {
            finish=trains[i].second;
            ans++;
        }
    }
    return ans;
}
int main()
{
    vector<pair<int,int>>train= {{8,12},{6,9},{11,14},{2,7},{1,7},{12,20},
        {7,12},{13,19}
    };

    int maxi=train_count(train);
    cout<<"toatl train "<<maxi;
}
