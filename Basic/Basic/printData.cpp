#include <iostream>  //c++ 입출력을 위한 헤더파일
/*
	std - 상위 프로그램(소속)
	:: - 범위 연산자
	<< - 시프트 연산자 (오른쪽 데이터를 왼쪽 스트림 객체에 넣는다.)
	endl - 줄바꿈 (=\n 역할임)
*/
int main()
{
	//문자 출력
	std::cout << "Hello ~ world!" << std::endl;
	std::cout << "안녕 ~ 세계야!" << std::endl;

	//숫자 연산
	std::cout << 4 + 5 << std::endl;  //9
	std::cout << 4 - 5 << std::endl;  //-1
	std::cout << 4 * 5 << std::endl;  //20
	std::cout << 4.0 / 5.0 << std::endl;  //0.8   **<4 / 5로 하면 결과가 0이 나옴>**
		
	return 0;
}