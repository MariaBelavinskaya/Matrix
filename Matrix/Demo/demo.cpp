#include"../Matrixx/matrix.h"
#include"../Generator/RandomGenerator.h"
#include"../Matrixx/Task.h"
int main()
{
	RandomGenerator rg(1, 10);
	Matrix m1(4, 4,&rg);
	std::cout << m1;
	Task t1(m1, &rg);
	Matrix m2 = t1.task1();
	std::cout << m2;

}