#include<bits/stdc++.h>
using namespace std;
#define rep1(i,n) for(i=1;i<=n;i++)
int main(){
  int x,n;
  int i;
  int p[101];
  int sa;
  bool exist = false;

  cin >> x >> n;
  
  int ans = x;
  
  rep1(i,n){
    cin >> p[i];
  }
  
  for(sa=0;sa<100/**/;sa++){
    rep1(i,n){
      if(p[i]==x+sa){
        break;
      }
      if(i==n){
        exist = true;
        ans = x+sa;
      }
    }
    /*if(exist==true)
      break;*/
    
    rep1(i,n){
      if(p[i]==x-sa){
        break;
      }
      if(i==n){
        exist = true;
        ans = x-sa;
      }
    }
    if(exist==true)
      break;  
  }
  cout << ans;
}
