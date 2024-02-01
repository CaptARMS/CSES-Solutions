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


int ans=INT_MAX;
void f(int i,vector<int> &a,int curr,int total){
  if(i==a.size()){
    return;
  }
  ans=min(ans,abs(total-2*curr));
  //take
  f(i+1,a,curr+a[i],total);
  //not take
  f(i+1,a,curr,total);
}


void solve(){
  int n;
  cin>>n;
  vector<int> a(n);
  cin(a,n);
  int total=0;
  for(int i=0;i<n;i++){
    total+=a[i];
  }
  f(0,a,0,total);
  cout<<ans<<endl;
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
