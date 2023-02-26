#include<bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(i=0;i<n;i++)
int main(){
  int aH,bP;
  int cH,dP;
  int yesFrag = 0;
  int noFrag = 0;
  
  cin >> aH >> bP >> cH >> dP; 
  
  while(1){
    
    cH -= bP;
    if(cH <= 0){
      yesFrag = 1;
      break;
    }
    
    aH -= dP;
    if(aH <= 0){
      noFrag = 1;
      break;
    }
  }
  if(yesFrag == 1){
    cout << "Yes";
  }
  if(noFrag == 1){
    cout << "No";
  }
    
}
