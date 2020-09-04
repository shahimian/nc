#ifndef SIMPSONMETHOD_H
#define SIMPSONMETHOD_H

class SimpsonMethod
{
	double (*m_pf)(double x), m_a, m_b;
	int m_n;
	
	public:
		SimpsonMethod(double (*pf)(double x),double a, double b, int n);
		double eval();
		~SimpsonMethod();
	protected:
};

#endif
