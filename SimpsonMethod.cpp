#include "SimpsonMethod.h"

SimpsonMethod::SimpsonMethod(double (*pf)(double x),double a, double b, int n)
{
	m_pf = pf;
	m_a = a;
	m_b = b;
	m_n = n;
}

double SimpsonMethod::eval(){
	double s = 0,
		h = (m_b - m_a) / m_n;
	double h2 = h / 2;
	double h3 = m_pf(m_a + h2);
	for(int i = 1; i <= m_n - 1; i++){
		s += m_pf(m_a + i * h);
		h3 += m_pf(m_a + i * h + h2);
	}
	s = h / 6 * (m_pf(m_a) + 4 * h3 + 2 * s + m_pf(m_b));
	return s;
}

SimpsonMethod::~SimpsonMethod()
{
}

