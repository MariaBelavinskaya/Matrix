#include "matrix.h"
#include <random>
#include <sstream>

Matrix::Matrix(int num_rows, int num_cols, Generator* generator)
	: data({})
{
	if (num_rows <= 0 || num_cols <= 0 || generator==nullptr)
	{
		throw std::out_of_range("Incorect size");
	}
	for (size_t i = 0; i < num_rows; i++)
	{
		std::vector<int> temp;
		for (size_t j = 0; j < num_cols; j++)
		{
			temp.push_back(generator->generate());
		}
		this->data.push_back(temp);
	}
}


void Matrix::add_row(std::vector<int> user_data)
{
	if (user_data.size() != this->data.size())
	{
		std::out_of_range("Invalide size new data");
	}
	this->data.push_back(user_data);
}

std::vector<int>& Matrix::operator[](size_t index)
{
	if (index>=rows_counts())
	{
		throw std::out_of_range("Incorect index");
	}
	return data[index];
}


size_t Matrix::rows_counts() const
{
	return this->data.size();
}

size_t Matrix::cols_counts() const
{
	return this->data.size();
}

std::string Matrix::toString() const noexcept
{
	std::stringstream buffer;
	for (size_t i = 0; i < rows_counts(); i++)
	{
		for (size_t j = 0; j < cols_counts(); j++)
		{
			buffer << data[i][j] << ' ';
		}
		buffer << std::endl;
	}
	return buffer.str();
}

std::ostream& operator<<(std::ostream& os, Matrix& matrix) noexcept
{
	return os << matrix.toString();
}
