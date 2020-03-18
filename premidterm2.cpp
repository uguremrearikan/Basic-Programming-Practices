//program to print table of any number.
//her hangi bir sayinin 10'a kadar olan çarpımını gösteren program.
#include<stdio.h>
int main(void){
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  for(int i=1;i<=10;i++){
    printf("\n%dx%d=%d",num,i,num*i);


  }


  return 0;
}
