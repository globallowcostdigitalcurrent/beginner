#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class Car
{
	private:
		int speed;
		char mark[20];
		float price;
	public:
		void setSpeed(int);
		int getSpeed();
		void setMark(char[]);
		char getMark();
		void setPrice(float);
		float getPrice();
		Car(int speedIn=0, char markIn[]="", float priceIn=0);
		void show();
};

Car::Car(int speedIn, char markIn[], float priceIn)
{
	speed = speedIn;
	strcpy(mark,markIn);
	price = priceIn;
}

void Car::setSpeed(int speedIn)
{
	speed = speedIn;
}

int Car::getSpeed()
{
	return speed;
}

void Car::setMark(char markIn[])
{
	strcpy(mark, markIn);
}

char Car::getMark()
{
	return *mark;
}

void Car::setPrice(float priceIn)
{
	price = priceIn;
}

float Car::getPrice()
{
	return price;
}

void Car::show()
{
	cout<<"This is a "<<mark<<" having a speed of "<<speed<<" km/h and its price is $"<<price<<endl;
}

class Bus: public Car{
	private:
		int label;
	public:
		Bus(int sIn=0, char mIn[]="", float pIn=0, int lIn=0);
		void setLabel(int);
		int getLabel();
		void show();
};

Bus::Bus(int sIn, char mIn[], float pIn, int lIn):Car(sIn, mIn, pIn)
{
	label = lIn;
}

void Bus::setLabel(int lIn)
{
	label = lIn;
}

int Bus::getLabel()
{
	return label;
}

void Bus::show()
{
	cout<<"This is a bus of type "<<getMark()<<", on the line "<<label<<" having a speed of "<<getSpeed()<<" km/h and its price is $"<<getPrice()<<endl;
}

int main()
{
	Bus myBus(80, "mercedes", 5000, 27);
	Car myCar(100, "BMW", 2500);
	myCar.show();
	myCar=myBus;
	myCar.show();
	myBus.Car::show();
	return 0;
}