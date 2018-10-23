#include <iostream>
#include <task2.h>
#include <cmath>

bool checkPrime(unsigned int value) {
	for (long long i = 2; i <= sqrt(value); i++) {
		if (value % i == 0)
			return false;
	}
	return true;
}

unsigned long long nPrime(unsigned long long value) {
	int i = 3;
	long long x = 1;
	while (x < value) {
		if (checkPrime(i) == 1) { x++; i = i + 2; }
		else { i = i + 2; }
	}
	return i;
}

unsigned long long nextPrime(unsigned n) {
	int x = 1;
	while (x != 0) {
		n++;
		x = checkPrime(n);
			
	};
}