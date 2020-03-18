#include <stdio.h>
#include<stdlib.h>
#include<conio.h> // to put getch(); in line "53"
#include <unistd.h> // sleep ();
#include<windows.h> // system(cls);

void camagaci(void){
sleep(1);


  int h,j,k,i,t;
  h=5;
  int i1,j1,k1; //for sap;
  //cam agaci Govde kismi ;

  printf("    *\n");
    for(t=1;t<=3;t++){

      sleep(1);
      for( i=1;i<=h;i++){
        for(k=h-i;k>0;k--){
          printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
          printf(".");
        }
        printf("\n");

      }

      h+=1;
    }
    //SAP
    sleep(1);

    for(i1=1;i1<=5;i1++){
        for(k1=4;k1>0;k1-=1)
          printf(" ");
        for(j1=1;j1<=5;j1++)
        printf(".");
      printf("\n");

    }
    sleep(1);
    system("cls");
}
int main(void){
  system("color 2");
  while(TRUE){

  camagaci();
}
    getch();

    return 0;


}
