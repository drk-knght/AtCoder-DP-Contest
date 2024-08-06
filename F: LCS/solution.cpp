        
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

const int N=200000+5;

const int mod=998244353;

int32_t main(){
    ios;
    int T;
    //cin>>T;
    T=1;
    while(T--){
      string s,t;
      cin>>s>>t;
      int n=s.length();
      int m=t.length();
      int mat[n+1][m+1];
      meme(mat,0);
      int i,j,k,l;
      for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
          if(s[i-1]==t[j-1]){
            mat[i][j]=max({mat[i-1][j],mat[i][j-1],mat[i][j],mat[i-1][j-1]+1});
          }
          else
          {
            mat[i][j]=max(mat[i][j-1],mat[i-1][j]);
          }
        }
      }
      vector<char>v;
      int total=mat[n][m];
      i=n;
      j=m;
      while(i>0 && j>0){
        if(mat[i-1][j-1]+1==mat[i][j] && s[i-1]==t[j-1]){
          v.pb(s[i-1]);
          total--;
          i--;
          j--;
        }
        else
        {
          if(mat[i][j]==mat[i-1][j]){
            i--;
          }
          else if(mat[i][j]==mat[i][j-1]){
            j--;
          }
        }
      }
      reverse(all(v));
      for(char &ch:v){
        cout<<ch;
      }      
      cout<<endl;
    }    
}
