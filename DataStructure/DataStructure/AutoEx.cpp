#include <iostream>
#include <vector>
using namespace std;
/*
	auto �ڷ��� - ���� ����ÿ� ������ Ÿ���� �����ϵ��� �����Ѵ�.
	              auto�� ������ Ÿ���� �ڵ� �߷��� �� ����
*/

int main()
{
	auto ch = 'K';     //���� 1��(char)
	auto num = 12;     //������(int)
	auto unit = 2.54;  //�Ǽ���(double)
	auto* ip = &num;   //������ ������

	cout << ch << " , " << num << " , " << unit
		<< " , " << *ip << endl;

	vector<int> vec = { 1,2,3 };

	for (auto v : vec)
		cout << v << " ";  //���η� ����
	  //cout << v << endl;   ���η� ����

	return 0;
}