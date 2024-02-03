#include "time_utils.h"
Time getPreviousMinute(Time time)
{
	if (time.minutes > 0)
	{
		time.minutes--;
	}
	else
	{
		time.minutes = 59;
		if (time.hours > 0)
		{
			time.hours--;
		}
		else
		{
			time.hours = 23;
		}
	}
	return time;
}
Time getPreviousMinute(int hour, int minutes, int seconds)
{
	Time time;
	time.hours = hour;
	time.minutes = minutes;
	time.seconds = seconds;
	return getPreviousMinute(time);
}
Time getPreviousMinute(int hour, int minutes)
{
	Time time;
	time.hours = hour;
	time.minutes = minutes;
	return getPreviousMinute(time);
}
