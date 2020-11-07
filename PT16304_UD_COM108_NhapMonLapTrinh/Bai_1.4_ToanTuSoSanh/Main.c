#include <stdio.h>
/// <summary>
/// TOÁN TỬ SO SÁNH - Sử dụng khi cần so sánh 2 hoặc nhiều biểu thức với nhau
/// (Khi so sánh 2 biểu thức sẽ trả ra 1 giá trị true hoặc false - 1 - 0
/// <biểu thức 1> == <biểu thức 2> SO SÁNH BẰNG
/// <biểu thức 1> > <biểu thức 2> SO SÁNH HƠN HOẶC <
/// <biểu thức 1> >= <biểu thức 2> LỚN HƠN HOẶC BẰNG
/// <biểu thức 1> <= <biểu thức 2> NHỎ HƠN HOẶC BẰNG
/// <biểu thức 1> != <biểu thức 2> SO SÁNH KHÁC
/// </summary>
/// <returns></returns>
int main()
{
	printf("5 == 6 Ket Qua Logic = %d \n", 5 == 6);
	printf("5 >= 6 Ket Qua Logic = %d \n", 5 >= 6);
	printf("5 <= 6 Ket Qua Logic = %d \n", 5 <= 6);//Trả ra đúng là 1
	printf("6 <= 6 Ket Qua Logic = %d \n", 6 <= 6);//Trả ra đúng là 1
	printf("6 >= 6 Ket Qua Logic = %d \n", 6 >= 6);//Trả ra đúng là 1
	printf("6 > 6 Ket Qua Logic = %d \n", 6 > 6);//Trả ra false là 0
	printf("6 != 6 Ket Qua Logic = %d \n", 6 != 6);//Trả ra false là 0
}