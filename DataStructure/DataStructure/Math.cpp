#include <iostream>
using namespace std;
/*
	template(���ø�)�� �Լ��� Ŭ���� �ڵ带 ������ 
	������ �� �ֵ��� �Ϲ�ȭ(generic) ��Ű�� ����(Ʋ)�̴�. 
*/

class Math {
public:
	//���밪�� ���ϴ� �Լ�
	//���ø��� T �ڷ��� ������ �� ���
	template <typename T>
	static T abs(T x) {  //���� �Լ�
		return (x < 0) ? -x : x;
	}

	//�� ���� ū ���� ���ϴ� �Լ�
	template <typename T>
	static T max(T x, T y) {
		return (x > y) ? x : y;
	}
	
};

int main()
{
	cout << Math::abs(-10) << endl;
	cout << Math::abs(-3.5) << endl;  //�Ǽ�(double type)�� ������

	cout << Math::max(10, 20) << endl;  //20
	cout << Math::max(5.4, 2.3) << endl;  //5.4


	return 0;
}