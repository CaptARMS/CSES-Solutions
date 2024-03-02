#include<bits/stdc++.h>
#include<unordered_set>
#include<cstring>
using namespace std;
#define ll             long long int
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define cin(a,n)       for(int i=0;i<n;i++)cin>>a[i];
#define mod 1000000007

int next_num(int n){
  string s=to_string(n);
  int num=0;
  for(int i=0;i<s.length();i++){
    num=max(num,s[i]-'0');
  }
  return n-num;
}

int32_t main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int n;cin>>n;
  int ans=0;
  while(n){
    ans++;
    n=next_num(n);
  }
  cout<<ans<<endl;
}
