#include <stdio.h>
/// <summary>
/// CÂU LỆNH ĐIỀU KIỆN IF
/// </summary>
/// <returns></returns>
int main()
{
	//CÁCH SỬ DỤNG GÕ if + TAB
	// if (true)   (true) biểu thức của if phải luôn đúng
	// { Mở lệnh
	// 			//nếu biểu thức của IF true thì code sẽ chạy vào đây và thực hiện 1 hành động nào đó
	// } đóng lệnh
	//------------
	// Ví dụ:
	float diemC = 4.9;
	if (diemC >= 5)
	{
		printf("Chuc mung ban da qua mon C");
	}
	if (diemC < 5)
	{
		printf("Chuc mung ban da mat 600k");
	}
}