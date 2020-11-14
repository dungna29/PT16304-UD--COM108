#include <stdio.h>
/// <summary>
/// VÒNG LẶP FOR
/// </summary>
/// <returns></returns>
int main()
{
	//Cách dùng: for + tab
	// int i = 0 - Điểm bắt đầu của i = 0
	// i < length - Điểm kết thúc vòng lặp
	// i++ - Tăng thêm 1
	// for (int i = 0; i < length; i++)
	// {
	//		Thực hiện 1 hành động nào đó
	// }

	for (int i = 0; i < 10; i++)
	{
		//printf("Lan Thu %d \n", i);
	}


	//In tất cả các bảng cửu chương bằng cách lồng 2 vòng lặp
	for (int i = 1; i < 10; i++)
	{
		printf("Day la bang cuu chuong %d \n", i);
		for (int j = 0; j <= 10; j++)
		{
			printf("%d x %d = %d \n", i, j, i * j);
		}
	}

	
}
