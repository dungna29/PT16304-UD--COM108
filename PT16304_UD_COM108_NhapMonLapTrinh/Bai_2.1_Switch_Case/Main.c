#include <stdio.h>
/// <summary>
/// Switch Case
/// Dùng để tạo ra menu trong lập trình nó không biểu thức điều kiện ở bên trong
/// Case: Trường hợp
/// </summary>
/// <returns></returns>

int main()
{
	//Cách dùng sw + tab
	// switch (<Tham số truyền vào có thể là số nguyên, char...>)
	// { Mở lệnh
	// case 1: - Trường hợp 1 đang là kiểu số nguyên
	//		//Thực 1 hành động nào đó khi vào trường hợp
	// 	break;//Dùng để ngắt câu lệnh - Nếu không break sẽ không lỗi và nó sẽ chạy tiếp sang CASE tiếp theo cho đến khi nó gặp break
	// case 2:
	//
	// 	break;
	// case 3:
	// 	break;
	// case 4:
	// 	break;
	// default:
	//		Khi ở trên không có trường hợp nào được lựa chọn thì nó sẽ vào đây
	// 	break;
	// } Đóng lệnh



	//Bước 1: Khai báo biến
	int a = 0, b = 0, input = 0;
	//Bước 2: In ra màn hình menu
	printf("***** May Tinh POLY ***** \n");
	printf("***** 1. Phep Cong 2 so** \n");
	printf("***** 2. Phep Nhan 2 so** \n");
	printf("Moi ban chon chuc nang: ");
	scanf_s("%d", &input);
	switch (input)
	{
	case 1:
		printf("Moi ban nhap so thu 1: ");
		scanf_s("%d", &a);
		printf("Moi ban nhap so thu 2: ");
		scanf_s("%d", &b);
		printf("%d + %d = %d", a, b, a + b);
		break;
	case 2:
		printf("Moi ban nhap so thu 1: ");
		scanf_s("%d", &a);
		printf("Moi ban nhap so thu 2: ");
		scanf_s("%d", &b);
		printf("%d x %d = %d", a, b, a * b);
		break;
	default:
		printf("Chuc nang ban con khong ton tai");
		break;
	}

	/*
	 * Bài tập: Viết 1 chương trình sử dụng Switch Case để tạo ra menu sau:
	 * 1. Xếp loại học lực khi nhập điểm GPA vào - Tùy biến các loại xếp hạng
	 * 2. Cộng 4 số lại với nhau.
	 * 3. Kiểm tra số vào là số chẵn hay lẻ.
	 * 4. Kiểm tra số nguyên âm và nguyên dương.
	 * 5. Kiểm tra điểm thi để biết học lại hay không?
	 */
	printf("--------- Bai Tong Hop POLY ---------");
	printf("--------- 1. Xep loai       ---------");
	printf("--------- 2. Cong 4 so      ---------");
	printf("--------- 3. KT chan le     ---------");
	printf("--------- 4. Nguyen - +     ---------");
	printf("--------- 5. Check diem thi ---------");
}