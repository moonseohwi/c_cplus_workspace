#include <iostream>
#include <ctime>  //시간 관련 함수
#include <thread>  // 쓰레드(프로세스 작업) this_thread::sleep_for()0 
using namespace std;

int main()
{
	//현재 시간 
	time_t now = time(nullptr);  //c언어 - NULL

	cout << now << "초\n";
	cout << now << (24 * 60 * 60) << "일\n";
	cout << now << (365 * 24 * 60 * 60) << "년\n";

	
	/*
	//수행 시간 측정
	// ** start 사용
	time_t start, end;

	start = time(nullptr);  //시작 시간
	
	//0.5초 간격으로 대기 시간
	for (int i = 1; i <= 10; i++) {
		cout << i << endl;
		//<thread> 헤더파일 포함 , 1sec - 1000ms
		this_thread::sleep_for(chrono::milliseconds(500));  //milliseconds(500) 여기에 500이 0.5초 1000이 1초임 숫자를 조정하기
	}

	//end = time(nullptr);
	time(&end);
	cout << "수행시간 : " << (end - start) << "초\n";
	*/


	//수행 시간 측정
	// ** clock 사용
	time_t start, end;
	double elaspedTime;  //소요 시간

	start = clock();  //시작 시간

	//0.5초 간격으로 대기 시간
	for (int i = 1; i <= 10; i++) {
		cout << i << endl;
		//<thread> 헤더파일 포함 , 1sec - 1000ms
		this_thread::sleep_for(chrono::milliseconds(500));  
	}

	end = clock();
	//CLOCKS_PER_SEC - 초 단위 변환 상수
	elaspedTime = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "수행시간 : " << elaspedTime << "초\n";
	

	return 0;
}