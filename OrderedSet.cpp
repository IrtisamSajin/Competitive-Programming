#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef tree<pair<int, int>, null_type, less<pair<int, int>>,
rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#define mod 1000000007
#define endl "\n"
#define setbits __builtin_popcount
#define pb push_back
#define N 200005 //2e5+5


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc=1;
  cin >> tc;
  while (tc--){
    ll n;
    cin>>n;
    ll ans=0;
    ordered_set s;
    map<ll,ll>cnt;
    for(ll i=0;i<n;i++){
      ll x;
      cin>>x;
      ll y=s.order_of_key({x,0}); //y is the number of smaller elements than x
      ans+=min(y,i-y-cnt[x]);
      s.insert({x,i});      
      cnt[x]++; 
    }
    cout<<ans<<endl;
  }

  return 0;
}