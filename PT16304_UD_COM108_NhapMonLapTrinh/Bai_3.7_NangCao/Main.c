#include <stdio.h>
int input = 1;
char name1[100], name2[100];
int arrNumber[] = { 8,9,10,2,1,3 };
int number[] = { 0,1,2,3,4,5,6,7,8,9 };
int so = 0;
int checkSo(int inputNumber)
{
	int flag = 0;
	for (int i = 0; i < 10; i++)
	{
		if (inputNumber == number[i])
		{
			flag = 1;
		}
	}
	return flag;
}
int hamSoSanhTen()
{
	int kq = 0;
	for (int i = 0; i < 100; i++)
	{
		if (name1[i] != name2[i])
		{
			return 0;
		}
	}
	return 1;	
}
void inMangRaManHinh(int input,int arrN[100])
{
	for (int i = 0; i < input; i++)
	{
		if (arrN[i] !=0)
		{
			printf("%d ", arrN[i]);
		}
		
	}
}
void sapxepMang(int input, int arrN[100])
{
	for (int i = 0; i < input; i++)
	{
		for (int j = i + 1; j < input; j++)
		{
			if (arrN[i] > arrN[j])
			{
				int temp = arrN[i];
				arrN[i] = arrN[j];
				arrN[j] = temp;
			}
		}

	}
}

int main()
{
	
	while (!(input == 9))
	{
		printf("\n 1. So sanh ten 2 ten \n");
		printf(" 2. In so ra man hinh \n");
		printf("Moi ban chon chuc nang: ");
		scanf_s("%d", &input);
		getchar();
		switch (input)
		{
		case 1:
			printf("Moi ban nhap ten 1: ");
			gets_s(name1, 100);
			printf("Moi ban nhap ten 2: ");
			gets_s(name2, 100);
			if (hamSoSanhTen())
			{
				printf("Ban nhap chinh xac \n");
			}else
			{
				printf("Ko nhap chinh xac \n");
			}
			break;
		case 2:
			// inMangRaManHinh(6, arrNumber);
			// printf("\n");
			// sapxepMang(6, arrNumber);
			// inMangRaManHinh(6,arrNumber);
			
			do
			{
				printf("Moi ban nhap so: ");
				scanf_s("%d", &so);
				if (checkSo(so) == 0)
				{
					printf("Ban dang nhap chu\n");
				}
			}
			while (1);
			//Hàm động có thể in mảng khi đổ vào thông qua tham số
			break;

		default:
			break;
		}
	}
}
