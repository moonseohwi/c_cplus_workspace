#include <iostream>
#include <vector>  //vector 헤더파일 추가
using namespace std;

/*
	STL(Standard Template Library) - 벡터(vector), 맵(map)
	- 전체 검색 할 때 반복사(iterator) 사용 
*/

int main()
{
	//정수형 요소를 저장할 벡터 인스턴스 생성
	vector<int> vec;

	//요소 추가 ( 80 - 75 - 90)
	/*
	vec.push_back(80);
	vec.push_back(75);
	vec.push_back(90);
	*/

	vec = { 80, 75, 90 };  //동시에 초기화 

	//요소 검색
	cout << "첫번째 요소 : " << vec.front() << endl; //80
	cout << "첫번째 요소 : " << vec[0] << endl;		//80
	cout << "마지막 요소 : " << vec.back() << endl;	//90
	cout << "마지막 요소 : " << vec.at(2) << endl;	//90
	cout << "-------------------\n";

	//전체 검색
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
	cout << "====================\n";

	//반복자 설정
	vector<int>::iterator it = vec.begin();

	//포인터(*)의 역참조 출력
	/*
	cout << *it << endl;		//첫번째 위치 80
	cout << *(it + 1) << endl;  //둘번째 위치 75
	cout << *(it + 2) << endl;  //세번째 위치 90
	*/

	//요소 수정
	vec[1] = 100;

	//마지막 요소 삭제
	//vec.pop_back();
	
	//특정 요소 삭제
	for (it = vec.begin(); it != vec.end(); it++) {
		if (*it == 90) {
			vec.erase(it);
			break;
		}
	}

	//for 반복문 사용 
	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << endl;
	}

	cout << "====================\n";

	
	return 0;
}