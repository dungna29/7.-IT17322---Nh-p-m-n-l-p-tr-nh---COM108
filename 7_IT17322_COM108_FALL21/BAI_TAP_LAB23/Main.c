#include <stdio.h>
int main()
{
	/*
	 * Viết 1 chương trình sử dụng Switch Case làm Menu(Sử dụng Vòng lặp While hoặc do..while để ôm lấy menu)
	 *  - Sử dụng hàm để phân tác các chức năng thành các phần
	 * Các chức năng sau:
	 * 1. Nhập điểm GPA vào in ra xếp hạng điểm
	 * 2. Nhập năm sinh vào tính ra tuổi cho người dùng
	 * 3. In bảng cửu chương theo yêu cầu
	 * 4. In tất cả bảng cửu chương
	 *
	 *	Điểm 10 đối với những bạn sử dụng từ 1 hàm có tham số truyền vào và  thêm 1 hàm trả về có tham số.
	 */
	char choice;
	do
	{
		printf_s("===Menu Fpoly=== \n");
		printf_s("===1. An pho \n");
		printf_s("===2. An com \n");
		printf_s("===3. Thoat chuong trinh \n");
		printf_s("Moi ban chon mon: ");
		scanf_s("%c", &choice);
		getchar();
		switch (choice)
		{
		case '1':
			printf_s("Ban cho mon pho trong 5 phu nhe \n");
			break;
		case '2':
			printf_s("Ban cho mon com trong 5 phu nhe \n");
			break;
		case '3':
			printf_s("Cam on ban da su dung chuong trinh \n");
			break;
		default:
			printf_s("Mon an ban chon khong co \n");
			break;
		}	
	} while (choice != '3');
	return 0;
}