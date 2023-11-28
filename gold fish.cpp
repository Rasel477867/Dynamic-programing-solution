#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#define ll long long int
#define pb push_back
#include<bits/stdc++.h>
using namespace std;
ll temp,m;
unordered_map<ll,ll>dp;
void fun(ll n)
{
    if(n==m)
     {   temp=1;
         return ;
     }
    if(n%3==0)
    {
      fun(n/3);
      fun(n-n/3);

    }

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n;
    cin>>t;

    while(t--)
    {
        temp=0;
        cin>>n>>m;
        fun(n);
        if(temp==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }



    return 0;

}


