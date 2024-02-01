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

void f(int depth,int from,int to){
  if(depth==0){
    return;
  } 
  int other=6-from-to;
  f(depth-1,from,other);
  cout<<from<<" "<<to<<endl;
  f(depth-1,other,to);
}

void solve(){
  int n;
  cin>>n;
  cout<<((1<<n)-1)<<endl;
  f(n,1,3);
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
