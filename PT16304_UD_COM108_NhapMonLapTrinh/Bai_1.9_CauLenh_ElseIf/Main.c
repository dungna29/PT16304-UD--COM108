#include <stdio.h>
/// <summary>
/// CÂU LỆNH ELSE IF
/// </summary>
/// <returns></returns>
int main()
{
	//Cách sử dụng
	// if (true)
	// {
	// 	
	// }else if()
	// {
	// 		Else if cũng cần phải thỏa mãn thì mới trong
	// }else if()
	// {
	// 	
	// }else
	// {
	// 		Nếu không thỏa mãn tất cả các trường hợp trên 
	// }

	//Xếp loại học lịch dựa trên GPA 
	//- Nhỏ hơn 3 thì nên đổi ngành
	//- Nhỏ hơn 5 và lớn hơn 3 thì nên học lại
	//- nhỏ hơn 7 và lớn 5 là KHÁ
	//- Nhỏ hơn 9 và lớn hơn 7 thì là giỏi
	//- Nhỏ hơn 10 vàn lớn hơn 9 thì nên combat
	float gpaC = 8;
	if (gpaC >= 9)
	{
		printf("Cay rank thoi");
	}else if(gpaC >=7)
	{
		printf("Gioi");
	}else if(gpaC >=5)
	{
 		printf("Kha");
	}else if(gpaC > 3)
	{
		printf("Nen hoc lai");
	}else
	{
		printf("Nen doi nganh");
	}
	
}