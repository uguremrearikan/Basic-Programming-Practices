#include <stdio.h>
int main(void){
// 1234 rakamlar� toplam� ka� ve ka� haneli oldu�u
int sayi,hane=0,toplam=0;

printf("Sayiyi giriniz:");
scanf("%d",&sayi);
    do{
        toplam+=sayi%10;
        hane++;
        sayi=sayi/10;


    }
     while(sayi>0);
    printf("Rakamlari toplami %d ve %d haneli",toplam,hane);




return 0;
}
