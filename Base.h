#pragma once
#include <iostream>
#include <cmath>
#include <exception>
#include <vector>

using namespace std;

class Base
{
public:
	//������������ �������� ����� ������ ��� � ������ � ���������� ����������
	//�� ����� �������� 2 ������
	virtual vector<double> roots_equation() { return { 0.0 }; }
};