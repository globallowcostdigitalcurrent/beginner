#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

class Car
{
	private:
		int speed;
		char mark[20];
		float price;
	public:
		void init(int, char[], float);
		friend void moreExpensive(Car, Car);
};

void Car::init(int ispeed, char imark[], float iprice)
{
	speed = ispeed;
	strcpy(mark, imark);
	price = iprice;
	return;
}

void moreExpensive(Car car1, Car car2)
{
	if(car1.price > car2.price)
		cout<<car1.mark<<" dat hon\n";
	else
		if(car1.price < car2.price)
			cout<<car2.mark<<" dat hon\n";
		else
			cout<<"Ca 2 xe "<<car1.mark<<" va "<<car2.mark<<" deu dat\n";
	return;
}

int main()
{
	Car car1, car2;
	car1.init(100, "Ford", 3000);
	car2.init(150, "Mercedes", 3500);
	moreExpensive(car1, car2);
	getch();
}