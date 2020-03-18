#include<stdio.h>
#include<conio.h>

int main(void) {
	// carpim tablosu (matris tipleri )
/*	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			printf("%d\t", i*j);
		}
		printf("\n");
	}
	*/

		// dama tahtası veya Yıldız deseni
	/*for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if ((i + j) % 2 == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	*/
	/*
	// Yukaridaki matrisin sayi hali
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			printf("%d\t", i + j);
		}
		printf("\n");
	}
	*/

	//5x5 lik dama tahtasindan belli yildizlari çikarip "X" sekli elde etme
	/*for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j<=5; j++)
		{
			if ((i + j) ==6 || i==j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	*/
	// 1-100 e kadar olan asal sayilarin toplami
	/*int sum = 0;
	for (int d = 1; d < 100; d++)
	{
		int p = 0;

		for (int i = 2; i <= d - 1; i++)
		{
			if (d%i == 0)
			{
				p = 1;
			}
		}
		if (p == 0)
		{
			printf("%d\n", d);
			sum += d;
		}
	}
	printf("sum:%d", sum);
	*/






	getch();
}
