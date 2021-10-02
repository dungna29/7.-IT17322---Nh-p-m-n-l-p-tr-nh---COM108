#include <stdio.h>
/*
* Hàm trả về - trả về các giá trị
*	1. Không tham số
*	2. Có tham số
* Cách sử dụng:
*	1. Tên hàm phải có nghĩa
*	2. Tên hàm luôn có động từ đứng trước:
*		Ví dụ: tinhTong(),layDsSinhVien, getLstSinhVien.....
*
  Công thức:
  <Kiểu dữ liệu trả về> <Tên hàm> (<Các tham số truyền vào>)
  {
		//Body code
		return <Đúng Kiểu dữ liệu của hàm>;//Luôn nằm ở cuối cùng
  }
*/
//Khai báo hàm không triển khai trước main
int phepTru(int a,int b);
int phepTru2();
int main()
{
	//Cách gọi hàm trả về: cần phải biết tên và coi hàm trả về là 1 giá trị
	phepTru(10, 5);//Không thấy in ra màn hình bởi cả hàm là 1 giá trị muốn in ra thì phải đưa nó vào câu lệnh in
	printf("%d", phepTru(10, 5) +2000);
	printf("%d", phepTru2());
	
}

int phepTru(int a, int b)
{
	return a - b;//Là 2 số nguyên trừ cho nhau sẽ trả ra 1 giá trị nguyên
}
int phepTru2()
{
	int a, b;
	printf("Moi ban nhap a: ");
	scanf_s("%d", &a);
	printf("Moi ban nhap b: ");
	scanf_s("%d", &b);
	return a - b;
}
int getYear()
{
	return 2021;
}
char getChar()
{
	return 'a';
}
float getfloat()
{
	return 5.6;
}