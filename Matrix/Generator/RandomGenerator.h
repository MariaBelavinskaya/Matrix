#pragma once
#include "Generator.h"
#include <random>

/**
*@brief ����� ��������� ���������� ����� � �������� ���������
*/
class RandomGenerator : public Generator
{
private:
	std::uniform_int_distribution<int> distribution;
	std::mt19937 generator;
public:
	/**
	*@brief ������������� ������� ���� ���������������
	*@param min - ����������� ��������
	*@param max - ������������ ��������
	*/
	RandomGenerator(const int min, const int max);

	/**
	*@brief ���������� �����-�� ����� �� ��������� ���� ���������
	*@return ��������� �������� �� ���������
	*/
	int generate() override;
};