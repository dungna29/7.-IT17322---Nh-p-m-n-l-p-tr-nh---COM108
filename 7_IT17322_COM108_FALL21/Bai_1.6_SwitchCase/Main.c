#include <stdio.h>
int main()
{

	/*
	 * Bài tập: Xây dựng 1 cái menu bằng Else if
	 *
		/====Menu Fpoly===/
		1. Ăn phở
		2. Ăn cơm
		3. Ăn cháo
		4. Ăn bún
		Khi chi chọn món ăn sẽ in ra câu:
		Bạn chờ <món ăn đó> trong 5 phút nhé.
	 */
	char choice;
	printf_s("===Menu Fpoly=== \n");
	printf_s("===1. An pho \n");
	printf_s("===2. An com \n");
	printf_s("===3. An chao \n");
	printf_s("===4. An bun \n");
	printf_s("Moi ban chon mon: ");
	scanf_s("%c", &choice);//Gán giá trị chọn của người dùng
	//Lưu ý: Thường trong lập trình không ai sử dụng If else để xây dựng menu
	// if (choice=='1')
	// {
	// 	printf_s("Ban cho mon pho trong 5 phu nhe");
	// }else if (choice == '2')
	// {
	// 	printf_s("Ban cho mon com trong 5 phu nhe");
	// }else if (choice == '3')
	// {
	// 	printf_s("Ban cho mon chao trong 5 phu nhe");
	// }else if (choice == '4')
	// {
	// 	printf_s("Ban cho mon bun trong 5 phu nhe");
	// }else
	// {
	// 	printf_s("Mon an khong ton tai");
	// }

	//Sử dụng Menu bằng Switch case sw + tab
	int a, b;
	switch (choice)
	{
	case '1':		
		printf_s("Ban cho mon pho trong 5 phu nhe");
		break;
	case '2':
		printf_s("Ban cho mon com trong 5 phu nhe");
		break;
	case '3':
		printf_s("Ban cho mon chao trong 5 phu nhe");
		break;
	case '4':
		printf_s("Ban cho mon bun trong 5 phu nhe");
		break;
	default:
		printf_s("Mon an ban chon khong co");
		break;
	}
	/*
	 switch (choice) choice là giá trị truyền có thể là số nguyên, string, ký tự
	{
		case '4': //Trường hợp tương ứng với kiểu dữ liệu truyền vào
		printf_s("Ban cho mon bun trong 5 phu nhe");
		 break;//Sau khi thực hiện 1 hành động thì sẽ thoát ra ngoài
		 Nếu khung dùng break sẽ ko có lỗi và nó sẽ chạy tiếp case tiếp theo đến khi nó gặp break tiếp theo

		 default: khi không thỏa mãn bất cứ case nào thì sẽ vào default
	}
	 */

	 /*
	  * Bài tập về nhà: Viết 1 chương trình sử dụng Switch Case để tạo ra menu sau:
	  * 1. Xếp loại học lực khi nhập điểm GPA vào - Tùy biến các loại xếp hạng
	  * 2. Cộng 4 số lại với nhau.
	  * 3. Kiểm tra số vào là số chẵn hay lẻ.
	  * 4. Kiểm tra số nguyên âm và nguyên dương.
	  * 5. Kiểm tra điểm thi để biết học lại hay không?
	  */
	
}