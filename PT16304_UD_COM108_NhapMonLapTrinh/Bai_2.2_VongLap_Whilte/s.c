#include <stdio.h>
/// <summary>
/// VÒNG LẶP WHILE
/// Khái niệm vòng lặp: Dùng để lặp đi lặp lại 1 hành động nào đó
/// </summary>
/// <returns></returns>
int main()
{
	//Bước 1: Khai báo biến
	int a = 0;
	printf("Moi ban nhap so CHAN: ");
	scanf_s("%d",&a);
	if (a%2 ==0)
	{
		printf("Chan");
	}
	else
	{
		printf("Le");
	}
	return 0;
}