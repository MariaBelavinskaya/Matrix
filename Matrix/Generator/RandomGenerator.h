#pragma once
#include "Generator.h"
#include <random>

/**
*@brief Класс генератор случайного числа в заданном диапазоне
*/
class RandomGenerator : public Generator
{
private:
	std::uniform_int_distribution<int> distribution;
	std::mt19937 generator;
public:
	/**
	*@brief Инициализация объекта типа рандомгенератор
	*@param min - Минимальное значение
	*@param max - Максимальное значение
	*/
	RandomGenerator(const int min, const int max);

	/**
	*@brief Генерирует какое-то число из заданного выше диапазона
	*@return Рандомные элементы из диапазона
	*/
	int generate() override;
};