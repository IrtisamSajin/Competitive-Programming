#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define mod 1000000007
#define endl "\n"
#define setbits __builtin_popcount

//DSU
const int N=2001;
int parent[N];
int sz[N];

void dsu(int n){
  for(int i=0;i<=n;i++){
    parent[i]=i;
    sz[i]=1;
  }
}

int Find(int a){
  if(a==parent[a])return a;
  return parent[a]=Find(parent[a]);
}

void Union(int a,int b){
  a=Find(a);
  b=Find(b);
  if(a!=b){
    if(sz[a]<sz[b])swap(a,b);
    parent[b]=a;
    sz[a]+=sz[b];
  }
  
}


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  while (tc--)
  {
    
  }
 
  return 0;
}