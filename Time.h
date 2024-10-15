class Time
{
	int hour;
	int minute;
	int second;

public:
	Time();
	Time(int h, int m, int s) :Time();
	
	void setHour(int h);
	
	void setMinute(int m);
	
	void setSecond(int s);
	
	void setTime(int h, int m, int s);
	
	int getHour()const;
	
	int getMinute()const;

	int getSecond()const;

		void printTwentyFourHourFormat()const;

		void printTwelveHourFormat()const;

		void incHour(int inc = 1);

		void incMin(int inc = 1);

		void incSec(int inc = 1);
	
};

