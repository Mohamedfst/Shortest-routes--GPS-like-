//Lab 4A: Time.h
//Programmer: Mohamed Keita
//Class: Comsc 200
//Editor used: Xcode

#ifndef TIME_H
#define TIME_H
//creates the class
class Time
{
	//creates constructor and prototypes for methods
public:
	Time(int = 0, int = 0, int = 0);

	Time &setTime(int, int, int);
	Time &setHour(int);
	Time &setMinute(int);
	Time &setSecond(int);

	int getHour() const;
	int getMinute() const;
	int getSecond() const;

	void printUniversal() const;
	void printStandard() const;
	//creates variables
private:
	int hour;
	int minute;
	int second;
};

#endif