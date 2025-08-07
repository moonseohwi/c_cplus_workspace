#include <iostream>
#include <stack>
using namespace std;

/*
	stack - 배열 구조로 되어 있고, 먼저 들어간 요소가 나중에 꺼내짐
			LIFO(Last In First Out) - 나중에 들어간 요소를 먼저 꺼낸다.
*/

int main()
{
	//정수를 저장할 스택 구조 생성
	stack<int> stk;

	//요소 추가 ( 10 - 20 - 30 )
	stk.push(10);
	stk.push(20);
	stk.push(30);

	cout << "스택의 크기 : " << stk.size() << endl;  //3

	//특정 요소 검색(접근) - 불가
	cout << stk[1] << endl;

	//stack의 맨 위 요소 
	cout << stk.top() << endl;  //30   //10 20 30 순으로 추가 되었기 때문에 맨 위에 있는건 30이다.
	stk.pop();  //요소 제거 

	cout << stk.top() << endl;  //20
	stk.pop();

	cout << stk.top() << endl;  //10
	stk.pop();

	// 스택이 비어 있는 상태에서 pop() 호출 방지
	if (!stk.empty()) {
		stk.pop();
	}
	else {
		cout << "스택이 비어 있어서 삭제할 수 없습니다.\n";
	}

	return 0;
} 