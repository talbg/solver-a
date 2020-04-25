
class solver {
	RealVariable x;
    ComplexVariable y;
	
	double solve(e){
		
	}
	
}

class RealVariable {
	private:
		double a, b, c;
	public:
		RealVariable(): a(0), b(0), c(0){}
		RealVariable(double x, double y, double z): a(x), b(y), c(z){}
		
		double operator() (double x) { 
			return _a*x*x + _b*x + _c; }

		double operator()() { 
			return 0; 
		}

};

double	solve(RealVariable x);
std::complex<double>	solve(RealVariable x);

RealVariable operator+ (RealVariable x, double y) { 
	return _a*x*x + _b*x + _c; 
}