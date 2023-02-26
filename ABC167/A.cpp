#include<bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(i=0;i<n;i++)
#define test(a) cout << "*" << a << endl;
int main(){
  int i;
  string S,T;
  bool exist = false;
  
  cin  >> S >> T ;
  rep0(i,S.size()){
    if(S[i] != T[i]){
      break;
    }
    else{
      if(i==S.size()-1)
        exist = true;
    }
  }
  if(exist)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  
}
