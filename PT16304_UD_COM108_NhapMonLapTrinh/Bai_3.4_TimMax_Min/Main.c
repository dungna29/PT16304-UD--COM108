#include <stdio.h>

int main()
{
	int arrNumb[] = { 55,44,93,100,1 };
	int max = arrNumb[0];
	for (int i = 1; i < 5; i++)
	{
		if (max < arrNumb[i])
		{
			max = arrNumb[i];
		}
	}
	printf_s("So lon nhat %d", max);
}
