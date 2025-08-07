#include <iostream>
#include <vector>
using namespace std;

/*
	vetor �ڷᱸ�� - ���ο� �迭�� ������ �ְ� 
	��Ҹ� ����, �˻�, ���� �ϴµ� ȿ�����̴�.
	<vetor> ��������� include �ؾ���
	- vector<�ڷ���> ��ü �̸�
*/

int main()
{
	//���� ���� ������ ������ ���� ����
	vector<int> vec;

	//��� �߰� - push_back(���)
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	//������ ũ��
	cout << vec.size() << endl;  //3
	cout << "============================\n";

	//����� �˻� - 1�� ��ġ, at(�ε���)
	cout << vec[1] << endl;  //20
	cout << vec.at(1) << endl;  //20
	cout << "============================\n";

	//��� ���� - 2�� ��ġ�� ���� 50���� ����
	vec.at(2) = 50;

	//��ü ���
	for (int i = 0; i < vec.size(); i++) {
		cout << vec.at(i) << endl;
	}

	return 0;
}