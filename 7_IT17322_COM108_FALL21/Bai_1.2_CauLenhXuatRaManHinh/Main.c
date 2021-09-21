#include <stdio.h>
/*
 * Bài 1.2 Câu lệnh printf(); giúp in ra màn hình
 */
int main()
{
	/*
	 * Phần 1: Cách sử dụng
     * printf("Chuỗi giá trị");// Dùng để in 1 giá trị ra màn hình
	 * printf("%d",<giá trị>);// In giá trị của biến ra màn hình
	 * %d- Số nguyên %f- số thực %s- String %c- ký tự %lf - double
	 */
	printf("Chao Cac Ban Dang Hoc LapTrinh C \n");//\n giúp xuống dòng
	int namhientai = 2021,namsau = 2022;
	printf("%d \n", namhientai);
	printf("Nam nay la: %d & Nam sau la: %d \n", namhientai, namsau);

	//Chạy chương trình: Ctrl + F5
	/*
	 * Bài 1: Viết 1 chương trình khai báo 3 năm sinh
	 * sau đó in 3 năm sinh ra màn hình theo công thức sau:
	 * Nam Sinh 1: 1999
	 * Nam Sinh 2: 2000
	 * Nam Sinh 3: 2001
	 *
	 * Bài 2: Viết 1 chương trình in điểm môn C ra màn hình
	 * theo công thức sau
	 * Diem C cua ban la: 8.6
	 *
	 * Bài 3: Viết 1 chương trình in 1 ký tự bất kì ra màn hình
	 *
	 */

	//Bài 1:
	printf("=============Bai 1=============\n");
	int y1 = 1999, y2 =2000, y3=2001;
	printf("Nam Sinh 1: %d \n", y1);
	printf("Nam Sinh 2: %d \n", y2);
	printf("Nam Sinh 3: %d \n", y3);
	//Bài 2:
	printf("=============Bai 2=============\n");
	float diemC = 8.6;
	printf("Diem mon C: %f \n", diemC);
	//Bài 3:
	printf("=============Bai 3=============\n");//\n giúp xuống dòng
	char c = '%';
	printf("Ky tu trong C: %c \n", c);
}