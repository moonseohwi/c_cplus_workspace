#include <iostream>
#include <stack>
using namespace std;

int main()
{
	//문자를 저장할 스택 컨테이너 생성
	stack<char> stk;

	//요소 추가
	stk.push('a');
	stk.push('b');
	stk.push('c');

	//요소 삭제( c - b - a) - 안전한 삭제 처리
	while (!stk.empty()) {         //스택이 비어있지 않으면
		cout << stk.top() << " ";  //맨 위 요소 출력
		stk.pop();                 //맨 위 요소 삭제
	}

	cout << "\n==================\n";

	//문자열 뒤집기
	string str;
	cout << "문자열 입력 : ";
	cin >> str;

	stack<char> stk2;  //문자를 저장할 스택 생성

	//문자 추가
	for (char ch : str)  //char -> auto로 바꿔도 실행할 수 있다.
		stk2.push(ch);

	cout << "뒤집은 문자열 : ";
	while (!stk2.empty()) {
		cout << stk2.top();
		stk2.pop();
	}

	return 0;
}