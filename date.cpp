#include "date.h"
bool IsLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 400 == 0))
		return true;
	return false;
}

bool LaterInYear(int d1, int mo1, int d2, int m2)
{
	if (m1 > m2) 
           return true;
	else 
           return (d1 > d2);
}
