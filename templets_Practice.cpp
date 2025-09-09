#include <iostream>
using namespace std;
template<typename T>
class Matrix {
	int row;
	int coloumn;
	T** data;
	int isValidRow(int index);
	int isValidColoumn(int index);
public:
	Matrix();
	Matrix(int row, int coloumn) : Matrix();
	Matrix(const Matrix<T>&);
	~Matrix();
	Matrix<T>& operator=(const Matrix<T>&);
	T& operator[](int);
	int getRow()const;
	int getColoumn()const;
	void reSize(int row , int coloumn);

};
int main()
{

}
template<typename S>
int Matrix<S>::isValidRow(int index)
{
	return index >= 0 && index < row;
}
template<typename S>
int Matrix<S>::isValidColoumn(int index)
{
	return index >= 0 && index < coloumn;
}
template<typename R>
Matrix<R>::Matrix()
{
	row = 0;
	coloumn = 0;
	data = nullptr;
}
template<typename N>
Matrix<N>::Matrix(int row, int coloumn) : Matrix()
{
	if (row == 0)
		return;
	this->row = row;
	this->coloumn = coloumn;
	data = new T*[row];
	for (int i = 0; i < row; i++)
	{
		data[i] = new T[coloumn];
	}
}
template<typename A>
Matrix<A>::Matrix(const Matrix<A>& orig)
{
	row = orig.row;
	coloumn = orig.coloumn;
	data = new T * [row];
	for (int i = 0; i < ; i++)
	{
		data[i] = new T[coloumn];
	}
}
template <typename C>
Matrix<C>::~Matrix()
{
	if (data != nullptr)
	{
		for (int i = 0; i < row; i++)
		{
			delete [] data[i];
		}
		delete[] data;
	}
	data = nullptr;
	row = 0;
	coloumn = 0;
}
template<typename T>
Matrix<T>& Matrix<T>:: operator=(const Matrix<T>& rhs) 
{
	if (this == &rhs)
		return *this;
	if (data != nullptr)
	{
		for (int i = 0; i < coloumn; i++)
			delete[] data[i];
		delete[] data;
	}
	data = nullptr;
	if (rhs.row == 0)
	{
		row = rhs.row;
		coloumn = rhs.coloumn;
		data = new T*[row];
		for (int i = 0; i < row; i++)
			data[i] = new T[coloum];
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < coloumn; j++)
				data[i][j] = rhs.data[i][j];
		}
	}
	
}
template<typename L>
L& Matrix<L>:: operator[](int index)
{
	if (isVA)
	{

	}
}
template<typename G>
int Matrix<G>::getRow()const
{
	return row;
}
template<typename F>
int Matrix<F>::getColoumn()const
{
	return coloumn;
}
template<typename W>
void Matrix<W>::reSize(int row, int coloumn)
{

}

