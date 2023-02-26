#include<bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define test(a) cout << "*" << a << endl;
#define ll long long
int main(){
  int i,j,k;
  int iTmp;
  ll N,M,X;
  ll C[13];
  ll A[13][13];
  ll sum = 0;
  bool exist[13];
  ll US[13];
  ll sumMin = 1000000000;
  bool breakFrag = false;
 
  cin  >> N >> M >> X;
  rep0(i,N){
    cin >> C[i];
    rep0(j,M){
      cin >> A[i][j];
    }
  } 
  rep1(i,pow(2,N)-1){
     rep0(j,M){
          US[j] = 0;
    }
    iTmp = i;
    for(j=N-1;j>=0;j--){
      if(i >= pow(2,j)){
        i -= pow(2,j);
        exist[j] = true;
      }
      else{
        exist[j] = false;
      }
      
    }
    
    rep0(k,N){
      if(exist[k]){
        rep0(j,M){
          US[j] += A[k][j];
        }
      }
    }
        rep0(j,M){
          if(US[j]<X){
            breakFrag = true;
            break;
          }
        }
        if(breakFrag == false){
          rep0(j,N){
            if(exist[j])
              sum += C[j];
          }
          sumMin = min(sumMin,sum);
        }
      
    breakFrag = false;
    i = iTmp;
    sum = 0;
  }
   
  if(sumMin == 1000000000)
    cout << -1 << endl;
  else
    cout << sumMin << endl;
  
}
