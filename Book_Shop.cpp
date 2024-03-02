#include<bits/stdc++.h>
#include<unordered_set>
#include<cstring>
using namespace std;
#define ll             long long int
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
  vector<int> v(n),p(n);
  cin(v,n);cin(p,n);
  vector<vector<int>> dp(n+1,vector<int>(x+1,0));
  for(int i=1;i<=n;i++){
    for(int j=0;j<=x;j++){
      dp[i][j]=dp[i-1][j];
      if(v[i-1]<=j)dp[i][j]=max(dp[i][j],dp[i-1][j-v[i-1]]+p[i-1]);
    }
  }
  cout<<dp[n][x]<<endl;
  return 0;
}
  
