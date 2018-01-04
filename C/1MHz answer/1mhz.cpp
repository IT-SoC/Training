#include <iostream>
#include "time.h"
#define SWAP(x, y) { int t=x; x=y; y=t; }

using namespace std;

// this function is non pointer paramaters for function
void orderOriginal (int a, int b, int c) {
	int array[3] = {a, b ,c}; // array init
	int i, j; //in loop Variable

	//loop for bubble sort algorithm
	for (i = 1; i < 3; i++) {
		for (j=0; j < 3-i; j++) {
			if (array[j] > array[j+1]) {
				SWAP(array[j], array[j+1]);
			}
		}
	}
	for (i=0; i<3; i++) {
		cout << array[i] << endl;
	}
}

void orderPointer (int *a, int *b, int *c) {
	int array[3] = {*a, *b , *c}; // array init
	int i, j; //in loop Variable

	//loop for bubble sort algorithm
	for (i = 1; i < 3; i++) {
		for (j=0; j < 3-i; j++) {
			if (array[j] > array[j+1]) {
				SWAP(array[j], array[j+1]);
			}
		}
	}
	for (i=0; i<3; i++) {
		cout << array[i] << endl;
	}
}


int main() {
	//running time
	clock_t time;
	time = clock();
	time  = clock() - time;

	int a = 1000000;
	int b = 4;
	int c = 2345246;

	//orderOriginal(a, b, c);
	orderPointer(&a, &b, &c);

	cout << "running time = " << ((double)time)/CLOCKS_PER_SEC << endl;
	return 0;
}
