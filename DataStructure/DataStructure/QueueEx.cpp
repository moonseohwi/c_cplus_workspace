#include <iostream>
#include <queue>
using namespace std;
/*
	ť(Queue)
	- ���Լ���(F1FO) - �迭���� ���� �� �ڷḦ ���� ����
*/

int main()
{
	//���� �� �����
	queue<string> q;

	//�� ����� (A - B - C)
	q.push("��A");
	q.push("��B");
	q.push("��C");

	while (!q.empty()) {
		cout << q.front() << "�� ���� ó����..." << endl;
		q.pop();
	}

	cout << "��� ���� ������ �Ϸ�Ǿ����ϴ�.\n";

	return 0;
}