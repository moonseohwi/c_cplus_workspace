#include <iostream>
using namespace std;

/*
Ŭ����(1��)
 - �繰(��ü)�� �߻�ȭ�� �ڷ���
 - ĸ��ȭ�� ����( private, public)
   <ĸ��ȭ�� �Ӽ��� ������ �� ����, ������� ���� ���� (set(), get() �Լ� ���)>
 - Ŭ������ ������Ͽ� �����Ѵ�.
 - �����δ� cpp ���Ͽ� �ۼ��Ѵ�.
 - Ŭ������ ������� : �������(�Ӽ�), ������, ����Լ�(���)

Ŭ������ ����(2�� �̻�)
 1. ����(1���� �����ϰ�, 1���� ���� ����)
 2. ����(���� �ɵ����� ����)
*/


//ȸ�� ����(�α���, �α׾ƿ�) Ŭ���� 
class MemberService {
public:
	bool login(string id, string pwd);  //�α���(���̵�� ��й�ȣ ��ġ ����) �Լ�
	void logout();  //�α׾ƿ� �Լ�
};

bool MemberService::login(string id, string pwd) {
	if (id.compare("seohwi") == 0 && pwd.compare("k1234") == 0)
		return true;
	return false;
}

void MemberService::logout() {
	cout << "�α׾ƿ� �Ǿ����ϴ�.\n";
}

int main()
{
	//�ν��Ͻ�(��ü) ���� (sevice��� �ν��Ͻ� ����)
	MemberService service;

	string userId = "seohwi";
	string passward = "k1234";

	//�α���
	bool result = service.login(userId, passward);
	if (result) {  //result = true
		cout << "�α��� �Ǿ����ϴ�.\n";
		cout << userId << "�� ȯ���մϴ�.\n";
	}
	else {  //result = false
		cout << "���̵� ��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n";
	}
	cout << "------------------------------------\n";

	//�α׾ƿ�
	service.logout();

	return 0;
}