#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
	string name;

public:
	Person(string name);

	void greet();       //인사
	void displayInfo(); //사람의 정보 출력

};

#endif 
