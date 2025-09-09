#include <iostream>
using namespace std;
//template<typename T>
//class Array
//{
//private:
//	T* data;
//	int size;
//	int isValidIndex(int)const;
//public:
//	Array();
//	Array(int);
//	Array(const Array<T>& orig);
//	//Array(const initializer_list<T>& list = {});
//	~Array();
//	T& operator[](int);
//	const T& operator[](int)const;
//	int getCapacity()const;
//	void reSize(int newSize);
//	Array<T>& operator=(const Array <T>& rhs);
//};
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

	/*int n , m;
	cout << "Enter the Size of array : " << endl;
	cin >> n;
	cout << "Enter the Size of array coloumn: " << endl;
	cin >> m;
	Array<Array<int>> a;
	a.reSize(n);
	for (int i = 0; i < n; i++)
	{
		a[i].reSize(m);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
		cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}*/
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

	//template <typename T>
	//Array<T>::Array(const initializer_list<T>& list)
	//{
	//	size = list.size();
	//	if (size == 0)
	//	{
	//		data = nullptr;
	//		return;
	//	}
	//	data = new T[size];
	//	int i = 0;
	//	for (auto element : list)
	//	{
	//		data[i] = element;
	//		i++;
	//	}
	//}
//template<typename R>
//int Array<R>::isValidIndex(int S)const
//{
//	return S >= 0 && S < size;
//}
//template<typename R>
//Array<R>::Array()
//{
//	data = nullptr;
//	size = 0;
//}
//template<typename T>
//Array<T>::Array(int Size) :Array()
//{
//	if (Size == 0)
//		return; // Exceptional case
//	size = Size;
//	data = new T[size];
//}
//template<typename L>
//Array<L>::Array(const Array<L>& orig)
//{
//	if (orig.size == 0)
//		return;
//	size = orig.size;
//	data = new L[size];
//	for (int i = 0; i < size; i++)
//	{
//		data[i] = orig.data[i];
//	}
//}
//template<typename P>
//Array<P>& Array<P>::operator=(const Array<P>& rhs)
//{
//	if (this == &rhs)
//		return *this;
//	if (data != nullptr)
//		delete[]data;
//	data = nullptr;
//	size = rhs.size;
//	data = new P[size];
//	for (int i = 0; i < size; i++)
//	{
//		data[i] = rhs.data[i];
//	}
//	return *this;
//}
//template <typename I>
//I& Array<I>::operator[](int index)
//{
//	if (isValidIndex(index))
//		return data[index];
//	exit(0);
//}
////template <typename I>
////const I& Array<I>::operator[](int index)const
////{
////	if (isValidIndex(index))
////		return data[index];
////	exit(0);
////}
//template<typename P>
//void Array<P>::reSize(int newSize)
//{
//	if (data == nullptr && newSize > 0)
//	{
//		size = newSize;
//		data = new P[size];
//		return;
//	}
//	P* newData = new P[newSize + size]();
//	for (int i = 0; i < size; i++)
//	{
//		newData[i] = data[i];
//	}
//	delete[] data;
//	data = nullptr;
//	size = newSize + size;
//	data = newData;
//	newData = nullptr;
//	/*data = new P[size];
//	for (int i = 0; i < size; i++)
//	{
//		data[i] = newData[i];
//	}*/
//	cout << "Size UpDated!!" << endl;
//}
//template<typename R>
//int Array<R>::getCapacity()const
//{
//	return size;
//}
//template<typename L>
//Array<L>::~Array()
//{
//	if (data != nullptr)
//		delete[] data;
//	data = nullptr;
//}
