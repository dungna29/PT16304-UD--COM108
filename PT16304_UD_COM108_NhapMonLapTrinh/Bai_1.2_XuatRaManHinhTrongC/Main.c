#include <stdio.h>
/// <summary>
/// Hàm printf() dùng để in giá trị ra màn hình console
/// </summary>
/// <returns></returns>
int main()
{
	/*
	 * Phần 1: Công thức sử dụng printf()
	 * printf(" <giá trị> ");//Kiểu số 1
	 * printf("%<kiểu dữ liệu>",<giá trị>);//Kiểu số 2 in giá trị của biến ra màn hình
	 */
	//Ví dụ 1:
	printf("Nhap Mon Lap Trinh C \n");//\n là xuống dòng
	//Ví dụ 2: In giá trị của biến ra màn hình
	int namnay = 2020;//Khai báo 1 biến có kiểu dữ liệu là số nguyên và có khởi tạo giá trị ban đầu
	printf("%d \n",namnay);
	

	//Lưu ý: %d (Kiểu số nguyên) %f(số thực) %s(chuỗi) %c(ký tự) về xem kiểu double dùng % gì???4
	int namtieptheo = 2021;
	printf("Nam nay la nam: %d & Nam sau la nam: %d", namnay,namtieptheo);

	/*
	 * Khai báo hết 3 bài bên trong 1 File Main.c
	 * Bài tập 1: Viết 1 chương trình khai báo 1 
	 * biến kiểu ký tự và in kiểu ký tự ra màn hình
	 * 
	 * Bài tập 2: Viết 1 chương trình khai báo 3 biến điểm
	 * diemTk,diemThi,diemTB sau đó in 3 biến trên cùng 1 
	 * câu lệnh printf() như mẫu dưới đây:
	 * Diem TK: 8.6
	 * Diem Thi: 7.2
	 * Diem TB: 6.9
	 * 
	 * Bài tập 3: Viết 1 chương trình khai báo 5 biến NĂM
	 * In tùy ý 5 biến này ra ngoài màn hình.
	 */
}