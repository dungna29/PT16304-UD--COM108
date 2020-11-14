#include <stdio.h>
/// <summary>
/// Hàm không trả về - VOID
/// </summary>
/// <returns></returns>

//Cách dùng:
// <Kiểu hàm> <Tên hàm>(<Tham số truyền vào>){
// 	Body Code
// 	Nơi thực hiện 1 nhiệm vụ nào đó.
// }

void menu()
{
	printf("***** May Tinh POLY ***** \n");
	printf("***** 1. Phep Cong 2 so** \n");
	printf("***** 2. Phep Nhan 2 so** \n");
	printf("Moi ban chon chuc nang: ");
}
void tinhTong()
{
	
}
int main()
{
	//Cách gọi hàm giống như gọi biến
	// Phải biết tên hàm
	menu();//Bắt buộc phải có ()

	/*
	 * Lưu ý:
	 * 1. Đặt tên hàm phải có động từ đứng trước và sử dụng kiểu CamelCase
	 * 2. Hàm giúp quản lý code dễ hơn
	 * 3. Hàm giúp tái sử dụng trong lập trình
	 * 4. Mỗi một hàm có nhiệm vụ thực hiện 1 hành động nào đó.
	 * 5. Giúp bảo trì code về sau dễ hơn.
	 */
}