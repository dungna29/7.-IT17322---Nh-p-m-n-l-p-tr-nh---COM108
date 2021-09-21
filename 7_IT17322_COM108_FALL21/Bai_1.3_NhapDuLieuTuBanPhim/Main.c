#include <stdio.h>
/// <summary>
/// NHẬP DỮ LIỆU TỪ BÀN PHÍM
/// scanf_s("%d",&<biến để hứng giá trị>);- Xác định muốn hứng giá trị có kiểu dữ liệu gì?
/// Vẫn có tương tự như printf
/// %d, %s, %f, %c, %lf
/// </summary>
/// <returns></returns>
int main()
{
	//Bài 1: Viết 1 chương trình nhập năm sinh vào và in ra
	
	//Bước 1: Xác định bài toán cần có bao nhiêu biến và kiểu dữ liệu là gì
	int ns;
	//Bước 2: Chỉ dẫn cho người dùng và gán giá trị cho biến
	printf("Moi ban nhap nam sinh: ");
	scanf_s("%d",&ns);//ns sẽ hứng giá trị sau khi người dùng nhập
	//Bước 3: Thực thi
	printf("Nam Sinh Cua Ban la : %d", ns);
	printf("Tuoi Cua Ban la : %d",2021 - ns);

	//Hãy sửa bài trên thành bài in thêm tuổi của người nhập vào
}