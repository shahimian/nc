#include <iostream>
#include <cmath>
#include <stdio.h>
#include "SimpsonMethod.h"

double f(double x){
	return sqrt(x);
}

int main(int argc, char** argv) {
	SimpsonMethod *sm = new SimpsonMethod(f, 1, 1.3, 10);
	printf("y=%.3f", sm->eval());
	return 0;
}

