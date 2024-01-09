#include"../Matrixx/matrix.h"
#include"../Generator/IStreamGenerator.h"
#include"../Matrixx/Task.h"
int main()
{
	std::istringstream in("1 2 3");
	IStreamGenerator isg(in);
	Matrix m1(1, 3, &isg);
	Task t1(m1, &isg);
	Matrix m2 = t1.task1();
	std::cout << m1.toString();
	std::cout << m2;

}