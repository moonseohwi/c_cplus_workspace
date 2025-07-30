#include "Student.h"

int main()
{
	//학생 인스턴스 생서
	Student lee(1001, "이정우");
	Student shin(1002, "신유진");

	//과목 설정
	lee.setKoreanSubject("국어", 85);
	lee.setMathSubject("수학", 90);

	shin.setKoreanSubject("국어", 20);
	shin.setMathSubject("수학", 29);

	//학생의 정보 출력
	lee.showInfo();
	shin.showInfo();

	return 0;
}