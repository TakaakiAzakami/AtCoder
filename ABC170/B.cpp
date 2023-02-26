#include<bits/stdc++.h>
using namespace std;
#define rep1(i,n) for(i=1;i<=n;i++)
int main(){
  int x,y;
  int i,j;
  int numK,numT;
  bool exist = false;
  
  cin >> x >> y;
  
  for(numK=x;x>=0;x--){
    numT = x-numK;
    if(y==numK*4+numT*2){
      exist = true;
      break;
    }
  }
  
  if(exist)
    cout << "Yes";
  else
    cout << "No";
  
}
