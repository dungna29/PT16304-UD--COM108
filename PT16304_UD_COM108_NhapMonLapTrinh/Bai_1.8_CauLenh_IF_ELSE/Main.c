#include <stdio.h>
/// <summary>
/// CÂU LỆNH IF ELSE - NẾU - THÌ
/// </summary>
/// <returns></returns>
int main()
{
	//Cách dùng
	// if (true)
	// {
	//		//Khi biểu thức của if true
	// }
	// else
	// {
	//		//Khi biểu thức if != true
	// }	
	float diemC = 4.9;
	if (diemC >= 0 && diemC<=10)
	{
		if (diemC >= 5)
		{
			printf("Chuc mung ban da qua mon C");
		}
		else
		{
			printf("Chuc mung ban da mat 600k");
		}
	}else
	{
		printf("Diem nay khong dung voi VN");
	}
	
}