#include "Quadr_equation.h"
#include "Lin_equation.h" 

int main()
{
	setlocale(LC_ALL, "rus");
	Quadr_equation equation1{ 1, 9, 18 }; //������ � ����� ��������� -3 � -6
	Lin_equation equation2{ 2,-4 }; // ����� 2

	try
	{
		cout << "������ 1: " << equation1.roots_equation().first << "\n������ 2: " << equation1.roots_equation().second << "\n";
		cout << "������: " << equation2.roots_equation().first << "\n";
	}
	catch (const logic_error& exc)
	{
		cout << exc.what();
	}


	return 0;
}