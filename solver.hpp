
#include <iostream>
#include <complex>
using namespace std;

namespace solver{
	class RealVariable {
	public:
		double a, b, c;
		RealVariable()
		: a(0), b(0), c(0){}
	
		
		
		// friend RealVariable& operator/(RealVariable e);
		// friend RealVariable& operator*(RealVariable e1);
		// friend RealVariable& operator*(double a);
	};
	RealVariable& operator+(solver::RealVariable& x, double e);	
	RealVariable& operator-(solver::RealVariable& x, double e);
	RealVariable& operator/(solver::RealVariable& x, double e);
	RealVariable& operator^(solver::RealVariable& x, double e);
	RealVariable& operator+(solver::RealVariable& x, solver::RealVariable e);
	RealVariable& operator+(double x, solver::RealVariable& e);
	RealVariable& operator-(solver::RealVariable& x, solver::RealVariable e);
	RealVariable& operator==(solver::RealVariable& x, double e);
	RealVariable& operator==(solver::RealVariable& x, solver::RealVariable e);
	solver::RealVariable& operator*(double a, solver::RealVariable& e);
	RealVariable& operator==(double a, solver::RealVariable& e);
	
	class ComplexVariable {
	public:
		double a, b, c;
		
		ComplexVariable()
		: a(0), b(0), c(0){}
		
	};
	ComplexVariable& operator+(solver::ComplexVariable& x, std::complex<double> e);
	ComplexVariable& operator-(solver::ComplexVariable& x, std::complex<double> e);
	ComplexVariable& operator/(solver::ComplexVariable& x, double e);
	ComplexVariable& operator^(solver::ComplexVariable& x, double e);
		
	ComplexVariable& operator+(solver::ComplexVariable& x, solver::ComplexVariable e);
	ComplexVariable& operator+(double x, solver::ComplexVariable e);
	ComplexVariable& operator-(solver::ComplexVariable& x, solver::ComplexVariable e);
	ComplexVariable& operator==(solver::ComplexVariable& x, solver::ComplexVariable e);
	ComplexVariable& operator==(solver::ComplexVariable& x, std::complex<double>);
	//ComplexVariable& operator()(ComplexVariable e);
	ComplexVariable& operator*(double a, solver::ComplexVariable& e1);
	ComplexVariable& operator==(double a, solver::ComplexVariable& e);

	double solve(solver::RealVariable Real);
	std::complex<double> solve(solver::ComplexVariable x);
};


