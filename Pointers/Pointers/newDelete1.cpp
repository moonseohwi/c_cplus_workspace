#include <iostream>
using namespace std;


int main()
{
	//������ ������ (���� ����)
	int n = 3;
	int* p;

	p = &n;

	cout << n << endl;  //3
	cout << *p << endl;  //3

	*p += 10;  //*p = *p + 10
	cout << *p << endl;  //13
	cout << n << endl;  //13

	//������ ������ (���� ����)
	int* ptr;
	ptr = new int;  //�޸� ����

	if (ptr == nullptr) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.\n";
		return 1;  //or -1
	}

	*ptr = 5;
	cout << *ptr << endl;  //5

	*ptr += 5;
	cout << *ptr << endl;  //10

	//������ ������ (�迭 ����)
	int* pa;
	pa = new int[10];

	//�� ���� 
	pa[0] = 1;
	pa[1] = 2;
	pa[2] = 3;

	//�� ��� 
	cout << pa[0] << " " << pa[1] << " " << pa[2] << endl;  //1 2 3
	//*(pa + 1) -> 1�� �ε���(��ȣ ����!!)
	cout << *pa << " " << *(pa + 1) << " " << *(pa + 2) << endl;  //1 2 3


	//1 ~ 10���� ����
	for (int i = 0; i < 10; i++) {
		//pa[i] = i + 1;
		*(pa + i) = i + 1;
	}

	//���
	for (int i = 0; i < 10; i++) {
		//cout << pa[i] << " ";
		cout << *(pa + i) << " ";
	}

	delete ptr;   //�޸� ����(����)
	delete[] pa;  //�迭�� ��� ����

	return 0;
}