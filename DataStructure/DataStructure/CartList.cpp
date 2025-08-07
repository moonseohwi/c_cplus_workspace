#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cout << "*** carts 리스트 출력 ***\n";

	vector<string> List;

	List.push_back("라면");
	List.push_back("생수");
	List.push_back("화장지");
	List.push_back("계란");

	cout << List[0] << " ";
	cout << List[1] << " ";
	cout << List[2] << " ";
	cout << List[3] << " \n";

	cout << "===============================\n";

	cout << "1. '생수'를 '쌀'로 변경\n";
	cout << "2. '화장지' 삭제\n";

	cout << "===============================\n";

	List[1] = "쌀";

	vector<string>::iterator it = List.begin();

	for (it = List.begin(); it != List.end(); it++) {
		if (*it == "화장지") {
			List.erase(it);
			break;
		}
	}

	cout << "*** carts 리스트 출력 ***\n";

	for (it = List.begin(); it != List.end(); it++) {
		cout << *it << " ";
	}

	return 0;
}