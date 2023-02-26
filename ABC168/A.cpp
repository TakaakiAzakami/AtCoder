#include<bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(i=0;i<n;i++)
#define test(a) cout << "*" << a << endl;
int main (){
  int N;
  cin >> N;
  if(N%10==3){
    cout << "bon";
  }
  else if(N%10==0||N%10==1||N%10==6||N%10==8){
     cout << "pon";

  }
  else{
      cout << "hon";

  }
}
