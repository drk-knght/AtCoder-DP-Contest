#include<bits/stdc++.h>
#define endl "\n

using namespace std;

int main(){
  int n;
  cin>>n;
  int h[n];
  int cost[n]={0};
  int i;
  for(i=0;i<n;i++){
    cin>>h[i];
  }
  cost[1]=abs(h[1]-h[0]);
  for(i=2;i<n;i++){
    cost[i]=min(cost[i-2]+abs(h[i]-h[i-2]),cost[i-1]+abs(h[i]-h[i-1]));
  }
  cout<<cost[n-1];

}
