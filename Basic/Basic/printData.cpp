#include <iostream>  //c++ ������� ���� �������
/*
	std - ���� ���α׷�(�Ҽ�)
	:: - ���� ������
	<< - ����Ʈ ������ (������ �����͸� ���� ��Ʈ�� ��ü�� �ִ´�.)
	endl - �ٹٲ� (=\n ������)
*/
int main()
{
	//���� ���
	std::cout << "Hello ~ world!" << std::endl;
	std::cout << "�ȳ� ~ �����!" << std::endl;

	//���� ����
	std::cout << 4 + 5 << std::endl;  //9
	std::cout << 4 - 5 << std::endl;  //-1
	std::cout << 4 * 5 << std::endl;  //20
	std::cout << 4.0 / 5.0 << std::endl;  //0.8   **<4 / 5�� �ϸ� ����� 0�� ����>**
		
	return 0;
}