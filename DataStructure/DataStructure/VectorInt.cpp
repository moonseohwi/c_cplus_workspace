#include <iostream>
#include <vector>  //vector ������� �߰�
using namespace std;

/*
	STL(Standard Template Library) - ����(vector), ��(map)
	- ��ü �˻� �� �� �ݺ���(iterator) ��� 
*/

int main()
{
	//������ ��Ҹ� ������ ���� �ν��Ͻ� ����
	vector<int> vec;

	//��� �߰� ( 80 - 75 - 90)
	/*
	vec.push_back(80);
	vec.push_back(75);
	vec.push_back(90);
	*/

	vec = { 80, 75, 90 };  //���ÿ� �ʱ�ȭ 

	//��� �˻�
	cout << "ù��° ��� : " << vec.front() << endl; //80
	cout << "ù��° ��� : " << vec[0] << endl;		//80
	cout << "������ ��� : " << vec.back() << endl;	//90
	cout << "������ ��� : " << vec.at(2) << endl;	//90
	cout << "-------------------\n";

	//��ü �˻�
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
	cout << "====================\n";

	//�ݺ��� ����
	vector<int>::iterator it = vec.begin();

	//������(*)�� ������ ���
	/*
	cout << *it << endl;		//ù��° ��ġ 80
	cout << *(it + 1) << endl;  //�ѹ�° ��ġ 75
	cout << *(it + 2) << endl;  //����° ��ġ 90
	*/

	//��� ����
	vec[1] = 100;

	//������ ��� ����
	//vec.pop_back();
	
	//Ư�� ��� ����
	for (it = vec.begin(); it != vec.end(); it++) {
		if (*it == 90) {
			vec.erase(it);
			break;
		}
	}

	//for �ݺ��� ��� 
	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << endl;
	}

	cout << "====================\n";

	
	return 0;
}