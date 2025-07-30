#ifndef BUS_H
#define BUS_H

class Bus {
private:
	int busNumber;  //���� ��ȣ
	int passenger;  //�°� ��
	int money;      //����
	const int FEE;  //���� ���(���)

public:
	//�⺻ �Ű����� ���
	Bus(int busNumber, int FEE = 1500);

	void take();         //�°� �¿��
	int getFEE();        //��� ��������
	void displayInfo();  //���� ����

};
#endif // !1
