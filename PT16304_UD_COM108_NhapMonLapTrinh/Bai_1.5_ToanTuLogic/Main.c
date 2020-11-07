#include <stdio.h>
/// <summary>
/// TOÁN TỬ LOGIC - Dùng để ghép nhiều biểu thức lại với nhau
/// <biểu thức 1> || <biểu thức 2> Chỉ cần 1 trong 2 biểu thức đúng thì sẽ trả ra kết quả true
///  <biểu thức 1> && <biểu thức 2> Tất cả các biểu thức phải luôn đúng sẽ trả ra true
///  ! <biểu thức 1> Dấu ! đặt trước biểu thức là phủ định với biểu thức đó
/// </summary>
/// <returns></returns>
int main()
{
	float nghi = 4, thi = 5, gpaC = 5, online = 7.5;
	//int ketQuaLogic = (nghi <= 3) && (thi >= 5) && (gpaC >= 5) && online >= 7.5;
	//int ketQuaLogic = (nghi <= 3) || (thi >= 5) || (gpaC >= 5) || online >= 7.5;
	//int ketQuaLogic = !(nghi <= 3) && (thi >= 5) && (gpaC >= 5) && (online >= 7.5);
	int ketQuaLogic = !((nghi <= 3) && (thi >= 5) && (gpaC >= 5) && (online >= 7.5));
	
	printf("Nghi: %f - DiemThi: %f - DiemGPA: %f - DiemOnline: %f - LOGIC = %d",nghi,thi,gpaC,online,ketQuaLogic);
}