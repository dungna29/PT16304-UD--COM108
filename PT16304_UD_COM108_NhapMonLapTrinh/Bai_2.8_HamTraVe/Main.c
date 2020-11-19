#include <stdio.h>
/// <summary>
/// HÀM TRẢ VỀ
/// </summary>
/// <returns></returns>

//Công thức:
//<Kiểu dữ liệu hàm>: Là các kiểu dữ liệu nguyên thủy int,char,long,float,double.. ngoài ra có thể là 1 tập hợp hoặc kiểu dữ liệu dạng tập hợp như Array hoặc List, Arraylist
// <Kiểu dữ liệu hàm> <Tên hàm>(<tham số>){
// 	//Body code
// 	return <Giá trị phải là kiểu dữ liệu của hàm>;
// }
int a = 10 +10 +10;
int getYear()
{
	return 2020;
}
int tinhTong2(int a, int b)
{
	int ketqua = a + b;
	return ketqua;
}
int tinhTong3(int a, int b)
{
	return a + b;
}



void tinhtong(int a, int b)
{
	printf("%d + %d = %d", a, b, a + b);
}
int main()
{
	/*
	 * Định nghĩa hàm không trả về	
	tinhtong(5, 5);
	*/
	tinhTong2(5, 5);//Không in ra gì là vì hàm này nó là 1 giá trị
	printf("%d\n", tinhTong2(5, 5));
	//Hàm trả về nếu là 1 kiểu dữ liệu số thì có thể tính toán trên hàm đó.
	printf("%d", tinhTong2(5, 5) +10 );
}

