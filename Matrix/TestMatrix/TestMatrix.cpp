#include "pch.h"
#include "CppUnitTest.h"
#include"../Generator/IStreamGenerator.h"
#include"../Generator/RandomGenerator.h"
#include"../Matrixx/Task.h"
#include"../Matrixx/matrix.h"
#include <iostream>
#include<vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestMatrix
{
	TEST_CLASS(TestMatrix)
	{
	public:
		
		TEST_METHOD(MatrixAddRow_Success)
		{
			RandomGenerator rg(1, 10);
			Matrix m1(4, 4, &rg);
			size_t rows = m1.rows_counts();
			std::vector <int> vec = { 1, 2, 3, 0 };
			m1.add_row(vec);
			size_t new_rows = m1.rows_counts();
			bool are_equal = rows == new_rows;
			Assert::IsFalse(are_equal);
		}

		TEST_METHOD(Constructor_ValitData_Success)
		{
			RandomGenerator rg(1, 10);
			Matrix m1(4, 4, &rg);
			Assert::IsNotNull(&m1);
		}

		TEST_METHOD(MatrixToString_ValitData_Success)
		{
			std::istringstream in("1 2 3 4");
			IStreamGenerator isg(in);
			Matrix m1(2, 2, &isg);
			bool are_equal = (m1.toString() == "1 2 \n3 4 \n");
			Assert::IsTrue(are_equal);
		}

		TEST_METHOD(GetCols_ValitData_Success)
		{
			RandomGenerator rg(1, 10);
			Matrix m1(4, 4, &rg);
			bool are_equal = (m1.cols_counts() == 4);
			Assert::IsTrue(are_equal);
		}

		TEST_METHOD(GetRows_ValitData_Success)
		{
			RandomGenerator rg(1, 10);
			Matrix m1(2, 3, &rg);
			bool are_equal = (m1.rows_counts() == 2);
			Assert::IsTrue(are_equal);
		}

		TEST_METHOD(MatrixIndex_ValitData_Success)
		{
			std::istringstream in("1 2 3 4");
			IStreamGenerator isg(in);
			Matrix m1(2, 2, &isg);
			bool are_equal = (m1[0][1] == 2);
			Assert::IsTrue(are_equal);
		}
		TEST_METHOD(Task_ValitData_Success)
		{
			std::istringstream in("1 2 3");
			IStreamGenerator isg(in);
			Matrix m1(1, 3, &isg);
			Task t1(m1, &isg);
			Matrix m2 = t1.task1();
			std::cout << m1.toString();
			bool are_equal = (m2.toString() == "1 4 9 \n");
			Assert::IsTrue(are_equal);
		}
	};
}
