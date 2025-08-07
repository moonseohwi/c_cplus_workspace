#include <iostream>
#include <map>
using namespace std;

/*
	map - Ű�� ���� ���� ���ҷ� �����ϰ� 
		  Ű�� �̿��ؼ� ���� �˻���
*/

int main()
{
	//���ڿ� ���ڸ� ������ map �ڷᱸ�� ����
	map<string, int> dogs;

	//��� �߰�
	dogs.insert({ "��Ƽ��", 3 });
	dogs.insert({ "������", 2 });
	dogs.insert({ "�ҵ�", 4  });

	//����� ����
	cout << dogs.size() << endl;  //3
	
	//��� �˻� - key([])�� �˻�
	cout << dogs["��Ƽ��"] << "��\n";     //3��
	cout << dogs.at("��Ƽ��") << "��\n";  //3��
	cout << "-------------\n";

	//��ü ��� �˻� - �ݺ��� ����
	map<string, int>::iterator it;  //������
	for (it = dogs.begin(); it != dogs.end(); it++) {
		cout << it->first << " , " << it->second << endl;
	}

	cout << "-------------\n";

	//��� ����
	dogs["�ҵ�"] = 1;

	//��� ����
	dogs.erase("��Ƽ��");

	//���� ��� for�� - auto �ڷ��� ���
	for (auto dog : dogs)
		cout << dog.first << " , " << dog.second << endl;

	return 0;
}