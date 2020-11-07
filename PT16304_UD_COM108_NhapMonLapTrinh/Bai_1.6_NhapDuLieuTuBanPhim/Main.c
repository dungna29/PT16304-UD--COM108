#include <stdio.h>
/// <summary>
/// NHẬP KÝ TỰ TỪ BÀN PHÍM
/// scanf_s("%d",&<biến để hứng>);
/// Các %d,f,c,s
/// </summary>
/// <returns></returns>
int main()
{
	int namNay = 2020, namTuoi = 0;
	//Viết 1 chương trình nhập vào năm sinh và in ra tuổi
	printf("Moi ban nhap nam sinh vao: ");
	scanf_s("%d", &namTuoi);
	printf("Tuoi cua ban la: %d", namNay - namTuoi);
}