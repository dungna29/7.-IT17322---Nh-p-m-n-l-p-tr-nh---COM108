#include <stdio.h>
/*
* Thuật toán nổi bọt Bubble Sort
*/
int main() {
	int arrNumber[] = { 99,55,66,1 };
	printf("Mang chua duoc sort \n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", arrNumber[i]);
	}
	
	/*for (int i = 0; i < 4 -1; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (arrNumber[i] > arrNumber[j])
			{
				int temp = arrNumber[i];
				arrNumber[i] = arrNumber[j];
				arrNumber[j] = temp;
			}
		}
	}*/
	for (int i = 0; i < 4; i++)
	{
		printf("Lan chay thu: %d \n", i);
		printf("Gia Tri Tai Vi Tri %d \n", arrNumber[i]);
		for (int j = i + 1; j < 4; j++)
		{
			int temp = arrNumber[i];
			printf("Gia Tri cua %d > %d \n", arrNumber[i], arrNumber[j]);
			if (arrNumber[i] > arrNumber[j])
			{
				arrNumber[i] = arrNumber[j];
				arrNumber[j] = temp;
			}
			for (int i = 0; i < 4; i++)
			{
				printf("%d ", arrNumber[i]);
			}
			printf("\n");
		}
		printf("Sau khi sap xep lan thu %d \n", i);
		for (int i = 0; i < 4; i++)
		{
			printf("%d ", arrNumber[i]);
		}
	}
	printf("\n");
	printf("Mang sai khi duoc sort \n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", arrNumber[i]);
	}
}