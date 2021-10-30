#include "date.h"
bool IsLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 400 == 0))
		return true;
	return false;
}

int SecondsInMinute(int sec)
{
	return sec / 60;
}
