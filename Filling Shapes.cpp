#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#define ll long long int
#define pb push_back
#include<bits/stdc++.h>
using namespace std;
ll k;
ll dp[100005];
ll h[1000005];
ll fun(ll n)
{
  if(n<2)
    return 0;
  if(n==2)
    return 2;
  if(dp[n]!=-1)
    return dp[n];
  dp[n]=2*fun(n-2);
  return dp[n];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n,a;
    memset(dp,-1,sizeof(dp));
    cin>>n;
    cout<<fun(n);

    return 0;

}


