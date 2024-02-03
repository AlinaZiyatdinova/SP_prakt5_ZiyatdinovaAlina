#pragma once
struct Time
{
	int seconds;
	int minutes;
	int hours;
};
Time getPreviousMinute(Time time);
Time getPreviousMinute(int hour, int minutes, int seconds);
Time getPreviousMinute(int hour, int minutes);