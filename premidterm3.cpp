//program to find greatest in 3 numbers.
#include<stdio.h>

int main (void){
int numbers;
int g=0; //greatest
printf("Enter the numbers:");

  for(int i=1;i<=3;i++){
    scanf("%d",&numbers);
    if(numbers>g)
      g=numbers;
  }
  printf("\ngreatest number is %d",g);






  return 0;
}
