#include<bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(i=0;i<n;i++)
#define test(a) cout << "*" << a << endl;
#define ll long long
int main(){
  int i;
  ll A,B,C,K;
  ll sum = 0;
  
  cin  >> A >> B >> C >> K;
  if(K<=A){
    sum = K;
  }
  else if(K<=A+B){
    sum = A;
  }
  else{
    sum = A + (-1) * (K-A-B);
  }
      
  cout << sum << endl;
  
}
