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

const int INF=1e9+7;

const int N=100000+5;

const int mod=998244353;

int t[101][N];

int32_t main(){
    ios;
    int T;
    //cin>>T;
    T=1;
    while(T--){
      int n,w;
      cin>>n>>w;
      int wt[n+1],val[n+1];
      wt[0]=0;
      val[0]=0;
      for(int i=1;i<=n;i++){
        cin>>wt[i]>>val[i];
      }
      for(int i=0;i<=100;i++){
        for(int j=0;j<=N-1;j++){
          t[i][j]=INF;
          if(j==0){
            t[i][j]=0;
          }
        }
      }
      int ans=0;
      for(int i=1;i<=n;i++){
        for(int j=1;j<=N-1;j++){
          if(j>=val[i]){
            t[i][j]=min({t[i][j],t[i-1][j-val[i]]+wt[i],t[i-1][j]});
            
          }
          else
          {
            // if(i==3 && j==5){
            //   cout<<t[i][j]<<endl;
            // }
            t[i][j]=min(t[i-1][j],t[i][j]);
          }
          // if(j<=17){
          //     cout<<i<<" "<<j<<" "<<t[i][j]<<endl;
          // }
          if(t[i][j]<=w){
            ans=max(j,ans);
          }
        }
      }
      cout<<ans<<endl;


    }    
}
