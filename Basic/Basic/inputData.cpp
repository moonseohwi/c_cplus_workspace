#include <iostream>
#include <string>  //getline() 사용
using namespace std;
/*
	cin >> 변수
	cin 스트림으로 읽은 데이터를 저장할 변수 지정
*/
int main()
{
	int number; //학생의 학번
	string address;  //주소를 저장할 문자열 변수 선언
	
	cout << "학번 입력 : ";
	cin >> number;

	cout << "주소 입력 : ";
	//cin >> address;
	cin.ignore();   //이전에 입력된 개행문자('\n') 남겨 놓음, getline()이 가져오는 걸 막음 . 개행문자 이전까지 제거함0
	//c언어 - while(getchar() != '\n')
	getline(cin, address);  //getline(stream, str)문자

	cout << "학번 : " << number << endl;
	cout << "주소 : " << address << endl;

	return 0;
}