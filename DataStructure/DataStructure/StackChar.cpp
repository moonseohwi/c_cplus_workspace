#include <iostream>
#include <stack>
using namespace std;

int main()
{
	//���ڸ� ������ ���� �����̳� ����
	stack<char> stk;

	//��� �߰�
	stk.push('a');
	stk.push('b');
	stk.push('c');

	//��� ����( c - b - a) - ������ ���� ó��
	while (!stk.empty()) {         //������ ������� ������
		cout << stk.top() << " ";  //�� �� ��� ���
		stk.pop();                 //�� �� ��� ����
	}

	cout << "\n==================\n";

	//���ڿ� ������
	string str;
	cout << "���ڿ� �Է� : ";
	cin >> str;

	stack<char> stk2;  //���ڸ� ������ ���� ����

	//���� �߰�
	for (char ch : str)  //char -> auto�� �ٲ㵵 ������ �� �ִ�.
		stk2.push(ch);

	cout << "������ ���ڿ� : ";
	while (!stk2.empty()) {
		cout << stk2.top();
		stk2.pop();
	}

	return 0;
}