#include <stdio.h>

int main()
{
	
	int temp = 0;
	while (!(temp == 3))
	{
		
		
		printf("Chuc nang 1 \n");
		printf("Chuc nang 2 \n");
		printf("Chuc nang 3 Thoats \n");
		scanf_s("%d", &temp);
		switch (temp)
		{
		case 1:
			printf("Chuc nang 1 \n");
			break;
		case 2:
			printf("Chuc nang 2 \n");
			break;
		case 3:
			printf("Hen cac ban buoi sau \n");
			
			break;
		default:
			break;
		}
	}
}
