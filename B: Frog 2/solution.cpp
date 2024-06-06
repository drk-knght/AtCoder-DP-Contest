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
#define ld long double
#define meme(a,no)  memset(a,no,sizeof(a))
using namespace std; 

const int INF=1e9+7;

/*const int N=1000+5;

int x;

//const int mod=998244353;

//const int N=100000+9;

vector<vector<int>>v(N);

int vis[N]={0};

int level[N];*/

long long binpow(ll a,ll b){
    ll res=1;
    while(b>0){
        if(b&1){
            res=res*a;
        }
        a=a*a;
        b>>=1;
    }
    return res;
}

long long binpow_mod(ll a,ll b,ll c){
    ll res=1;
    while(b>0){
        if(b&1){
            res=res*a%c;
        }
        a=a*a%c;
        b>>=1;
    }
    return res;
}

/*void dfs(int a){
    vis[a]=1;
    for(auto x:v[a]){
        if(!vis[x]){
            sz++;
            dfs(x);
        }
    }
}*/

int32_t main(){
    ios
    int T;
    //cin>>T;
    T=1;
    while(T--){
        int n,k;
        cin>>n>>k;
        int h[n];
        int i,j,l;
        for(i=0;i<n;i++){
            cin>>h[i];
        }
        int dp[n];
        dp[0]=0;
        for(i=1;i<n;i++){
            dp[i]=INF;
        }
        for(i=1;i<=min(k,n-1);i++){
            for(j=i-1;j>=0;j--){
                dp[i]=min(dp[i],dp[j]+abs(h[j]-h[i]));
            }
        }
        for(i=min(k+1,n-1);i<n;i++){
            for(j=i-1;j>=max(i-k,0ll);j--){
                dp[i]=min(dp[i],dp[j]+abs(h[j]-h[i]));
            }
        }
        cout<<dp[n-1]<<endl;
    }
    
    
}
