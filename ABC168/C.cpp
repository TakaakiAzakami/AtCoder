#include<stdio.h>
#include<math.h>

int main (){
  int i;
  int A,B;
  int H,M;
  double radA;
  double radB = 0;
  double sita;
  double answer;
  const double PI = 3.14159265358979323846;
  
  scanf("%d %d %d %d",&A,&B,&H,&M);
 
  radA = H * PI / 6 + M * PI / 360;
  radB = M * PI / 30;
  if(radA>radB)
    sita = radA - radB;
  else
    sita = radB - radA;

  answer = (double)sqrt((double)A*A+B*B-2*A*B* cos(sita)) ;
  
  printf("%.18f",answer);

}
