#include <iostream>
#include <ctime>  //�ð� ���� �Լ�
#include <thread>  // ������(���μ��� �۾�) this_thread::sleep_for()0 
using namespace std;

int main()
{
	//���� �ð� 
	time_t now = time(nullptr);  //c��� - NULL

	cout << now << "��\n";
	cout << now << (24 * 60 * 60) << "��\n";
	cout << now << (365 * 24 * 60 * 60) << "��\n";

	
	/*
	//���� �ð� ����
	// ** start ���
	time_t start, end;

	start = time(nullptr);  //���� �ð�
	
	//0.5�� �������� ��� �ð�
	for (int i = 1; i <= 10; i++) {
		cout << i << endl;
		//<thread> ������� ���� , 1sec - 1000ms
		this_thread::sleep_for(chrono::milliseconds(500));  //milliseconds(500) ���⿡ 500�� 0.5�� 1000�� 1���� ���ڸ� �����ϱ�
	}

	//end = time(nullptr);
	time(&end);
	cout << "����ð� : " << (end - start) << "��\n";
	*/


	//���� �ð� ����
	// ** clock ���
	time_t start, end;
	double elaspedTime;  //�ҿ� �ð�

	start = clock();  //���� �ð�

	//0.5�� �������� ��� �ð�
	for (int i = 1; i <= 10; i++) {
		cout << i << endl;
		//<thread> ������� ���� , 1sec - 1000ms
		this_thread::sleep_for(chrono::milliseconds(500));  
	}

	end = clock();
	//CLOCKS_PER_SEC - �� ���� ��ȯ ���
	elaspedTime = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "����ð� : " << elaspedTime << "��\n";
	

	return 0;
}