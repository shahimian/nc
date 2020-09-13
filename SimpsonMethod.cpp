#include "SimpsonMethod.h"

SimpsonMethod::SimpsonMethod(double (*pf)(double x),double a, double b, int n)
{
	Range(pf, a, b, 0, 0);
	m_n = n;
}

double SimpsonMethod::eval(){
	double s = 0,
		h = (m_b - m_a) / m_n;
	double h2 = h / 2;
	double h3 = m_callback(m_a + h2);
	for(int i = 1; i <= m_n - 1; i++){
		s += m_callback(m_a + i * h);
		h3 += m_callback(m_a + i * h + h2);
	}
	s = h / 6 * (m_callback(m_a) + 4 * h3 + 2 * s + m_callback(m_b));
	return s;
}

SimpsonMethod::~SimpsonMethod()
{
}

