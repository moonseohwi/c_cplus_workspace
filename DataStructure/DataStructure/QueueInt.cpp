#include <iostream>
#include <queue>
using namespace std;
/*
	ť(Queue) 
	- ���Լ���(F1FO) - �迭���� ���� �� �ڷḦ ���� ����
*/

int main()
{
	queue<int> que;  //������ ������ ť ����

	//��� �߰�(10 - 20 - 30)
	que.push(10);
	que.push(20);
	que.push(30);

	//�˻�
	cout << "ù��° ��� : " << que.front() << endl;  //10
	cout << "������ ��� : " << que.back() << endl;   //30
	//cout << "0�� ��� : " << que[0] << endl;        //���� �Ұ�(����)

	//��� ���� 
	/*
	que.pop();  //10 ����
	cout << "���� ��� : " << que.front() << endl;  //20
	*/

	//��ü ��� ���� �� ���
	while (!que.empty()) {
		cout << que.front() << " ";
		que.pop();  //���� (10 - 20 - 30 ������� ����)
	}

	return 0;
}