#pragma once
/**
*@brief Класс генератор
*/
class Generator
{
public:
	/**
	*@brief Виртуальный метод для генерации числа
	*/
	virtual int generate() = 0;

	/**
	*@brief Виртуальный деструктор,кот освобождает динамическую память объекта класса
	*/
	virtual ~Generator() = 0 {};
};