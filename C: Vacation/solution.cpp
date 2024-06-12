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
        int n;
        cin>>n;
        int a[n+1],b[n+1],c[n+1];
        int i,j,k,l;
        for(i=1;i<=n;i++){
            cin>>a[i]>>b[i]>>c[i];
        }
        int mat[3][n+1];
        meme(mat,0);
        mat[0][1]=a[1];
        mat[1][1]=b[1];
        mat[2][1]=c[1];
        for(i=2;i<=n;i++){
            mat[0][i]=max(max(mat[1][i-1]+a[i],mat[2][i-1]+a[i]),mat[0][i-2]+a[i]);
            mat[1][i]=max(max(mat[0][i-1]+b[i],mat[2][i-1]+b[i]),mat[1][i-2]+b[i]);
            mat[2][i]=max(max(mat[0][i-1]+c[i],mat[1][i-1]+c[i]),mat[2][i-2]+c[i]);
        }
        cout<<max(max(mat[0][n],mat[1][n]),mat[2][n])<<endl;
    }
    
    
}
