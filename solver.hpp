#include <iostream>
#include <complex>
using namespace std;

namespace solver{
	class RealVariable {
	public:
		double a, b, c;
		RealVariable()
		: a(0), b(0), c(0){}
		 
		friend RealVariable operator-(const RealVariable& x, double e) ;
        	friend RealVariable operator==(const RealVariable& x, double e);
		friend RealVariable operator+(const RealVariable& x, const RealVariable e);
		friend RealVariable operator+(const RealVariable& x, double e);
		friend RealVariable operator-(const RealVariable& x, RealVariable e);
		friend RealVariable operator/(const RealVariable& x, double e);
		friend RealVariable operator^(const RealVariable& x, double e);
		friend RealVariable operator==(const RealVariable& x, RealVariable e);
		
		friend double solve(const RealVariable& Real);
	};
	
	RealVariable operator+(double x, solver::RealVariable e);
       RealVariable operator*(double a, const RealVariable& e);
	RealVariable operator==(double a, solver::RealVariable e);
	
	class ComplexVariable {
	public:
        std::complex<double> a, b, c;
		
		ComplexVariable()
		: a(0), b(0), c(0){}
		
	};
	ComplexVariable& operator+(solver::ComplexVariable& x, std::complex<double> e);
	ComplexVariable& operator-(solver::ComplexVariable& x, std::complex<double> e);
	ComplexVariable& operator/(solver::ComplexVariable& x, double e);
	ComplexVariable& operator^(solver::ComplexVariable& x, double e);
		
	ComplexVariable& operator+(solver::ComplexVariable& x, solver::ComplexVariable e);
	ComplexVariable& operator+(std::complex<double> x, solver::ComplexVariable e);
	ComplexVariable& operator-(solver::ComplexVariable& x, solver::ComplexVariable e);
	ComplexVariable& operator==(solver::ComplexVariable& x, solver::ComplexVariable e);
	ComplexVariable& operator==(solver::ComplexVariable& x, std::complex<double>);
	//ComplexVariable& operator()(ComplexVariable e);
	ComplexVariable& operator*(std::complex<double> a, solver::ComplexVariable& e1);
	ComplexVariable& operator==(std::complex<double> a, solver::ComplexVariable& e);

	std::complex<double> solve(solver::ComplexVariable x);
};


