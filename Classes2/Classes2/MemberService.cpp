#include <iostream>
using namespace std;

/*
클래스(1개)
 - 사물(객체)을 추상화한 자료형
 - 캡슐화를 구현( private, public)
   <캡슐화는 속성에 접근할 수 없고, 기능으로 접근 가능 (set(), get() 함수 사용)>
 - 클래스는 헤더파일에 정의한다.
 - 구현부는 cpp 파일에 작성한다.
 - 클래스의 구성요소 : 멤버변수(속성), 생성자, 멤버함수(기능)

클래스의 관계(2개 이상)
 1. 참조(1개는 참조하고, 1개는 참조 받음)
 2. 협력(서로 능동적인 관계)
*/


//회원 서비스(로그인, 로그아웃) 클래스 
class MemberService {
public:
	bool login(string id, string pwd);  //로그인(아이디와 비밀번호 일치 여부) 함수
	void logout();  //로그아웃 함수
};

bool MemberService::login(string id, string pwd) {
	if (id.compare("seohwi") == 0 && pwd.compare("k1234") == 0)
		return true;
	return false;
}

void MemberService::logout() {
	cout << "로그아웃 되었습니다.\n";
}

int main()
{
	//인스턴스(객체) 생성 (sevice라는 인스턴스 생성)
	MemberService service;

	string userId = "seohwi";
	string passward = "k1234";

	//로그인
	bool result = service.login(userId, passward);
	if (result) {  //result = true
		cout << "로그인 되었습니다.\n";
		cout << userId << "님 환영합니다.\n";
	}
	else {  //result = false
		cout << "아이디나 비밀번호가 일치하지 않습니다.\n";
	}
	cout << "------------------------------------\n";

	//로그아웃
	service.logout();

	return 0;
}