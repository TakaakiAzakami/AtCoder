#include<stdio.h>
int main(void){
  int num;
  int moti[100];
  int i,j;
  int kaburi = 0;
  
  if(scanf("%d\n",&num));
  for(i=0;i<num;i++){
    if(scanf("%d\n",&moti[i]));
  }
  
  for(i=0;i<num;i++){
    if(moti[i] == 0){
      continue;
    }
    for(j=i+1;j<num;j++){
      if(moti[i] == moti[j] && moti[j] != 0){
        kaburi += 1;
        moti[j] = 0;
      }
    }
  }  
   printf("%d",num - kaburi); 
  return 0;
}
