#include <stdio.h>
//Bước 1: Khai báo biến
int a = 0, b = 0, input = 0;

/// <summary>
/// Diễn giải tên hàm
/// </summary>
void nhapHaiSo()
{
	printf("Moi ban nhap so thu 1: ");
	scanf_s("%d", &a);
	printf("Moi ban nhap so thu 2: ");
	scanf_s("%d", &b);
}

void tinhTongHaiSo()
{
	nhapHaiSo();
	printf("%d + %d = %d", a, b, a + b);
}

void tinhTichHaiSo()
{
	nhapHaiSo();
	printf("%d x %d = %d", a, b, a * b);
}
void menu()
{
	
	printf("***** May Tinh POLY ***** \n");
	printf("***** 1. Phep Cong 2 so** \n");
	printf("***** 2. Phep Nhan 2 so** \n");
	printf("Moi ban chon chuc nang: ");
	scanf_s("%d", &input);
	//Bước 2: In ra màn hình menu	

	switch (input)
	{
	case 1:
		tinhTongHaiSo();
		break;
	case 2:
		tinhTichHaiSo();
		break;
	default:
		printf("Chuc nang ban con khong ton tai");
		break;
	}
}
int main()
{
	
	
}
