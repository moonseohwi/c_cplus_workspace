#include <iostream>
using namespace std;

int main()
{
	int num;  //�迭�� ����
	int* score; //������ ������ ������(���� �Ҵ�)
	int sum = 0, max;  //���� , �ְ����� 
	float avg;  //���
	

	cout << "*** ������ ��� ��� ***\n";
	cout << "�Է��� ������ ���� : ";
	cin >> num;

	score = new int[num];  //�迭�� ���� �Ҵ�
	if (score == nullptr) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.\n";
		return -1;
	}

	//���� �Է�
	for (int i = 0; i < num; i++) {
		cout << i + 1 << "��° ���� : ";
		cin >> score[i];
	}

	//���� ���
	max = score[0];
	for (int i = 0; i < num; i++) {
		sum += score[i];
		if (max < score[i]) {
			max = score[i];
		}
	}
	//printf("���� : %d\n", sum);
	cout << "���� : " << sum << endl;
	cout << "�ְ����� : " << max << endl;

	avg = (float)sum / num;  //��� = ���� / ����
	//printf("��� : %.1f", avg);
	cout << fixed;
	cout.precision(1);; //�Ҽ� ù°�ڸ����� ����, ���ڸ� �ٲ��ָ� �Ҽ� 2,3,4,�ڸ����� �� �� ����
	cout << "��� : " << avg << endl;

	delete[] score;

	return 0;
}