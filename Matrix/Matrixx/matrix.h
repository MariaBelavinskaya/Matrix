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
	*@brief Инициализация объекта типа матрицы по параметрам пользователя
	*@param num_rows Количествр строк
	*@param num_cols Количество столбцов
	*@param generator Генератор, которым будет заполнена матрица
	*/
	Matrix(size_t num_rows, size_t num_cols, Generator* generator);

	/**
	*@brief Добавляется строка в матрицу по индексу, если же индекс не указан, то элемент добавляется в конец
	*@param user_data Строка для добавления
	*/
	void add_row(std::vector<int> user_data);

	

	/**
	*@brief Получение кол-ва строк в матрице
	*@return Кол-во строк в матрице
	*/
	size_t rows_counts() const;

	/**
	*@brief Получение кол-ва столбцов в матрице
	*@return Кол-во столбцов в матрице
	*/
	size_t cols_counts() const;

	/**
	*@brief Преобразование объекта матрицы в строку
	*@return Строка
	*/
	std::string toString() const noexcept;

	/**
	*@brief Перегрузка оператора вывода
	*@param os - поток вывода
	*@param matrix - матрица, данные которые буду выведены
	*@return Поток вывода информации
	*/
	friend std::ostream& operator<<(std::ostream& os, Matrix& matrix) noexcept;

	/**
	*@brief Перегрузка оператора квадратных скобок 
	*@param index - индекс элемента в массиве
	*@return Элемент из матрицы стоящий под нужным индексом
	*/
	std::vector<int>& operator[](size_t index);
private:
	std::vector<std::vector<int>> data;

};