#include <stdio.h>
/// <summary>
/// VÒNG LẶP DO - WHILE
/// Nếu biểu thức While False thì nó sẽ chạy ít nhất 1 lần
/// </summary>
/// <returns></returns>

int main()
{
	//Cách dùng: do + tab
	// do
	// {
	// 	   Tương tự với định nghĩa của vòng lặp
	//     Nếu While False thì vẫn chạy vào DO 1 lần
	// }
	// while (true);

	//Ví dụ 2: Crush
	char c;
	do
	{
		printf("Ban co thich to khong? c = co || k = 0 :");
		scanf_s("%c", &c);
		getchar();		
	} while (!(c == 'c'));
	printf("Nhung to khong thich cau");
	//Ví dụ: Hỏi Crush có yêu mình không?
	// char c;
	// do
	// {
	// 	
	// 	printf("Ban co thich to khong? c = co || k = 0 :");
	// 	scanf_s("%c", &c);
	// 	getchar();
	// 	if (c == 'c')
	// 	{
	// 		printf("Nhung to khong thich cau");
	// 		break;
	// 	}
	// }
	// while (1);
	



	//Ví dụ 1:
	// do
	// {
	// 	printf("While dang false");
	// } while (3 > 9);//3 > 9  = False

	/*
	 * Bài 1: Viết 1 chương trình cho phép người dùng nhập vào từ 0 đến 100.
	 * Nếu người dùng nhập không đúng yêu cầu thì yêu cầu người dùng nhập lại.
	 *
	 * Bài 2: Viết 1 chương trình cho phép người dùng chỉ nhập vào số chẵn.
	 * Nếu số lẻ thông báo và bắt người dùng nhập lại.
	 *
	 * Bài 3: Viết 1 chương trình cho phép người dùng nhập vào 1 bảng cửu chương kiểu số nguyên
	 * Sau đó in bảng cửu chương người dùng đã chỉ định ra màn hình. Sử dụng While hoặc Do While.
	 */
}