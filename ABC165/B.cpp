#include<bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
int main(){
  long long x;
  long long yokin=100;
  long long year=0;
  int i,j;
  
  cin >> x;
  
  while(yokin<x){    
   yokin *= 1.01;
   year++;
  }
  
  cout << year << endl;
  
}
