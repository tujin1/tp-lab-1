#include "stdafx.h"
#include "task1.h"
using namespace std;
unsigned long findValue(unsigned int min, unsigned max) {
	unsigned int x;
	unsigned int y = min;
	unsigned long i = max;
	while ( y < max) {
		x = i%y;
		if (x == 0) { y++; }
		else { i = i + 1; y = min; }
	}
	return i;
}