#pragma once
/**
*@brief ����� ���������
*/
class Generator
{
public:
	/**
	*@brief ����������� ����� ��� ��������� �����
	*/
	virtual int generate() = 0;

	/**
	*@brief ����������� ����������,��� ����������� ������������ ������ ������� ������
	*/
	virtual ~Generator() = 0 {};
};