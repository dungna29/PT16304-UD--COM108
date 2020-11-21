#include <stdio.h>
/// <summary>
/// Thuật toán sắp xếp nổi bọt
/// </summary>
/// <returns></returns>
int main()
{
	int arrNumb[] = { 5,4,3,0,1 };
	//In mảng trước khi sắp xếp
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arrNumb[i]);
	}
	printf("\n");
	//Sử dụng thuật toán
	for (int i = 0; i < 5; i++)
	{
		printf("Lan chay thu: %d \n", i);
		for (int j = i + 1; j < 5; j++)
		{
			printf("Neu %d > %d \n", arrNumb[i], arrNumb[j]);
			if (arrNumb[i] > arrNumb[j])//Đổi < thì sẽ thành sắp xếp giảm dần
			{
				int temp = arrNumb[i];
				arrNumb[i] = arrNumb[j];
				arrNumb[j] = temp;
			}
			for (int i = 0; i < 5; i++)
			{
				printf("%d ", arrNumb[i]);
			}
			printf("\n");
		}
		printf("Lan chay thu: %d sau khi sap xep \n", i);
		for (int i = 0; i < 5; i++)
		{
			printf("%d ", arrNumb[i]);
		}

	}
	// for (int i = 0; i < 5; i++)
	// {
	// 	for (int j = i + 1; j < 5; j++)
	// 	{
	// 		if (arrNumb[i] > arrNumb[j])//Đổi < thì sẽ thành sắp xếp giảm dần
	// 		{
	// 			int temp = arrNumb[i];
	// 			arrNumb[i] = arrNumb[j];
	// 			arrNumb[j] = temp;
	// 		}
	// 	}
	// }
	//In mảng sau khi sắp xếp
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arrNumb[i]);
	}
}
