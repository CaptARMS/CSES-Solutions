#include<bits/stdc++.h>
#include<unordered_set>
#include<cstring>
using namespace std;
#define int            long long int
#define F              first
#define S              secon
#define pb             push_back
#define endl           "\n"
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define cin(a,n)       for(int i=0;i<n;i++)cin>>a[i];

int mod=1e9+7;


int ans=0;

bool ispossible(vector<string> &grid,int i,int j){
  //reserved
  if(grid[i][j]=='*')return false;

  //vertical
  for(int k=i-1;k>=0;k--){
    if(grid[k][j]=='Q')return false;
  }

  //left diagonal
  for(int k=1;i-k>=0 && j-k>=0;k++){
    if(grid[i-k][j-k]=='Q')return false;
  }

  //right diagonal
  for(int k=1;i-k>=0 && j+k<grid[i].size();k++){
    if(grid[i-k][j+k]=='Q')return false;
  }
  return true;
}

int f(vector<string> &grid,int i){
  if(i>=grid.size()){
    return 1;
  }

  int cnt=0;
  for(int j=0;j<8;j++){
    if(ispossible(grid,i,j)){
      grid[i][j]='Q';
      cnt+=f(grid,i+1);
      grid[i][j]='.';
    }
  }
  return cnt;
}


void solve(){
  vector<string> grid(8);
  for(int i=0;i<8;i++){
    cin>>grid[i];
  }
  // cout<<grid[5];
  cout<<f(grid,0)<<endl;
 }

int32_t main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
  int t=1;
  // cin>>t;
  while(t--){solve();}
}
