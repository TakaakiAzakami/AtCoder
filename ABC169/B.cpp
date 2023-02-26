#include<bits/stdc++.h>
using namespace std;
#define test(a) cout << "*" << a << endl;
#define rep1(i,n) for(i=1;i<=n;i++) 
#define ll unsigned long long
int main(){
 ll a[100001];
 ll n;
 ll i;
 ll ans = 1; 
 int zeroFrag = 0;
 int breakFrag = 0;
  
  cin >> n;
  rep1(i,n){
    cin >> a[i];
    if(a[i]==0){
      zeroFrag = 1;
      cout << 0;
      break;
    }
  }
  if(zeroFrag==0){
    rep1(i,n){
      if((long double)1e18/ans  >= a[i]){
        ans *= a[i];
      }
      else{
        breakFrag = 1;
        cout << -1;
        break;
        
      }
    }
  }
  
  if(zeroFrag==0&&breakFrag==0){
    cout << ans;
  }
  
}
