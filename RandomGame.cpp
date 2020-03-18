#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100
#include <conio.h>

int main(void){

    printf("***** SAYI TAHMIN OYUNU ******");

    int ran_num;
    int guess;
    int cnt=0;
    srand(time(0));
    ran_num=rand()%MAX+1;


    printf("\n \n KURAL:Makine 1 ile 100 arasinda bir sayi tutmustur \n     amac en az tahmin ile oyunu bitirmek");

    printf(" \n\nLutfen 1 ile 100 arasinda bir sayi giriniz [1-100]:");
    scanf("%d",& guess);

    while(guess!=ran_num){
    if(guess<ran_num && guess<=MAX)
        {
        cnt++;
        printf("\n %d.tahmin",cnt);
        printf("\nTahminini arttirmalisin");
        printf("\nLutfen tahminini gir:");
        scanf("%d",&guess);

        }
    if(guess>ran_num && guess<=MAX)
        {
        cnt++;
        printf("\n %d.tahmin",cnt);
        printf("\nTahminini azaltmalisin");
        printf("\nLutfen tahminini gir:");
        scanf("%d",&guess);
        }
    if  (guess>100)
        {

        printf("Bu sayiyi giremezsin!!!");
        printf("\n %d.tahmin",cnt);
        printf("\nLutfen tahminini gir:");
        scanf("%d",&guess);

        }

    }
    cnt++;

    printf("\n\nTebrikler %d denemede makinenin tuttugu sayiyi tahmin ettin",cnt);
getch();
return 0;
}
