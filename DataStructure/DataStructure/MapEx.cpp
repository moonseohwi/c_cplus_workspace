#include <iostream>
#include <map>
using namespace std;

/*
	map - 키와 값의 쌍을 원소로 저장하고 
		  키를 이용해서 값을 검색함
*/

int main()
{
	//문자와 숫자를 저장할 map 자료구조 생성
	map<string, int> dogs;

	//요소 추가
	dogs.insert({ "말티즈", 3 });
	dogs.insert({ "진돗개", 2 });
	dogs.insert({ "불독", 4  });

	//요소의 개수
	cout << dogs.size() << endl;  //3
	
	//요소 검색 - key([])로 검색
	cout << dogs["말티즈"] << "세\n";     //3세
	cout << dogs.at("말티즈") << "세\n";  //3세
	cout << "-------------\n";

	//전체 요소 검색 - 반복자 설정
	map<string, int>::iterator it;  //포인터
	for (it = dogs.begin(); it != dogs.end(); it++) {
		cout << it->first << " , " << it->second << endl;
	}

	cout << "-------------\n";

	//요소 수정
	dogs["불독"] = 1;

	//요소 삭제
	dogs.erase("말티즈");

	//범위 기반 for문 - auto 자료형 사용
	for (auto dog : dogs)
		cout << dog.first << " , " << dog.second << endl;

	return 0;
}