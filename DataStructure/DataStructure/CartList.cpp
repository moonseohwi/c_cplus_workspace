#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cout << "*** carts ����Ʈ ��� ***\n";

	vector<string> List;

	List.push_back("���");
	List.push_back("����");
	List.push_back("ȭ����");
	List.push_back("���");

	cout << List[0] << " ";
	cout << List[1] << " ";
	cout << List[2] << " ";
	cout << List[3] << " \n";

	cout << "===============================\n";

	cout << "1. '����'�� '��'�� ����\n";
	cout << "2. 'ȭ����' ����\n";

	cout << "===============================\n";

	List[1] = "��";

	vector<string>::iterator it = List.begin();

	for (it = List.begin(); it != List.end(); it++) {
		if (*it == "ȭ����") {
			List.erase(it);
			break;
		}
	}

	cout << "*** carts ����Ʈ ��� ***\n";

	for (it = List.begin(); it != List.end(); it++) {
		cout << *it << " ";
	}

	return 0;
}