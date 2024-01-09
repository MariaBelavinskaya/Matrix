#include "matrix.h"
#include <random>
#include <sstream>

Matrix::Matrix(size_t num_rows, size_t num_cols, Generator* generator)
	: data({})
{
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

Matrix::Matrix()
	:data({})
{

}

void Matrix::add_row(std::vector<int> user_data)
{
	this->data.push_back(user_data);
}

std::vector<int>& Matrix::operator[](size_t index)
{
	return data[index];
}


size_t Matrix::rows_counts() const
{
	return this->data.size();
}

size_t Matrix::cols_counts() const
{
	if (this->data.size() == 0)
	{
		return 0;
	}
	return this->data[0].size();
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
