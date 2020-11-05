#include <stdio.h>
/// <summary>
/// KHÁI NIỆM VỀ BIẾN
/// 1. Biến dùng để lưu trữ giá trị ví dụ như: số, chữ, ký tự
/// 2. Biến được khởi tạo sẽ lưu trữ trên RAM của máy tính
/// 3. Biến phải có kiểu dữ liệu: số nguyên, số thực, ký tự
/// 4. Tên biến có phân biệt chữ hoa và chữ thường ngoài ra không được đặt tên biến giống nhau
/// 5. Biến có thể khai báo nhiều tên biến có cùng kiểu dữ liệu trên cùng 1 dòng
/// </summary>
/// <returns></returns>
int _namSinh = 2000;//Khai báo biến toàn cục
int main()
{
	//Phần 1: Cách khai báo 1 biến có khởi tạo giá trị hoặc không khởi tạo
	// <Kiểu dữ liệu> <Tên biến> =(Toán tử gán) <Giá trị cần lưu trữ>;(Dấu chấm phẩy dùng để đóng câu lệnh)
	//Ví dụ1:
	int a;//Khai báo 1 biến a có kiểu dữ liệu là số nguyên và không khởi tạo giá trị ban đầu
	int A = 1;//Khai báo 1 biến A có kiểu dữ liệu là số nguyên có khởi tạo giá trị ban đầu
	a = 10;//Gán giá trị cho biến a với toán tử =

	//Khai báo nhiều biến có cùng kiểu dữ liệu có thể khởi tạo giá trị hoặc không khởi tạo giá trị
	// <Kiểu dữ liệu> <tên biến 1>,<tên biến 2>,<tên biến 3>....
	//Ví dụ 2:
	int c1;
	int c2;
	int c3;
	int c4;
	int c5, c6, c7 = 9, c8, c9;//Khai báo nhiều biến trên cùng 1 dòng

	//Phần 2: Cách đặt tên biến đơn và biến có từ 2 từ trở lên
	// - Đặt tên biến sao cho có nghĩa
	// - Tên biến không sử dụng tiếng việt có dấu và space
	// - Tên biến có phân biệt chữ hoa và chữ thường
	// * Có 3 cách đặt tên biến với 2 từ trở lên
	// C1: normal Ví dụ: tensinhvien - Hay sử dụng cách này để đặt tên biến
	// C2: CamelCase ví dụ: TenSinhVien
	// C3: Under_Score ví dụ: ten_Sinh_Vien
	// Tập dần cách đặt tên biến bằng tiếng Anh. 

	//Phần 3: Biến toàn cục và biến cục bộ
	// Biến toàn cục: Là biến được khai báo ở bên ngoài hàm và đặt tên có dấu _ đứng trước tên
	// Biến cục bộ: là biến được khai báo ở bên trong hàm

	//Phần 4: Các kiểu dữ liệu có trong lập trình
	// byte,short,int,long (Là các kiểu dữ liệu số nguyên)
	// float,double(Là 2 kiểu số thực)
	// char(kiểu ký tự 'c' '5' kiểu này chỉ lưu được 1 ký tự duy nhất)
	// string(chuỗi trong C sẽ không có) chuỗi bao gồm nhiều ký tự thì được gọi là chuỗi
	// boolean (Kiểu dữ liệu logic trả ra kết quả là True hoặc False trong C không có mà sẽ trả 0 và 1)
} 