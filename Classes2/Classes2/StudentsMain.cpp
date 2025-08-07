#include "Students.h"

int main()
{
	//인스턴스 생성
	Students park(1001, "박상희");

	//과목 설정
	park.addSubject("국어", 85);
	park.addSubject("수학", 52);
	park.addSubject("음악", 82);

	//정보 출력 
	park.showInfo();

	return 0;
}