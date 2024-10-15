#include<iostream>
using namespace std;
class Time
{
	int hour;
	int minute;
	int second;

public:
	Time()
	{
		hour = 1;
		minute = 1;
		second = 1;
	}
	Time(int h, int m, int s) :Time()
	{
		setTime(h, m, s);
	}
	void setHour(int h)
	{
		if (h >= 0 && h <= 23)
		{
			hour = h;
		}
	}
	void setMinute(int m)
	{
		if (m >= 0 && m <= 59)
		{
			minute = m;
		}
	}
	void setSecond(int s)
	{
		if (s >= 0 && s <= 59)
		{
			second = s;
		}
	}
	void setTime(int h, int m, int s)
	{
		setHour(h);
		setMinute(m);
		setSecond(s);
	}
	int getHour()const
	{
		return hour;
	}
	int getMinute()const
	{
		return minute;
	}
	int getSecond()const
	{
		return second;
	}
	void printTwentyFourHourFormat()const
	{
		cout << hour << ":" << minute << ":" << second;
	}
	void printTwelveHourFormat()const
	{
		if (hour >= 0 && hour <= 12)
		{
			if (hour == 0)
			{
				cout << hour + 12 << ":" << minute << ":" << second << " AM";
			}
			if (hour == 12)
			{
				cout << hour << ":" << minute << ":" << second << " PM";
			}
			else if (hour != 0)
			{
				cout << hour << ":" << minute << ":" << second << " AM";
			}
		}
		if (hour >= 13 && hour <= 23)
		{
			cout << hour - 12 << ":" << minute << ":" << second << " PM";
		}
	}
	void incHour(int inc = 1)
	{
		int increment = hour + inc;
		if (increment > 23)
		{
			increment = increment % 24;
		}
		setHour(increment);
	}
	void incMin(int inc = 1)
	{
		int increment = minute + inc;
		if (increment > 59)
		{
			incHour(increment / 60);
		}
		setMinute(increment % 60);
	}
	void incSec(int inc = 1)
	{
		int increment = second + inc;
		if (increment > 59)
		{
			incMin(increment / 60);
		}
		setSecond(increment % 60);
	}
};
