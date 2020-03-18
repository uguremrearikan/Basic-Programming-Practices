#include<stdio.h>
int main (void){

//kullanıcıdan 3 adet sayı okuyup en büyüğünü ekrana yazan kod.
int girilen;
int eb=0; //farzedelimki bu en büyük sayi olsun ve bunu şuan için sıfır verelim.
  for(int i=1;i<=3;i++){
    printf("\nsayi giriniz:");
    scanf("%d",&girilen);
    if(girilen>eb)
    eb=girilen;

  }
  printf("\nen buyuk sayi : %d",eb);



  return 0;
}
