#include <stdio.h>
/// <summary>
/// String - Chuỗi
/// </summary>
/// <returns></returns>
int main()
{
	//H O A N G - Để tạo được 1 chuỗi cần kết hợp nhiều ký tự
	//Char thì chỉ lưu trữ được 1 ký tự
	// Chuỗi ký tự: Bao gồm tất cả các ký tự từ bàn phím
	char name[50];//Khai báo 1 mảng char có kích thước là 50
	char name2[] = { 'H','O','A','N','G' };

	//Để in mảng ra màn hình dùng vòng lặp
	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("%c", name2[i]);
	// }

	//printf("%s", name2);

	//Thực hành 1 bài hoàn chỉnh:
	printf("Moi ban nhap ten vao: ");
	gets_s(name, 50);
	// Cách 1
	//scanf_s("%s", &name, 50);

	//Cách 2
	//fgets(name, 50, stdin);

	//Cách 3
	//scanf_s("%[^\n]", name, 20);//Regex
	//printf("Ten ban vua nhap la: %s", ten1);
	printf("Chao ban %s", name);

}
