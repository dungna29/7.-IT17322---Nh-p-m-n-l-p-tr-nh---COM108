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

//Hàm void không tham số
void nhapHaiSo() {//Hàm do dev tự định nghĩa	
	printf("Moi ban nhap a: ");
	scanf_s("%d", &a);
	printf("Moi ban nhap b: ");
	scanf_s("%d", &b);
}

//Hàm void có tham số: Có thể có bao nhiêu biến tùy theo bài toán và cũng có thể có các kiểu dữ liệu khác nhau.
void phepTru(int a,int b)//(int a,int b) được gọi là tham số của hàm.
{
	//Các tham số được sử dụng bên trong hàm hoàn toàn bình thường.
	printf("%d - %d = %d", a, b, a - b);
}

//Thông thường chúng ta chỉ nên khai báo hàm trong C như cách sau:
void hamChucNang1();//Khai báo hàm chứ chưa code bên trong với mục đích đặt hàm này nằm dưới main cho dễ quản lý code
void hamChucNang2(int a, int b, int c, double d, float e, int arrnumber[]);
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
		//Khi sử dụng hàm có tham số lưu ý phải truyền đúng giá trị vào các vị trí trên tham số của hàm và đúng kiểu dữ liệu.
		//phepTru(); Báo đỏ là vì chưa truyền tham số vào cho hàm
		phepTru(b,a);//Truyền tham số đúng kiểu dữ liệu
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
void hamChucNang1()
{
	//Sau khi đã khai báo ở trên tiến hành copy xuống và triển khai code như bình thường
}