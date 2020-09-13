#include <iostream>
#include <cmath>
#include <stdio.h>
#include "SimpsonMethod.h"
#include "Bisection.h"
#include "RegulaFalsi.h"

void testSimpsonMethod();
void testBisectionMethod();
void testRegulaFalsi();

double f(double x){
	return sqrt(x);
}

double g(double x){
	return pow(x, 2) - pow(1 - x, 5);
}

double h(double x){
	return 3 * x - exp(-x);
}

int main(int argc, char** argv) {
	testSimpsonMethod();
	testBisectionMethod();
	testRegulaFalsi();
	return 0;
}

void testSimpsonMethod(){
	SimpsonMethod *sm = new SimpsonMethod(f, 1, 1.3, 10);
	printf("y=%.3f\n", sm->eval());
	return;
}

void testBisectionMethod(){
	Bisection *g0 = new Bisection(g, 0, 1, 0.01, 4);
	Bisection *h0 = new Bisection(h, 0.25, 0.27, 0.001, 3);
	printf("Bisection Method\n");
	printf("equation of root is %f and iteration is %d\n", g0->eval(), g0->iteration());
	printf("equation of root is %f and iteration is %d\n", h0->eval(), h0->iteration());
	return;
}

void testRegulaFalsi(){
	RegulaFalsi *rf = new RegulaFalsi(h, 0.25, 0.27, 0.0002, 3);
	printf("equation of root is %f and iteration is %d\n by Regula Falsi method", rf->eval(), rf->iteration());
}

