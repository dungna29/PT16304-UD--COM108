#include <stdio.h>
/// <summary>
/// Hàm không trả về - VOID
/// CÓ THAM SỐ TRUYỀN VÀO
/// </summary>
/// <returns></returns>

//Cách dùng:
// <Kiểu hàm> <Tên hàm>(<Tham số truyền vào 1> ,<Tham số truyền vào 1>....){
// 	Body Code
// 	Nơi thực hiện 1 nhiệm vụ nào đó.
// }

void tinhTongBonSo(int so1, int so2, int so3, int so4)//Tham số phụ thuộc vào bài toán 
{
	printf("%d + %d + %d + %d = %d", so1, so2, so3, so4, so1 + so2 + so3 + so4);
}
void hamMau(char c, float diemC, double diemThi, int a, long dodai)
{

}

int main()
{
	/*
	 *	Lưu ý: Gọi hàm có tham số truyền vào
		1. Phải truyền đầy đủ các tham số theo vị trí đúng
		2. Không thể không truyền tham số vì sẽ gây lỗi
		3. Có thể sử dụng nhiều kiểu dữ liệu kết hợp trong tham số.
	 */
	tinhTongBonSo(1, 2, 3, 4);
	tinhTongBonSo(5, 5, 0, 0);
	tinhTongBonSo(5, 4, 3, 2);
	//Bài tập:
	/*
	 * Viết 1 chương trình tính toán với 3 số nguyên gồm 4 chức năng:
	 * 1. Phép cộng
	 * 2. Phép trừ
	 * 3. Phép nhân
	 * 4. Phép chia
	 *
	 * Sử dụng Switch Case và phải chia các phép toán thành các hàm
	 * sau đó gọi vào Switch Case.
	 * +1 điểm nếu sử dụng hàm có tham số
	 */
}