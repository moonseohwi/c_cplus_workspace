#include <iostream>
#include <queue>
using namespace std;
/*
	큐(Queue)
	- 선입선출(F1FO) - 배열에서 먼저 들어간 자료를 먼저 꺼냄
*/

int main()
{
	//은행 고객 대기줄
	queue<string> q;

	//고객 대기줄 (A - B - C)
	q.push("고객A");
	q.push("고객B");
	q.push("고객C");

	while (!q.empty()) {
		cout << q.front() << "님 업무 처리중..." << endl;
		q.pop();
	}

	cout << "모든 고객의 업무가 완료되었습니다.\n";

	return 0;
}