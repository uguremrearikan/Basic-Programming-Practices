//program to shift inputed data by three bits to the left.
#include<stdio.h>
int main(){

int x,y;
printf("Read integer from keyboard:");
scanf("%d",&x); // x 13 olsun ASCII ---- 1101
x<<=3; //  shift three bits to left means add three zero--- 1101000
y=x; //104 --- ASCII 1101000
printf("the left shifted data is = %d",y);

}
