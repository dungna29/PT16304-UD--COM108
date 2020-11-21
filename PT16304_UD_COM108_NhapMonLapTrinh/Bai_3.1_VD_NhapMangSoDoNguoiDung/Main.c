#include <stdio.h>
/// <summary>
/// Ví dụ nhập mảng theo yêu cầu của người dùng
/// </summary>
/// <returns></returns>
int main()
{
	while (1)
	{
		//Khai báo sẵn 1 mảng rỗng có kích thước 100 phần tử
		int arrNumber[100], input = 0, value = 0;
		printf("Moi ban nhap so luong phan tu: ");
		scanf_s("%d", &input);
		//Nhập giá trị của người dùng vào mảng sử dụng vòng lặp
		//Vòng lặp ngắt theo số người dùng nhập vào
		for (int i = 0; i < input; i++)
		{
			printf("Moi ban nhap so thu %d: ", i);
			scanf_s("%d", &value);
			arrNumber[i] = value;
		}
		//In tất cả các giá trị trong mảng sử dụng vòng lặp
		printf("So ban vua nhap vao la: \n");
		for (int i = 0; i < input; i++)
		{
			printf("%d ", arrNumber[i]);
		}
		printf("\n");
	}
}