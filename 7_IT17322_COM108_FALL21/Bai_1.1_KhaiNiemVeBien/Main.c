#include <stdio.h>
/*
 * BÀI 1.1 KHÁI NIỆM VỀ BIẾN
 * 1. Biến dùng để lữu trữ giá trị trong lập trình
 * 2. Biến được lưu vào RAM máy tính khi chương trình bắt đầu chạy và sẽ mất đi khi dừng chương trình
 * 3. Biến cần phải có kiểu dữ liệu ví dụ: int, float, char......
 */
int main()
{
	/*
	 * Phần 1: Công thức khai báo biến
	 * + <Kiểu dữ liệu> <Tên biến>;//Cách khai báo 1
	 * + <Kiểu dữ liệu> <Tên biến 1>,<Tên biến 2>,<Tên biến 3>;//Khai báo nhiều biến có cùng kiểu dữ liệu
	 * + <Kiểu dữ liệu> <Tên biến> =(toán tử gán) <giá trị>;
	 *
	 * <Kiểu dữ liệu>: Dùng để định nghĩa kiểu dữ liệu cho giá giá trị cần lưu trữ.
	 */
	//Ví dụ:	
	int a;//Khai báo 1 biến a có kiểu dữ liệu là số nguyên và không khởi tạo giá trị ban đầu
	a = 1;//Gán giá trị cho biến a thông qua toán tử =

	int b = 9;//Khai báo 1 biến b có kiểu dữ liệu là số nguyên và có khởi tạo giá trị ban đầu

	int b1, b2, b3, b4 = 10;//Khai báo nhiều biến có cùng kiểu dữ liệu

	int tuoi = 18;

	/*
	 * Phần 2: Đặt tên biến
	 * - Tên biến đặt dễ hiểu và đúng nghĩa
	 * - Tên biến hạn chế đặt bằng tiếng việt khi đi làm về sau
	 * - Không đặt tên biến gây hiểu nhầm.
	 * Gồm 3 cách đặt tên biến với 2 từ trở lên
	 * - C1: normal: sinhvien - thông thường tên biến sẽ đặt kiểu nomarl
	 * - C2: CamelCase: SinhVien
	 * - C3: Under_Score: sinh_Vien
	 */

	 /*
	  * Phần 3: Các kiểu dữ liệu trong lập trình
	  * Số nguyên: short,long, int
	  * Số thực: float,double
	  * Ký tự: char (Chỉ có thể lưu trữ được 1 ký tự)
	  * Chuỗi: String (Ngôn ngữ C không có String)
	  * Logic: Boolean trả ra True hoặc False nhưng trong C sẽ trả ra 0 và 1
	  */
	short temp = 32767;
	char c1 = '5';
	char c2 = 'a';
	char c3 = '+';
	
}