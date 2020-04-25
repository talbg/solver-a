
#include <iostream>
#include <complex>

namespace solver{
	class RealVariable {
	// private:
		// double a, b, c;
	// public:
		// RealVariable(): a(0), b(0), c(0){}
		// RealVariable(double x, double y, double z): a(x), b(y), c(z){}
		
		// double operator() (double x) { 
			// return _a*x*x + _b*x + _c; }

		// double operator()() { 
			// return 0; 
		// }

    };
	
	class ComplexVariable {
		// double a, b;
		
	};
	class Equation {
		enum  { Real, Complex };
	public:
		double a, b, c;
		
		Equation operator==(Equation e);
	}
}



Equation operator==(Equation e1, Equation e2);
Equation operator==(Equation e1, double a);
Equation operator==(double a, Equation e1);

double	solve(RealVariable x);
std::complex<double>	solve(ComplexVariable x);