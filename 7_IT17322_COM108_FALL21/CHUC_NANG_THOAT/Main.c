#include <stdio.h>
int main()
{
	//2 Cách để làm thoát chương trình
	int choice;
	do
	{
		printf_s("Moi ban chon chuc nang: ");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			printf_s("Thoat. Hen gap ban lan sau");
			break;
		}
	} while (choice != 3); //!(choice == 3)

	do
	{
		printf_s("Moi ban chon chuc nang: ");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			printf_s("Thoat. Hen gap ban lan sau");
			return;
		}
	} while (1);
}