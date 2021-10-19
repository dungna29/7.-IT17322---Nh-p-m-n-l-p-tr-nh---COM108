#include <stdio.h>

/*
	 * Viết 1 chương trình gồm các chức năng sau: (Menu SwitchCase)
	 * Bài 1: Nhập thông tin học sinh (Tên học sinh, Tuổi, Điểm C, Thành Phố) nhập xong in ra
	 * Bài 2: Nhập một tập hợp các số nguyên và in các số chẵn ra màn hình
	 * Bài 3: Chương trình đăng nhập User và Pass (Tạo sẵn User = admin, Pass = abc!)
	 * Chức năng thoát.
	 */
int main()
{
	/*
	 * Bài tập tìm số lớn nhất và số bé nhất: Yêu cầu cho người dùng nhập vào 1 mảng số nguyên hoặc số thực
	 */
	char c;
	int arrNumbers[100];
	int input;
	do
	{

		printf_s("Moi ban nhap so luong: \n");
		scanf_s("%d", &input);
		for (int i = 0; i < input; i++)
		{

			printf_s("Moi ban nhap index %d: \n", i);
			scanf_s("%d", &arrNumbers[i]);
		}
		for (int i = 0; i < input; i++)
		{
			printf_s("%d ", arrNumbers[i]);
		}
		//Tìm ra số min hoặc max
		// 5 7 9
		int max = arrNumbers[0];//Coi giá trị đầu tiên trong mảng là số lớn nhất
		for (int i = 1; i < input; i++)
		{
			if (max < arrNumbers[i])
			{
				max = arrNumbers[i];
			}
		}
		printf_s("Max = %d \n", max);
		printf_s("Ban co muon thoat khong? c/k \n");
		getchar();
		scanf_s("%c", &c);
	} while (!(c == 'c'));
	printf_s("Hen gap lai ban lan sau nhe");
}