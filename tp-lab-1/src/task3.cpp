#include "stdafx.h"
#include <iostream>
#include <task3.h>
unsigned long long sumPrime(unsigned int hbound) {
	int sum = 0;
	int i, j, cnt;

	for (i = 2; i <= hbound; ++i) {
		cnt = 0;
		for (j = 1; j <= i; ++j) {
			if (!(i % j))
				++cnt;
		}
		if (cnt == 2) {
			sum += i;
		}
	}return sum;
}