﻿#include <stdio.h>
/// <summary>
/// Câu lệnh if
///	Hay còn gọi là câu điều kiện hoặc câu lệnh rẽ nhánh
/// </summary>
/// <returns></returns>
int main()
{
	//Cách sử dụng: if + tab
	/*
	
	if (1) = (1) nó là 1 biểu thức hoặc nhiều biểu thức 
	{//Mở lệnh
	
		//Body code thực thi 1 hành động hoặc nhiều hành động nào đó khi mà thỏa mãn điều kiện If luôn đúng.
		
	}//Đóng lệnh
	
	 */

	//Ví dụ 1: Viết 1 chương trình nhập điểm thi môn C và thông báo học lại

	// //Bước 1: Xác định số lượng biến
	// double diemC;
	// //Bước 2: Lấy dữ liệu
	// printf_s("Moi nhap diem thi C cua ban: ");
	// scanf_s("%lf", &diemC);
	// //Bước 3: Thực thi
	// if (diemC >= 5)
	// {
	// 	printf("Chuc mung ban da qua mon C");
	// 	//return;//Khi chạy vào return thì sẽ kết thúc hàm hiện tại và code sẽ ko chạy tiếp xuống dưới
	// }
	// printf("Chuc mung ban da mat 700k");

	/* Câu lệnh If else
	 if (true)
	{
		//Thực thi 1 hành động khi thỏa mãn if
	}else
	{
		//Thực thi 1 hành khi if không thỏa mãn
	}
	 */
	//Ví dụ 2:
	
	double diemC;	
	printf_s("Moi nhap diem thi C cua ban: ");
	scanf_s("%lf", &diemC);	
	if (diemC >= 5 && diemC <=10)
	{
		printf("Chuc mung ban da qua mon C");		
	}else
	{
		printf("Chuc mung ban da mat 700k");
	}
	
}