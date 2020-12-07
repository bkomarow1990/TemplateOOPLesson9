#include <iostream>
#include "Matrix.h"
using namespace std;
int main()
{
	//cout << "Count of Matrix<int> (2,3) : " << Matrix<int>::getCount() << endl;
	//cout << "Count of Matrix<int> (2,3) : " << Matrix<int>::getCount() << endl;
	//Matrix<int> matrix1(2,3); 
	//cout << "Count of Matrix<int> (2,3) : " << Matrix<int>::getCount() << endl;
	//// compilator will 1. add class
	////in main of template class(T= int)
	////2 add exempliar of class (cor with parameters)
	//matrix1(0, 0) = 100;
	//matrix1(1, 2) = 200;
	//matrix1(1, 1) = 300;
	//cout << matrix1;
	Matrix<int>m1(5, 5);
	m1(0, 0) = 228;
	m1(1, 1) = 1337; 
	Matrix<int>m2 = m1;
	m1.print();
	cout << "===========" << endl;
	m2.print();
	//matrix1.print();
}