

#include <iostream>
#include<vector>



template<class T>
T MaxVal(T* arr, int size) {
	T temp = arr[0];
	for (int i{1}; i < size; ++i) {
		if (temp < arr[i])
			temp = arr[i];
	}
	return temp;
}

template<class T>
T MinVal(T* arr, int size) {
	T temp = arr[0];
	for (int i{ 1 }; i < size; ++i) {
		if (temp > arr[i])
			temp = arr[i];
	}
	return temp;
}

template<class T>
T MaxVal(std::vector<T> vec) {
	T temp = vec[0];
	for (int i{}; i < vec.size();++i) {
		if (temp < vec[i])
			temp = vec[i];
	}
	return temp;
}

template<class T>
T MinVal(std::vector<T> vec) {
	T temp = vec[0];
	for (int i{}; i < vec.size(); ++i) {
		if (temp > vec[i])
			temp = vec[i];
	}
	return temp;
}

template <class T>
void MySort(T* arr, int size) {
	for (int i{}; i < size; ++i) {
		for (int j{ i + 1 }; j < size; ++j) {
			if (arr[i] > arr[j])
				std::swap(arr[i], arr[j]);
		}
	}
}




template <class T>
void MySort(std::vector<T>& vec) {
	for (int i{}; i < vec.size(); ++i) {
		for (int j{i+1}; j < vec.size(); ++j) {
			if (vec[i] > vec[j])
				std::swap(vec[i], vec[j]);
		}
	}
}


template <class T>
int MyBinarySearch(T* arr, int size, const T& key) {
	int left{};
	int right = size - 1;

	while (left<=right)
	{
		int mid = left + (right - left) / 2;
		left + (right - left) / 2;
		if (arr[mid] == key)
			return mid;

		else if (arr[mid] < key)
			left = mid + 1;
		else
			right = mid - 1;

	}
}

template <class T> 
int MyBinarySearch(std::vector<T>&vec, const T& key) {

	int left{};
	int right = vec.size()-1;

	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (vec[mid] == key) 
			return mid; 
		
		else if (vec[mid] < key) 
			left = mid + 1; 
		else 
			right = mid - 1; 
		
	}
}

template<class T>
void NewValArr(std::vector<T>& vec, int index, const T& val) {
	if (index >= vec.size())
		return;
	vec[index] = val;
}

template<class T>
void NewValArr(T* arr,int size , int index, const T& val) {
	if (index >=size)
		return;
	arr[index] = val;
}

template<class T>
void print(T* arr, int size) {
	for (int i{}; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
}
template<class T>
void print(std::vector<T> vec) {
	for (auto r : vec)
		std::cout << r << " ";
}

int main()
{
	const int SIZE = 10;
	std::vector<int> vec{ 1,3,45,67,23,21,3,4,5,9 };
	int arr[SIZE]{ 1,3,45,67,23,21,3,4,5,9 };


	MySort(arr, SIZE);
	MySort(vec);
	std::cout << std::endl;
	print(arr, SIZE);
	std::cout << std::endl;
	print(vec);
	std::cout << std::endl;
	std::cout<<MyBinarySearch(arr, SIZE, 67)<<std::endl;
	std::cout <<MyBinarySearch(vec, 21)<<std::endl;

	NewValArr(arr,SIZE, 3, 1234);
	NewValArr(vec, 3, 1234);
	print(arr, SIZE);
	std::cout << std::endl;
	print(vec);
	std::cout << std::endl;
	std::cout << MinVal(arr, SIZE) << " " << MinVal(vec) << " " << MaxVal(arr, SIZE) << " " << MaxVal(vec);

	return 0;
}


