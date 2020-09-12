#include <iostream>
#include <cmath>
#include <stdio.h>
#include "SimpsonMethod.h"

void testSimpsonMethod();

double f(double x){
	return sqrt(x);
}

int main(int argc, char** argv) {
	testSimpsonMethod();
	return 0;
}

void testSimpsonMethod(){
	SimpsonMethod *sm = new SimpsonMethod(f, 1, 1.3, 10);
	printf("y=%.3f", sm->eval());
	return;
}

