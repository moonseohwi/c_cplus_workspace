#include <iostream>
#include "Car.h"
using namespace std;

Car::Car(string model, int year) :
	model(model), year(year) {}

void Car::setModel(string model) {
	this->model = model;
}

void Car::setYear(int year) {
	this->year = year;
}

void Car::carInfo() {
	cout << "¸ðµ¨¸í : " << model << endl;
	cout << "¿¬½Ä : " << year << endl;
}