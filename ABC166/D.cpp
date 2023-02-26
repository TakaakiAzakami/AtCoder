#include<bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,a,n) for(i=a;i<=n;i++)
#define test(a) cout << "*" << a << endl
#define ll long long
int main(){
  ll x;
  int i,j;
  bool existBreak = false;
   
  cin >> x;
  
  for(i=1000;i>-1000;i--){
    if(existBreak)
      break;
    for(j=1000;j>-1000;j--){
      if(pow(i,5) - pow(j,5) ==x){
        cout << i << " " << j << endl;
        existBreak = true;
        break;
      }
    }
  }
  
}
