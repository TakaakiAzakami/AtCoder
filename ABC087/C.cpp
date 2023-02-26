#include<bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
int main(void){
  int num;
  int a[2][100];
  int i,j,k;
  int sumMax;
  int sum[100] = {0};
  
  cin >> num;
  
  rep0(i,num) cin >> a[0][i];
  rep0(i,num) cin >> a[1][i];
   
  rep0(i,num){
    rep0(j,num){
       if(i <= j){
         sum[i] += a[1][j]; 
         if(i==j){
           sum[i] += a[0][j];
         }
       }
       else {
         sum[i] += a[0][j]; 
       }     
     }
  }
  
  sumMax = sum[0]; 
  rep1(k,num){
    if(sumMax < sum[k]){
       sumMax = sum[k]; 
    }
  }
  
  cout << sumMax << endl;
  
  return 0;
}
