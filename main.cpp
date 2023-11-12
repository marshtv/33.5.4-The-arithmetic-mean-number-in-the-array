#include <iostream>
#include <cmath>

template<typename T>
void fill_array(T _array[5]) {
	std::cout << "\nFill the array: " << std::endl;
	for (int i = 0; i < 5; ++i) {
		std::cout << i << " =";
		std::cin >> _array[i];
	}
}

template<typename T>
T arithmetic_mean(T _array[5]) {
	T _temp = 0;
	for (int i = 0; i < 5; ++i) {
		_temp += _array[i];
	}
	return _temp / 5;
}

int main() {
	int array_int[5];
	fill_array(array_int);
	std::cout << "\nArithmetic mean number = " << arithmetic_mean(array_int) << std::endl;

	float array_float[5];
	fill_array(array_float);
	std::cout << "\nArithmetic mean number = " << arithmetic_mean(array_float) << std::endl;

	double array_double[5];
	fill_array(array_double);
	std::cout << "Arithmetic mean number = " << arithmetic_mean(array_double) << std::endl;
}
