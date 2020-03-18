//girilen sayıların asal olup olmadığını bulan kod.
#include<stdio.h>
int main (void){
  int a=1,b;
  printf("sayi girin:");
  scanf("%d",&b);
  int flag=0;//bayrak değişkeni
  while(a<b-1){
    a++;
    if(b%a==0){
      flag=1;
      break;
    }
  }
  if(flag==0)
    printf("sayi asal");
  else
    printf("sayi asal degil");


  return 0;
}
