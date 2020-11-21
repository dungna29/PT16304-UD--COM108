#include <stdio.h>
/// <summary>
/// Nhập số vào chương trình
/// </summary>
/// <returns></returns>
int main()
{
	int input = 0, value = 0;
	int arrNumber[1000];
	printf("Moi ban nhap so luong so: ");
	scanf_s("%d", &input);
	for (int i = 0; i < input; i++)
	{
		printf("Moi ban nhap vao so thu %d", i);
		scanf_s("%d", &value);//Hứng giá trị của người dùng nhập vào từ bàn phím
		arrNumber[i] = value;
	}
	printf("\n Cac so nguoi dung vua nhao vao: \n");
	//In ra màn hình các số người dùng đã nhập
	for (int i = 0; i < input; i++)
	{
		printf("%d ", arrNumber[i]);
	}

	/*
	 * Sử dụng Switch Case
	 * Bài tập 1: Viết 1 chương trình cho người dùng nhập 1 mảng số theo người dùng muôn
	 * - In rả người dùng vừa nhập ra màn hình.
	 * - In mảng những số chẵn người vừa nhập ra màn hình
	 * 
	 * Bài tập 2: Nhập 3 đầu điểm vào chương trình đó là: điểm thi C, Điểm thành phần, Điểm online,
	 * Nếu người dùng có điểm điều kiện như sau: thi > = 5, gpaC = >=5, gpaOnline >= 7.5
	 * Thì thông báo qua môn còn không thi thông báo ngược lại.
	 * 
	 * Bài tập 3:  Nhập vào điểm  GPA môn C sau đó xếp hạng điểm như sua:
	 * Nếu điểm  GPA < 5 - Ong lười
	 *  - Từ 9 đến 10 là Ong Vàng.
		- Từ 8 đến 9 là Ong Thợ.
		- Từ 6 đến 8 là Ong Lính.
		- Từ 5 đến 6 là Ong Chưa Chăm
		- Dưới 5 là Ong Lười

	Nếu muốn lấy điểm 10 sử dụng hàm trả về ít nhất 1 hàm.
	 */
}
