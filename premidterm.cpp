
//program to swap of two numbers w/t using third variable;
#include <stdio.h>
int main (void){


  int a,b;
  printf("Enter the numbers:");
  scanf("%d%d",&a,&b); // a=4 , b=5;

  printf("\nfirst order %d %d ",a,b);

  a=b+1; // a=5+1;
  a--; // 6-1=5;
  b=a-1; //5-1=4;
  printf("\n last order %d %d",a,b);


  return 0;
}
