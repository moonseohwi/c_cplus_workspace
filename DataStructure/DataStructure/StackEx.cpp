#include <iostream>
#include <stack>
using namespace std;

/*
	stack - �迭 ������ �Ǿ� �ְ�, ���� �� ��Ұ� ���߿� ������
			LIFO(Last In First Out) - ���߿� �� ��Ҹ� ���� ������.
*/

int main()
{
	//������ ������ ���� ���� ����
	stack<int> stk;

	//��� �߰� ( 10 - 20 - 30 )
	stk.push(10);
	stk.push(20);
	stk.push(30);

	cout << "������ ũ�� : " << stk.size() << endl;  //3

	//Ư�� ��� �˻�(����) - �Ұ�
	cout << stk[1] << endl;

	//stack�� �� �� ��� 
	cout << stk.top() << endl;  //30   //10 20 30 ������ �߰� �Ǿ��� ������ �� ���� �ִ°� 30�̴�.
	stk.pop();  //��� ���� 

	cout << stk.top() << endl;  //20
	stk.pop();

	cout << stk.top() << endl;  //10
	stk.pop();

	// ������ ��� �ִ� ���¿��� pop() ȣ�� ����
	if (!stk.empty()) {
		stk.pop();
	}
	else {
		cout << "������ ��� �־ ������ �� �����ϴ�.\n";
	}

	return 0;
} 