#include <stdio.h>
/// <summary>
/// MẢNG - ARRAY
/// </summary>
/// <returns></returns>
int main()
{
	//Vấn đề đặt ra - Khai báo 1 dãy số 8 , 7, 9, 5,2
	//Khai báo biến
	int a1 = 8, a2 = 7, a3 = 9, a4 = 5, a5 = 2;
	//Công thức khai báo mảng:
	// <Kiểu dữ liệu> <arr + Tên mảng>[] = { <giá trị1>, <giá trị 2>,.... };
	// <Kiểu dữ liệu> <arr + Tên mảng>[<kích thước mảng>];
	int arrNumber[] = { 8,7,9,5,2 };//khai báo 1 mảng số nguyên có khởi tạo giá trị ban đầu
	int arrNumber2[5];//Khai báo 1 mảng số nguyên có kích thước mảng là 5 phần tử.

	// Lấy giá trị: - Chú ý Index bắt đầu từ 0 chữ không phải 1
	// arrNumber[<index>]; - Muốn giá trị của phần tử thì cần phải biết index của nó đang nằm ở đâu
	printf("%d", arrNumber[0]);
	printf("%d", arrNumber[1]);
	printf("%d", arrNumber[2]);
	printf("%d", arrNumber[3]);
	printf("%d", arrNumber[4]);
	//printf("%d", arrNumber[5]);//In ra ra giá trị mắc định/

	//In nhiều giá trị ra màn hình dùng vòng lặp
	for (int i = 0; i < 5; i++)
	{
		printf(" \t %d", arrNumber[i]);
	}

	//Gán giá trị trong mảng cần biết index
	// <tên mảng> [index] = <giá trị>;

	
}
