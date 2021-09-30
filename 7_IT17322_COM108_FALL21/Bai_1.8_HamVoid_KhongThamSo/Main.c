#include <stdio.h>
/*
* Hàm không trả về - void
*	1. Không tham số
*	2. Có tham số
* Cách sử dụng:
*	1. Tên hàm phải có nghĩa
*	2. Tên hàm luôn có động từ đứng trước: 
*		Ví dụ: tinhTong(),layDsSinhVien, getLstSinhVien.....
  Công thức:
  <Kiểu hàm> <Tên hàm> (<Các tham số truyền vào>)
  {
		//Body code
  }
*/
int a, b;//Đưa a b ra làm biến toàn cục để các hàm có thể dùng chung
void nhapHaiSo() {//Hàm do dev tự định nghĩa	
	printf("Moi ban nhap a: ");
	scanf_s("%d", &a);
	printf("Moi ban nhap b: ");
	scanf_s("%d", &b);
}
int main() {
	char choice;	
	printf("1. Phep Cong \n");
	printf("2. Phep tru \n");
	printf("3. Phep nhan \n");
	printf("4. Phep chia \n");
	printf("Moi ban con chuc nang \n");
	scanf_s("%c", &choice);
	switch (choice)
	{
	case '1':		
		//Để sử dụng hàm thì phải biết tên Hàm
		nhapHaiSo();//Gọi tên hàm và kết thúc bằng dấu ();
		printf("%d + %d = %d",a,b,a+b);
		break;
	case '2':	
		nhapHaiSo();//Gọi tên hàm và kết thúc bằng dấu ();
		printf("%d - %d = %d", a, b, a - b);
		break;
	case '3':		
		nhapHaiSo();//Gọi tên hàm và kết thúc bằng dấu ();
		printf("%d x %d = %d", a, b, a * b);
		break;
	case '4':		
		nhapHaiSo();//Gọi tên hàm và kết thúc bằng dấu ();
		printf("%d : %d = %d", a, b, a / b);
		break;
	default:
		break;
	}
}