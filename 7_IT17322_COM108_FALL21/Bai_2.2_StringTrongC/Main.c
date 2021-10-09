#include <stdio.h>
/*
 * Chuỗi trong C nó là 1 mảng ký tự
 * Java -String, C# - string (chuỗi)
 */
int main()
{
	//Khai báo 1 mảng kiểu char
	char name[50];
	printf_s("Moi ban nhap ten: ");
	gets_s(name, 50);
	//scanf_s("%s", name, 50);
	//fgets(name, 50, stdin);
	//scanf_s("%[^\n]", name, 50);//Regex
	printf_s("Chao ban %s", name);
}