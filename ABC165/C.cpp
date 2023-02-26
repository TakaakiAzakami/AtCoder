#include<bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define test(a) cout << "*" << a << endl
#define ll long long
int main(){
  int i,j;
  int n,m,q;
  int a[51];
  int b[51];
  int c[51];
  ll d[51];
  int A[11];
  ll sum=0;
  ll sumMax=0;
  int countM=0;
  
  cin >> n/*Aの長さ*/ >> m/*数の最大値*/ >> q/*得点の数*/;
  rep0(i,q){
    cin >> a[i] >> b[i] >> c[i] >> d[i];   
  }

  for(i=1;i<=n;i++){
    A[i] = 1;
  }
  
  while(1){    
    for(i=0;i<q;i++){
      if(A[b[i]] - A[a[i]] == c[i]){
        sum += d[i];
      }
    }
    if(sumMax < sum){
      sumMax = sum;  
    }
    if(A[1]==m){
      break;  
    }
    sum = 0;

      i=n;
      while(A[i]==m){
        countM++;
        i--;
      }
      if(countM > 0){
        A[i] += 1;
        for(j=1;j<=countM;j++){
          A[i+j] = A[i];
        }
      }
      else{
        A[n] += 1;
      }      
      countM = 0;

  }
  
  cout << sumMax << endl;
    

}
