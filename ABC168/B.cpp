#include<bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(i=0;i<n;i++)
#define test(a) cout << "*" << a << endl;
int main (){
  int i;
  int k;
  string s;
  cin >> k;
  cin >> s;
  
  if(s.size()<=k){
    cout << s; 
  }
  else{
    rep0(i,k){
      cout << s[i];  
    }
    cout << "..." << endl; 
  }
   
}
