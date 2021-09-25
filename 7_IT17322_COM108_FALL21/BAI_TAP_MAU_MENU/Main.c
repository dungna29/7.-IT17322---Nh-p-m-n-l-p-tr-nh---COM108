#include <stdio.h>
/*
	 * Bài tập về nhà: Viết 1 chương trình sử dụng Switch Case để tạo ra menu sau:
	 * 1. Xếp loại học lực khi nhập điểm GPA vào - Tùy biến các loại xếp hạng
	 * 2. Cộng 4 số lại với nhau.
	 * 3. Kiểm tra số vào là số chẵn hay lẻ.
	 * 4. Kiểm tra số nguyên âm và nguyên dương.
	 * 5. Kiểm tra điểm thi để biết học lại hay không?
	 */
int main() {
	//Phần 1: Xác định biến
	int a1, a2, a3, a4,chonSo;
	//Phần 2: Tạo menu
	printf("Chuong trình UDPM FALL21 \n");
	printf("1. Xep loai hoc luc\n");
	printf("2. Cong 4 so\n");
	printf("3. Kiem tra so chan so le\n");
	printf("4. Kiem tra nguyen am nguy duong\n");
	printf("5. Kiem tra diem thi mon C\n");
	printf("Moi ban chon chuc nang: ");
	scanf_s("%d",&chonSo);//Lấy giá trị do người dùng nhập vào
	switch (chonSo)
	{
	case 1:
		break;
	case 2:
		printf("2. Chuc nang cong 4 so:\n");
		printf("Moi ban nhap so thu 1: \n");
		scanf_s("%d", &a1);
		printf("Moi ban nhap so thu 2: \n");
		scanf_s("%d", &a2);
		printf("Moi ban nhap so thu 3: \n");
		scanf_s("%d", &a3);
		printf("Moi ban nhap so thu 4: \n");
		scanf_s("%d", &a4);
		printf("%d + %d + %d + %d = %d\n",a1,a2,a3,a4,a1+a2+a3+a4);
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	default:
		break;
	}
}