#include <iostream>
#include <queue>
using namespace std;
/*
	큐(Queue) 
	- 선입선출(F1FO) - 배열에서 먼저 들어간 자료를 먼저 꺼냄
*/

int main()
{
	queue<int> que;  //정수를 저장할 큐 생성

	//요소 추가(10 - 20 - 30)
	que.push(10);
	que.push(20);
	que.push(30);

	//검색
	cout << "첫번째 요소 : " << que.front() << endl;  //10
	cout << "마지막 요소 : " << que.back() << endl;   //30
	//cout << "0번 요소 : " << que[0] << endl;        //접근 불가(오류)

	//요소 제거 
	/*
	que.pop();  //10 삭제
	cout << "다음 요소 : " << que.front() << endl;  //20
	*/

	//전체 요소 삭제 및 출력
	while (!que.empty()) {
		cout << que.front() << " ";
		que.pop();  //삭제 (10 - 20 - 30 순서대로 삭제)
	}

	return 0;
}