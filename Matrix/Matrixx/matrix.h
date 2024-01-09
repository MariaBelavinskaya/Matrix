#pragma once
#include <vector>
#include <iostream>
#include <ostream>
#include <sstream>
#include "../Generator/Generator.h"

class Matrix
{
public:
	/**
	*@brief ������������� ������� ���� ������� �� ���������� ������������
	*@param num_rows ���������� �����
	*@param num_cols ���������� ��������
	*@param generator ���������, ������� ����� ��������� �������
	*/
	Matrix(size_t num_rows, size_t num_cols, Generator* generator);

	/**
	*@brief ����������� ������ � ������� �� �������, ���� �� ������ �� ������, �� ������� ����������� � �����
	*@param user_data ������ ��� ����������
	*/
	void add_row(std::vector<int> user_data);

	

	/**
	*@brief ��������� ���-�� ����� � �������
	*@return ���-�� ����� � �������
	*/
	size_t rows_counts() const;

	/**
	*@brief ��������� ���-�� �������� � �������
	*@return ���-�� �������� � �������
	*/
	size_t cols_counts() const;

	/**
	*@brief �������������� ������� ������� � ������
	*@return ������
	*/
	std::string toString() const noexcept;

	/**
	*@brief ���������� ��������� ������
	*@param os - ����� ������
	*@param matrix - �������, ������ ������� ���� ��������
	*@return ����� ������ ����������
	*/
	friend std::ostream& operator<<(std::ostream& os, Matrix& matrix) noexcept;

	/**
	*@brief ���������� ��������� ���������� ������ 
	*@param index - ������ �������� � �������
	*@return ������� �� ������� ������� ��� ������ ��������
	*/
	std::vector<int>& operator[](size_t index);
private:
	std::vector<std::vector<int>> data;

};