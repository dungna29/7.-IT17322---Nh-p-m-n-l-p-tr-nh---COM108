#include <stdio.h>
/*
 *  Mảng - ARRAY
 *	1. Mảng dùng để lưu trữ 1 tập giá trị có cùng kiểu dữ liệu
 *	2. Mảng trong lập trình là mảng tĩnh không co giãn
 *	3. Để truy xuất và gán phần tử trong mảng cần biết index và index luôn bắt đầu từ 0
 */
int main()
{
	//Lưu trữ nhiều giá trị
	int a = 9, b = 10, c = 11, d = 12;
	//Phần 1: Cách dùng:
	// <kiểu dữ liệu> <arr + tên mảng>[] = {giá trị 1,giá trị 2...}; 
	// <kiểu dữ liệu> <arr + tên mảng>[kích thước mảng số nguyên];
	int arrNumbers[] = { 5,9,8,7,1 };//Khởi tạo 1 mảng số nguyên có sẵn giá trị gồm 5 phần tử
	int arrYears[4];//Khởi tạo 1 mảng số nguyên có kích thước là 4
	//Có thể tạo ra các mảng có các kiểu dữ liệu khác nhau

	//Phần 2:Truy xuất và gán giá trị thông qua Index
	//arrYears = 2021; Lỗi vì không xác được vị trí cần lưu ở đâu
	arrYears[0] = 2021;
	arrYears[1] = 2022;
	arrYears[2] = 2023;
	arrYears[0] = 2033;//Ghi đè giá trị

	//Truy xuất giá trị trong mảng
	printf_s("Index 0 = %d \n", arrYears[0]);
	printf_s("Index 1 = %d \n", arrYears[1]);
	printf_s("Index 2 = %d \n", arrYears[2]);
	printf_s("Index 3 = %d \n", arrYears[3]);

	//Truy xuất tất cả các phần tử trong mảng dùng vòng lặp
	for (int i = 0; i < 4; i++)
	{
		printf_s("Index %d = %d \n", i, arrYears[i]);
	}
	/*
	 * Bài 1: Khai báo 1 mảng số nguyên gồm các phần tử sau
	 * int arrNumber[] = {88,7,9,6,5,8};	 *
	 *  - In số 5 ra màn hình bằng câu printf.
	 *  - In tất cả các phần tử có ở trong mảng ra màn hình
	 *  - In tất cả các giá trị chẵn ra màn hình.
	 *
	 *	Bài 2: Cho người dùng nhập vào 1 mảng số nguyên và in tổng dãy số người dùng đã nhập ra màn hình.
	 *	15h30 -
	 */
	printf_s("===========================\n");
	printf_s("Bai 1===========================\n");
	int arrNumber[] = { 88,7,9,6,5,8 };
	printf_s("%d \n", arrNumber[4]);
	int i = 0;
	while (i < 6)
	{
		printf_s("%d \n", arrNumber[i]);
		i++;
	}
	printf_s("Cac gia tri chan==================\n");
	for (int i = 0; i < 6; i++)
	{
		if (arrNumber[i] % 2 == 0)
		{
			printf_s("%d \n", arrNumber[i]);
		}
	}
	printf_s("Bai 2===========================\n");
	int size = 0;
	int numberND[1000];
	printf_s("Moi ban nhap so luong phan tu muon them: ");
	scanf_s("%d", &size);
	for (int i = 0; i < size; i++)
	{
		printf_s("Moi ban nhap gia tri tai %d: ", i);
		scanf_s("%d", &numberND[i]);
	}
	for (int i = 0; i < size; i++)
	{
		printf_s("%d \n", numberND[i]);
	}
}