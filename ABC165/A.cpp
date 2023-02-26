#include<bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
int main(){
  int k,a,b;
  bool exist = false;
  int i,j;
  
  cin >> k >> a >> b;
  
  rep1(i,1000){
    if(a<=k*i &&k*i<=b){
      exist = true;
      break;
    }
  }
  if(exist == true)
    cout << "OK" << endl;
  else
    cout << "NG" << endl;
    
  
}
