#include<bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define test(a) cout << "*" << a << endl
#define ll long long
int main(){
  int n,m;
  int i;
  ll H[100001];
  ll A[100001];
  ll B[100001];
  ll countGood=0;
  bool existM[100001];
  
    
  cin >> n >> m;
  rep1(i,n){
    cin >> H[i];
  }
  rep1(i,m){
    cin >> A[i] >> B[i];
  }
  rep1(i,n){
   existM[i] = true; 
  }
  
  rep1(i,m){
     if(H[A[i]] > H[B[i]]){
       existM[B[i]] = false;
     }
     else if(H[A[i]] < H[B[i]]){
       existM[A[i]] = false;
     }
     else{
       existM[A[i]] = false;
       existM[B[i]] = false;
     }
  }
  
  rep1(i,n){
    if(existM[i])
      countGood++;
  }
  cout << countGood << endl;
  
  
}
