#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define mod 1000000007
#define endl "\n"
#define setbits __builtin_popcount

bool prime[1000000];
void Sieve(int n){
  memset(prime,1,n);
  prime[0]=0;
  prime[1]=0;
  for(int i=2;i*i<=n;i++){
    if(prime[i]){
      for(int j=i*i;j<=n;j+=i)prime[j]=0;
    }
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