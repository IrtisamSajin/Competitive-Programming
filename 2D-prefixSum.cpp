#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define mod 1000000007
#define endl "\n"
#define setbits __builtin_popcount
#define pb push_back
#define mp make_pair
const ll N=1005;

// 2D prefix sum resource: https://usaco.guide/silver/more-prefix-sums?lang=cpp#2d-prefix-sums

//problem link: https://codeforces.com/problemset/problem/1722/E

ll a[N][N],pre[N][N];


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc=1;
  cin >> tc;
  while (tc--){
    ll n,q;
    cin>>n>>q;
    for(ll i=0;i<N;i++){
      for(ll j=0;j<N;j++){pre[i][j]=0;a[i][j]=0;}
    }

    while(n--){
      ll h,w;
      cin>>h>>w;
      a[h][w]+=h*w;
    }

    for(ll i=1;i<N;i++){
      for(ll j=1;j<N;j++){
        pre[i][j]=(a[i][j]+pre[i][j-1]+pre[i-1][j]-pre[i-1][j-1]);        
      }
    }
    

    while(q--){
      ll h1,w1,h2,w2;
      cin>>h1>>w1>>h2>>w2;
      cout<<(pre[h2-1][w2-1]-pre[h2-1][w1]-pre[h1][w2-1]+pre[h1][w1])<<endl;
    }

  }

  return 0;
}