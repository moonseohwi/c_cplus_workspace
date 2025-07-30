//CircleMain.cpp 보조

//조건부 컴파일러 
#ifndef POINT_H
#define POINT_H //매크로 이름 정의

//선언부
class Point {
private:
	int x;  //x좌표(점)
	int y;  //y(좌표(점)

public:
	//생성자
	Point(int x, int y);

	int getX();  //get은 접근자 함수
	int getY();
};

#endif // !1
