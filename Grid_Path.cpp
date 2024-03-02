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
  int n;cin>>n;
  vector<string> grid(n);
  for(int i=0;i<n;i++){
    cin>>grid[i];
  }
  vector<vector<int>> dp(n,vector<int> (n,0));
  for(int i=n-1;i>=0;i--){
    if(grid[i][n-1]=='*')break;
    dp[i][n-1]=1;
  }
  for(int i=n-1;i>=0;i--){
    if(grid[n-1][i]=='*')break;
    dp[n-1][i]=1;
  }
  for(int i=n-2;i>=0;i--){
    for(int j=n-2;j>=0;j--){
      if(grid[i][j]=='.'){
        dp[i][j]=(dp[i+1][j]+dp[i][j+1])%mod;
      }
    }
  }
  cout<<dp[0][0]<<endl;
  return 0;
}
  
