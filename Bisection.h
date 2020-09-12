#ifndef BISECTION_H
#define BISECTION_H
#include <cmath>

class Bisection
{
	double (*m_pf)(double x);
	double m_a;
	double m_b;
	double m_eps;
	double m_dec;
	int m_iteration;
	public:
		Bisection(double (*pf)(double x), double a, double b, double eps, int dec);
		~Bisection();
		double eval();
		int iteration();
	protected:
};

#endif
