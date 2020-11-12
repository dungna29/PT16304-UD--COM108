#include <stdio.h>
/// <summary>
/// VÒNG LẶP WHILE
/// </summary>
/// <returns></returns>
int main()
{
	//Cách dùng: wh + tab
	// 1. Vòng lặp luôn đúng và không có điều kiện để dừng thì gọi là vòng lặp vô hạn
	// 2. Khi sử dụng vòng lặp cần xác định khi nào thì vòng lặp sẽ dừng
	// 3. Học 3 từ khóa : break - goto - continue (Về tự học goto và continue)
	// while (true) - 1 Biểu thức của While
	// { Mở lệnh
	// 		Với điều kiện While luôn True thì vòng lặp sẽ vẫn chạy
	//
	// } Đóng lệnh

	// Ví dụ 5: Sử dụng break
	int a = 0;
	while (1)
	{
		printf("Chao POLY  %d \n", a);
		if (a > 5)
		{
			break;
		}
		a++;
	}


	// Ví dụ 4: in 5 lần câu chào POLY
	// int a = 5;
	// while (a <= 5 && a >=0)
	// {
	// 	printf("Chao POLY  %d \n", a);
	// 	a--;
	// }




	//Ví dụ 3: Vòng 
	// while (3 >2)//Nếu vòng lặp không có điểm dừng thì được gọi là vòng lặp vô hạn
	// {
	// 	printf("Hello");
	// }

	
	//Ví dụ 2:
	// while (2 > 9)//2 > 9 =  False mà nếu False thì vòng lặp While sẽ không hoạt động
	// {
	// 	printf("Hello");
	// }

	// Ví dụ 1: Sử dụng vòng lặp để lặp lại hành động yêu cầu dùng nhập vào
	// while (1)
	// {
	// 	//Bước 1: Khởi tạo biến
	// 	int a;
	// 	printf("Moi ban nhap so chan : ");
	// 	scanf_s("%d", &a);
	// 	if (a % 2 == 0)
	// 	{
	// 		printf("Chan \n");
	// 	}
	// 	else
	// 	{
	// 		printf("le \n");
	// 	}
	// }
	

}