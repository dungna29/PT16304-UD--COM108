#include <stdio.h>
/// <summary>
/// Chương trình máy tính
/// 1. Phép cộng 2 số
/// 2. Phép nhân 2 số
/// </summary>
/// <returns></returns>
int main()
{
	//Bước 1: Khai báo biến
	int a = 0, b = 0, input = 0;
	//Bước 2: In ra màn hình menu
	printf("***** May Tinh POLY ***** \n");
	printf("***** 1. Phep Cong 2 so** \n");
	printf("***** 2. Phep Nhan 2 so** \n");
	printf("Moi ban chon chuc nang: ");
	scanf_s("%d", &input);
	if (input == 1)
	{
		printf("Moi ban nhap so thu 1: ");
		scanf_s("%d", &a);
		printf("Moi ban nhap so thu 2: ");
		scanf_s("%d", &b);
		printf("%d + %d = %d", a, b, a + b);
	}else if(input == 2)
	{
		printf("Moi ban nhap so thu 1: ");
		scanf_s("%d", &a);
		printf("Moi ban nhap so thu 2: ");
		scanf_s("%d", &b);
		printf("%d x %d = %d", a, b, a * b);
	}else
	{
		printf("Chuc nang ban con khong ton tai");
	}
}