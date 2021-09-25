#include <stdio.h>
/*
 * 1. In 1 bảng cửu chương hoặc full bảng cửu chương
 */
int main()
{
	//1. Bảng cửu chương đơn
	/*
	 * 5 x 1 = 5
	 * 5 x 2 = 10
	 * 5 x 3 = 15
	 * ....
	 * 5 x 10 = 10
	 */
	int a = 5;
	for (int i = 1; i <= 10; i++)
	{		
		printf_s("%d x %d = %d \n", a, i, a * i);
	}
	//2. Full bảng cửu chương bắt buộc sử dụng 2 vòng lặp
	for (int i = 1; i <= 10; i++)//Vòng for 1 đại diện cho số bên trái
	{
		printf_s("Bang nhan %d \n", i);
		for (int j = 1; j <= 10; j++)//Vòng for 2 đại diện cho số bên phải
		{
			printf_s("%d x %d = %d \n", i, j,i * j);
		}
	}
	//Bài tập: Về nhà sử dụng While và Do..While để in 2 loại bảng cửu chương trên.
}