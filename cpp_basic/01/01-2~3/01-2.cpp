#include <iostream>

void swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}
void swap(char* a, char* b) {
	int c = *a;
	*a = *b;
	*b = c;
}
void swap(double* a, double* b) {
	int c = *a;
	*a = *b;
	*b = c;
}

int basic() {
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double db1 = 1.2211, db2 = 5.5555;
	swap(&db1, &db2);
	std::cout << db1 << ' ' << db2 << std::endl;
	return 0;
}