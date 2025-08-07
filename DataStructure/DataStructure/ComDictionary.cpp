#include <iostream>
#include <map>
#include <string>
using namespace std;
/*
	- 컴퓨터 용어 사전 프로그램
	  맵 자료구조에 단어와 정의를 저장한다.
*/
int main()
{
	map<string, string> dict;

	//단어와 정의 저장
	dict.insert({ "이진수", "컴퓨터가 사용하는 0과 1로 이루어진 수" });
	dict.insert({ "비트", "정보 기술에서 데이터의 가장 작은 단위로, "
		"0과 또는 1의 값을 가진다. "});
	dict.insert({ "컴파일", "프로그래밍 언어를 작성된 소스 코드로 컴퓨터가 "
		 "\n이해하고 실행할 수 있는 기계어로 변환하는 과정을 말한다." });

	/*
	//단어 검색
	cout << dict["컴파일"] << endl;

	//find() 검색 - 단어와 뜻 모두 출력
	auto it = dict.find("컴파일");  //it는 포인터
	cout << it->first << " : " << it->second << endl;
	*/

	//사전 프로그램
	string eng;  //검색한 단어
	while (true) {
		cout << "검색할 단어 입력(exit - 종료)>> ";
		getline(cin, eng);  //공백 문자 허용

		if (eng == "exit") {
			break;
		}
		else if (dict.find(eng) == dict.end()) {
			cout << "찾는 단어가 없습니다.\n";
		}
		else {
			cout << dict[eng] << endl;
		}
	 }
	cout << "검색을 종료합니다\n";

	return 0;
}