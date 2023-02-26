#include<stdio.h>
#include<math.h>
int main(void){
  int nDay,mNum;
  int a[10000];
  int i;


  scanf("%d %d",&nDay,&mNum);
  for(i=0;i<mNum;i++){
    scanf("%d ",&a[i]); 
  }
  
  
  for(i=0;i<mNum;i++){
    nDay = nDay - a[i];
  }
  
  
  if(nDay>=0){
    printf("%d",nDay);
  }
  else{
    printf("-1");
  }
  
  return 0;
}
