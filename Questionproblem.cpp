
#include<iostream>
#include<string>
using namespace std;
class Cars
{
private:
	int yearModel;
	string make;
	int speed;

public:
	Cars(int y, string m)//parameterized constructor
	{
		cout << m << " " << y << endl;
		cout << "Constructor called" << endl;
		yearModel = y;
		make = m;
		speed = 0;
	}
	int getYearModel()
	{
		return yearModel;
	}
	string getMake()
	{
		return make;
	}
	int getSpeed()
	{
		return speed;
	}
	void accelerate()
	{
		speed += 5;
	}
	void brake()
	{
		speed -= 5;
	}
	~Cars()//destructor
	{
		cout << "Destructor called" << endl;
	}
};
int main()
{
	Cars car(2022, "HONDA");
	cout << "**********************" << endl;
	for (int i = 0; i < 5; i++)
	{
		car.accelerate();
		cout << "Speed after accelerating: " << car.getSpeed() << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		car.brake();
		cout << "Speed after braking: " << car.getSpeed() << endl;
	}
	cout << "**********************" << endl;
	return 0;
}

