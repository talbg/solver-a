
#include "solver.hpp"
#include <exception>
#include<cmath>
using namespace solver;

double	solve(RealEquation Real){
	if(Real.a != 0)
		return (-Real.b+sqrt(Real.b-4*Real.a*Real.c))/4*Real.a;
	else if (b != 0)
		return (-Real.c)/Real.b;
	else
		throw runtime_error(" can't solve this equation ");
}



















// class solver {
	// RealVariable x;
    // ComplexVariable y;
	
	// double solve(e){
		
	// }
	
// }

// class RealVariable {
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

// };

// double	solve(RealVariable x);
// std::complex<double>	solve(RealVariable x);

// RealVariable operator+ (RealVariable x, double y) { 
	// return _a*x*x + _b*x + _c; 
// }