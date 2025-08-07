#include <iostream>
#include <map>
#include <string>
using namespace std;
/*
	- ��ǻ�� ��� ���� ���α׷�
	  �� �ڷᱸ���� �ܾ�� ���Ǹ� �����Ѵ�.
*/
int main()
{
	map<string, string> dict;

	//�ܾ�� ���� ����
	dict.insert({ "������", "��ǻ�Ͱ� ����ϴ� 0�� 1�� �̷���� ��" });
	dict.insert({ "��Ʈ", "���� ������� �������� ���� ���� ������, "
		"0�� �Ǵ� 1�� ���� ������. "});
	dict.insert({ "������", "���α׷��� �� �ۼ��� �ҽ� �ڵ�� ��ǻ�Ͱ� "
		 "\n�����ϰ� ������ �� �ִ� ����� ��ȯ�ϴ� ������ ���Ѵ�." });

	/*
	//�ܾ� �˻�
	cout << dict["������"] << endl;

	//find() �˻� - �ܾ�� �� ��� ���
	auto it = dict.find("������");  //it�� ������
	cout << it->first << " : " << it->second << endl;
	*/

	//���� ���α׷�
	string eng;  //�˻��� �ܾ�
	while (true) {
		cout << "�˻��� �ܾ� �Է�(exit - ����)>> ";
		getline(cin, eng);  //���� ���� ���

		if (eng == "exit") {
			break;
		}
		else if (dict.find(eng) == dict.end()) {
			cout << "ã�� �ܾ �����ϴ�.\n";
		}
		else {
			cout << dict[eng] << endl;
		}
	 }
	cout << "�˻��� �����մϴ�\n";

	return 0;
}