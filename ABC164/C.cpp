#include<bits/stdc++.h>
#include <set>
using namespace std;
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n;i++)
int main(){
  int num;
  int i;
  set<string> se;  
  string str;

  cin >> num;
  
  rep0(i,num){
    cin >> str;
    se.insert(str);
  }
 
  cout << se.size() << endl;

}
