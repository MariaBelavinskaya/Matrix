#include "Task.h"

Task::Task(Matrix matrix, Generator* generator):
	matrix(matrix),generator(generator)
{

}

Matrix Task::task1()
{
	for (size_t i = 0; i < 3; i++) {
		for (size_t j = 0; j < matrix.rows_counts(); j++) {
			matrix[j][i] = matrix[j][i] * matrix[j][i];
		}
	}
	return matrix;
}
