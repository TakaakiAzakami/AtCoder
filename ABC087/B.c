#include<stdio.h>
int main(void){
  int fiveTen,hund,fiveHund;
  int money;
  int i,j,k;
  int count = 0;
  
  if(scanf("%d\n",&fiveHund));
  if(scanf("%d\n",&hund));
  if(scanf("%d\n",&fiveTen));
  if(scanf("%d\n",&money));
  
  
  for(i=0;i<=fiveHund;i++){
    for(j=0;j<=hund;j++){
      for(k=0;k<=fiveTen;k++){
        if(500*i + 100*j + 50*k == money){
          count += 1; 
        } 
      }
    }  
  }     
    
  printf("%d",count);
  
  return 0;
}
