#include<bits/stdc++.h>
#include<unordered_set>
#include<cstring>
using namespace std;
#define ll             long long int
#define F              first
#define S              secon
#define pb             push_back
#define endl           "\n"
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define cin(a,n)       for(int i=0;i<n;i++)cin>>a[i];
#define mod 1000000007


int32_t main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int n,x;cin>>n>>x;
  vector<int> v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  vector<int> dp(x+1,0);
  dp[0]=1;
  for(int i=1;i<=x;i++){
    for(int j=0;j<n;j++){
      if(i-v[j]>=0)(dp[i]+=dp[i-v[j]])%=mod;
    }
  }
  
  cout<<dp[x]<<endl;
}
