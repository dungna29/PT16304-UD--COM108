#include <stdio.h>
/// <summary>
/// TOÁN TỬ SỐ HỌC
/// + (Cộng) -(Trừ) *(Nhân) /(Chia)
/// ++ (Tăng 1 đơn vị) --(Giảm 1 đơn vị) %(Phép chia lấy dư)
/// </summary>
/// <returns></returns>
int main()
{
	int a = 5, b = 5, kq = 0;
	kq = a + b;
	printf("%d + %d = %d \n", a, b, kq);
	//Phép chia lấy phần dư %
	printf("8:2 Du = %d \n", 8 % 2);
	printf("9:2 Du = %d \n", 9 % 2);
	//Toán tử  ++ --
	a++;// Chính là a + 1
	b--;// Chính là b - 1
	printf("%d + %d = %d \n", a, b, kq);
}