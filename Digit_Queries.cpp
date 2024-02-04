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

int power(int a,int b){
  if(b==1)
    return a;
  if(b==0)
    return 1;
  int half=power(a,b/2);
  if(b%2!=0){
    half=half*half*a;
  }else{
    half=half*half;
  }
  return half;
}

void solve(){
  int q;
  cin>>q;
  int e=1;
  int s=9;
  if(q<=9){
    cout<<q<<endl;
    return;
  }
  while(q>s){
    s+=9*power(10,e)*(e+1);
    e++;
  }
  s-=9*power(10,e-1)*(e);
  q=q-s;
  int num=power(10,e-1)+q/e;
  if(q%e==0){
    num--;
    string ans=to_string(num);
    int n=ans.size();
    cout<<ans[n-1]<<endl;
    return;
  }
  int ind=q%e;
  string ans=to_string(num);
  cout<<ans[ind-1]<<endl;
}

int32_t main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
  int t=1;
  cin>>t;
  while(t--){solve();}
}
