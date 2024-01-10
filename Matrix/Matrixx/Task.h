#pragma once
#include "matrix.h"

class Task
{
public:
	Task(Matrix matrix, Generator* generator);
	Matrix task1();
private:
	Matrix matrix;
	Generator* generator;
};