#include "Lin_equation.h"

vector<double> Lin_equation::roots_equation()
{
	if (a == 0)
	{
		if (b == 0)
		{
			return { 0.0 };
		}
		else
		{
			throw logic_error("��� ������\n");
		}
	}
	return  { -b / a };
}