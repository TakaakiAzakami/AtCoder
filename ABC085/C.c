#include<stdio.h>
int main(void){
  int num;
  int money;
  int tenFour,fiveThree,tenThree;
  int breakFrag = 0;
 
  if(scanf("%d %d",&num,&money));
  
  for(tenFour=0;tenFour<=num;tenFour++){
    if(breakFrag == 1)
        break;
    for(fiveThree=0;fiveThree<=num-tenFour;fiveThree++){
      if(breakFrag == 1)
        break;
      for(tenThree=0;tenThree<=num-tenFour-fiveThree;tenThree++){        
        if(money == 10000*tenFour + 5000*fiveThree + 1000*tenThree && num == tenFour+fiveThree+tenThree){
          printf("%d %d %d",tenFour,fiveThree,tenThree);
          breakFrag += 1;
          break;
        }
      }
    }
  }
  if(breakFrag == 0)
    printf("-1 -1 -1");
  
  return 0;
}
