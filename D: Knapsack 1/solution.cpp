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
vector<bool>v;
vector<int>isfactor;

void Seive(int n){
    v.assign(n+1,true);
    isfactor.assign(n+1,0);
    v[0]=false; v[1]=false;
    for(int i=2;i<=n;i++){
        if(v[i]){
            isfactor[i]=i;
            for(int j=i*i;j<=n;j+=i){
                if(v[j]){
                    v[j]=false;
                    isfactor[j]=i;
                }
            }
        }
    }
    
}

int32_t main(){
    ios
    int T;
    //cin>>T;
    T=1;
    while(T--){
        int n,w;
        cin>>n>>w;
        int wt[n+1],val[n+1];
        for(int i=1;i<=n;i++){
            cin>>wt[i]>>val[i];
        }
        int mat[n+1][w+1];
        meme(mat,0);
        int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<=w;j++){
                if(j>=wt[i]){
                    mat[i][j]=max(mat[i-1][j],mat[i-1][j-wt[i]]+val[i]);
                }
                else mat[i][j]=mat[i-1][j];
            }
        }
        cout<<mat[n][w]<<endl;
        
    }
    
    
}
