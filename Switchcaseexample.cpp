 // A shop allows its customers to pay their bills later,but in this case,they must pay 5% interest.
 /*Given a customer's  bill and the code representing whether the customer will  pay immediately or later
  ( N/n: Now , L/l: Later)
  Display the customer's id and what s/he has to pay. */

 #include <stdio.h>
 #define INTEREST 0.05

int main (void){


    double bill ;//input
    double pay; // output
    char payCode;//input

    printf("\n Enter the Customer's Pay Code [N/n] or [L/l]:");
    scanf("%c",&payCode);

    printf("\n Enter the Customer's bill:");
    scanf("%lf",&bill);

    switch(payCode)
    {

    case 'N':
    case 'n': pay=bill;
                printf("Customer will pay %.f TL",pay);
                break;



    case 'L':
    case 'l': pay=bill+bill*INTEREST;
                printf("Customer will pay %.f TL due to interest rate",pay);
                break;

    default: printf("invalid Code!");
    }













return 0;

}
