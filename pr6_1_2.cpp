#include <iostream>

using namespace std;
int array_result(int A[], int P, int i) {
	if ((A[i] % 2 == 0) || (i % 8 != 0))
	{
		P += A[i];
	}
	i++;
	if (i < 25) {
		P = array_result(A, P, i);
	}
	return P;
}
int output(int A[], int P, int i) {
	cout << "[" << i << "] " << A[i] << "   ";
	i++;
	if (i < 25) {
		P = output(A, P, i);
	}

	return 1;
}
int main() {
	int A[25];
	for (int i = 0; i < 25; i++) {
		A[i] = rand() % 90 + 5;
	}
	int P = 0;
	int i = 0;
	cout << "Result: " << array_result(A, P, i) << endl;
	cout << "Array: " << output(A, P, i) << endl;
	return 0;
}