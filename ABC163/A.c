#include<stdio.h>
#include<math.h>
int main(void){
  int r;
  double cir;
  
  scanf("%d",&r);
  
  cir = 2 * r * M_PI;  

  
  printf("%.20f",cir);
  
  return 0;
}
