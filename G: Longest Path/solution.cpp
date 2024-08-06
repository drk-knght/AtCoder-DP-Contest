#include<bits/stdc++.h>
#include<algorithm>
#define int long long
#define ll long long
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define bs binary_search
#define mp make_pair
#define pf push_front
#define pof pop_front()
#define pob pop_back()
#define lb lower_bound
#define up upper_bound
#define ld long double
#define meme(a,no)  memset(a,no,sizeof(a))
#define all(v)  v.begin(),v.end()
 

using namespace std; 

const int INF=1e18;

const int N=100000+5;

const int mod=1e9+7;

vector<vector<int>>adj(N);

int visited[N],dp[N];

int n,m;

int dfs(int node){
  if(visited[node]){
    return dp[node];
  }
  visited[node]=1;
  int ans=0;
  for(auto &x:adj[node]){
    ans=max(ans,dfs(x));
  }
  return dp[node]=ans+1;
}

int32_t main(){
  ios;
  int T;
  // cin>>T;
  T=1;
  while(T--){
    cin>>n>>m;
    int i,j,k,l;
    meme(dp,-1);
    for(i=0;i<m;i++){
      int x,y;
      cin>>x>>y;
      adj[x].pb(y);
    }
    int ans=0;
    for(i=1;i<=n;i++){
      ans=max(ans,dfs(i));
    }
    cout<<ans-1<<endl;
  }    
}
