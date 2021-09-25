#include <stdio.h>
/*
 *  3 Loại vòng lặp: for, while, do...while dùng để lặp lại 1 đoạn code nào đó để thực 1 hành động.
 *	Từ khóa: + break: dùng để ngắt vòng lặp
 *			 + continue: bỏ qua đoạn code phía sau và tiến hành lặp sang vàng vòng lặp mới tiếp theo
 *
 *	1. Vòng lặp for: for + tab
 */
int main()
{
	//Phần 1: Đặt vấn đề chép phạt 10 lần
	printf("Lan sau em hua se di hoc dung gio \n");
	printf("Lan sau em hua se di hoc dung gio \n");
	printf("Lan sau em hua se di hoc dung gio \n");
	printf("Lan sau em hua se di hoc dung gio \n");
	printf("Lan sau em hua se di hoc dung gio \n");
	printf("Lan sau em hua se di hoc dung gio \n");
	printf("Lan sau em hua se di hoc dung gio \n");
	printf("Lan sau em hua se di hoc dung gio \n");
	printf("Lan sau em hua se di hoc dung gio \n");
	printf("For ===========================\n");
	//Phần 2: Hướng giải quyết đo là vòng lặp
	//1. Vòng lặp for: for + tab
	for (int i = 0; i < 10; i++)
	{
		// if (i == 5)
		// {
		// 	break;//Chỉ in đúng 5 lần là ngắt vòng lặp;
		// }
		if (i % 2 == 0)
		{
			continue;//Khi chạy đến số chẵn sẽ ko chạy xuống dòng code dưới và tiến hành sang vòng lặp mới
		}
		printf("Lan sau em hua se di hoc dung gio %d \n", i);
		//Đoạn code cần được lặp lại sẽ để trong vòng lặp
	}
	/*
	 * + int i = 0: Điểm bắt đầu của vòng lặp
	 * + i < 10: Điều kiện để dừng vòng lặp
	 * + i++: Bước nhẩy của i để đạt được điều kiện dừng
	 * + Vòng lặp không có điều kiện dừng hoặc ko đạt được điều kiện dừng gọi là vòng lặp vô hạn
	 */
	printf("While ===========================\n");
	//2. Vòng lặp While: wh + tab
	// int i = 0;
	// while (i < 10)
	// {
	// 	printf("Lan sau em hua se di hoc dung gio %d \n", i);
	// 	i++;
	// }
	//
	//3. Vòng lặp do...While: do + tab
	//Vòng lặp do while sẽ chạy 1 lần cho zù điều kiện có sai đi nữa
	int i = 0;
	do
	{
		printf("Lan sau em hua se di hoc dung gio %d \n", i);
		i++;
	} while (i < 10);


}