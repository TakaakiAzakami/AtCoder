#include<bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define test(a) cout << "*" << a << endl
#define ll long long
int main(){
  int n,k;
  int d[101];
  int A[101][101];
  int i,j;
  bool human[101]={false};
  int humanNo=0;
  
  cin >> n >> k;
  rep1(i,k){
    cin >> d[i];
    rep1(j,d[i]){
      cin >> A[i][j];
      human[A[i][j]] = true;
    }
  }
  rep1(i,n){    
    if(human[i]==false){
      humanNo++;  
      //test(i);
    }
  }
  cout << humanNo << endl;
  
}
