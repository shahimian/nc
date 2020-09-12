#include "Bisection.h"

Bisection::Bisection(double (*pf)(double x), double a, double b, double eps, int dec){
	m_pf = pf;
	m_a = a;
	m_b = b;
	m_eps = eps;
	m_dec = dec;	
}

double Bisection::eval(){
	double x = (m_a + m_b) / 2;
	m_iteration = 1;
	while(abs(m_pf(x)) >= m_eps){
		if(m_pf(x) * m_pf(m_a) > 0)
			m_a = x;
		else
			m_b = x;
		x = (m_a + m_b) / 2;
		m_iteration += 1;
	}
	return x;
}

int Bisection::iteration(){
	eval();
	return m_iteration;
}

Bisection::~Bisection(){
}

