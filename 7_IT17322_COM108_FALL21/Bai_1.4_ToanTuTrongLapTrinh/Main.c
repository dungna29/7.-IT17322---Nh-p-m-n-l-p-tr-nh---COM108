#include <stdio.h>
/*
		* 4 Loại toán tử trong lập trình
		*  1. Toán tử số học:
		*  (+ - * / % ++ --)
		*      +: Tính tổng của 2 số hoặc dùng để cộng chuỗi
		*      -: Phép trừ của 2 số
		*      *: Phép nhân của 2 số
		*      %: Phép chia lấy dư của 2 số
		*      ++: Tăng lên 1 đơn vị
		*      --: Giảm 1 đơn vị
		*  2. Toán tử so sánh:
		*  (> < >= <= == !=)
		*      >: Lớn hơn
		*      <: nhỏ hơn
		*      >=: lớn hơn hoặc bằng
		*      <=: nhỏ hơn hoặc bằng
		*      ==: so sánh bằng
		*      !=: so sánh khác
		*  3. Toán tử Logic:
		* (&& || !)
		*      &&: Yêu cầu các mệnh đề phải luôn đúng
		*      ||: Yêu cầu 1 trong các mệnh đề dúng là được
		*      !: Lấy giá trị phủ định của mệnh đề.
		*  4. Toán tử gán:
		* (= += -= *= /= %=)
		*      +=: Cộng tiếp với vế bên phải các phép còn lại tương tự
		*/
int main()
{
	//Phần 1: Toán tử số học
	int a = 5;
	a++;//= 6 tăng lên 1 đơn vị
	++a;//7

	//Phần 2: Toán tử so sanh:
	double diemC = 5.6;
	printf_s("%d \n", (diemC > 5));//True = 1
	printf_s("%d \n", (diemC < 5));//Fasle = 0
	printf_s("%d \n", (diemC >= 5));//True = 1
	printf_s("%d \n", (diemC == 5));//Fasle = 0
	printf_s("%d \n", (diemC != 5));//True = 1

	//Phần 3: Toán tử logic
	printf("=================================== \n");
	printf_s("%d \n", (5 > 5) && (6 > 5));//False = 0
	printf_s("%d \n", (5 > 5) && (6 > 5) && (1 == 1));//False = 0
	printf_s("%d \n", (5 > 5) || (6 > 5) || (1 == 1));//True = 1
	printf_s("%d \n", !(1 == 1));//False = 0

	//Phần 4: Toán tử gán
	int number = 5;
	number = number + number;//10
	number += number;//Đây là cách viết rút gọn của number + number
}