#pragma once
#include <iostream>
using namespace std;
template<typename T=double>
class Matrix {
public:
	Matrix(const size_t& rows = 2, const size_t& cols = 2);
	void print()const;
	T& operator()(const size_t &r,const size_t &c);
	Matrix(const Matrix& other);
	bool operator==(const Matrix& other)const;
	Matrix& operator=(const Matrix& other);
	~Matrix();
	static size_t getCount();
private:
	static size_t count;
	bool isValidIndex(const size_t& r, const size_t& c)const;
	T** matrix=nullptr;
	size_t rows, cols;
	template <typename T> 
	friend ostream& operator  << (ostream& out, const Matrix<T> m);
};
template<typename T>
size_t Matrix<T>::count = 0;
template<typename T>
inline Matrix<T>::Matrix(const size_t& rows, const size_t& cols)
{
	this->rows = (rows > 0 ? rows : 1);
	this->cols = (cols > 0 ? cols : 1);
	matrix = new T * [this->rows];
	for (size_t i = 0; i < this->rows; i++)
	{
		matrix[i] = new T[this->cols]{}; //default for type T
	}
	++count;

} 

template<typename T>
inline void Matrix<T>::print() const
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

template<typename T>
inline T& Matrix<T>::operator()(const size_t& r, const size_t& c)
{
	static T error;
	if (isValidIndex(r, c))
	{
		return matrix[r][c];
	}
	return error;
}

template<typename T>
inline Matrix<T>::Matrix(const Matrix& other)
{
	this->cols = other.cols;
	this->rows = other.rows;
	matrix = new T 
		
		
		
		
		
		
		
		
		
		* [this->rows];
	for (size_t i = 0; i < this->rows; i++)
	{
		this->matrix[i] = new T[this->cols];
	}
	for (size_t i = 0; i < rows; i++)

	{
		for (size_t j = 0; j < cols; j++)
		{
			matrix[i][j] = other.matrix[i][j];
		}
	}

}

template<typename T>
inline bool Matrix<T>::operator==(const Matrix& other) const
{
	if (rows!= other.rows || cols!= other.cols)
	{
		return false;
	}
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (matrix[i][j]!=other.matrix[i][j])
			{
				return false;
			}
		}
	}
	return true;
}

template<typename T>
inline Matrix<T>& Matrix<T>::operator=(const Matrix<T>& other)
{
	matrix = new T * [this->rows];
	for (size_t i = 0; i < this->rows; i++)
	{
		this->matrix[i] = new T[this->cols];
	}
	for (size_t i = 0; i < rows; i++)

	{
		for (size_t j = 0; j < cols; j++)
		{
			matrix[i][j] = other.matrix[i][j];
		}
	}
	return *this;
}

template<typename T>
inline Matrix<T>::~Matrix()
{
	if (true)
	{

	}
}

template<typename T>
inline size_t Matrix<T>::getCount()
{
	return count;
}



template<typename T>
inline bool Matrix<T>::isValidIndex(const size_t& r, const size_t& c) const
{
	return r<rows&&c<cols;
}

template<typename T>
inline ostream& operator<<(ostream& out, const Matrix<T> m)
{
	for (size_t i = 0; i < m.rows; i++)
	{
		for (size_t j = 0; j < m.cols; j++)
		{
			out<<m.matrix[i][j]<<", ";
		}
		out << endl;
	}
	return out;
}
