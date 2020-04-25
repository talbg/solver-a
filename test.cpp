#include "doctest.h"
#include <iostream>
#include <complex>
#include "solver.hpp"

TEST_CASE(" linear real equation ") {
	RealVariable x;
	
	CHECK( solve(x+11 == 17) == 6 );
	CHECK( solve(x-4 == 5) == 1 );
	CHECK( solve(x-12 == 43) == 55 );
	CHECK( solve(2*x-4 == 10) == 7 );
	CHECK( solve(2.5*x-5 == 0) == 0.5 );
	CHECK( solve(6*x == 12) == 2 );
	CHECK( solve(30*x/5 == 6) == 1 );
	CHECK( solve(x/2 == 45) == 90 );
	CHECK( solve(18*x/4 == 3) == 0.666666 );
	CHECK( solve(x+5 == -30) == -35 );
	
	CHECK( solve(23.4*x+234.54 == 53.54+435.4*x) == 0.4393204 );
	CHECK( solve(12+5.1*x == 5*x+2) == -100.0 );
	CHECK( solve(3*x+4 == x/3) == -1.5 );
	CHECK( solve(x == 0.5*x) == 0 );
	CHECK( solve(23*x+1 == 3*x-1) == -0.1 );
	CHECK( solve(34*x/1.55-5 == 20*x) == 2.5833333333 );
	CHECK( solve(12.5+2.0*x/0.5 == 41-5.5*x/5) == 2.567567568 );
	CHECK( solve(-2*x+5 == 4*x-1.6) == 1.1 );
	CHECK( solve(1.23*x-8.4 == -0.77*x) == 4.2 );
	CHECK( solve(2*x-1 == -3*x+5) == 1.2 );
	
	CHECK_THROWS( solve(5*x == 5*x-1) );
	CHECK_THROWS( solve(2.5*x+1 == 25*x/10) );
	CHECK_THROWS( solve(x == 30+x) );
	CHECK_THROWS( solve(22*x == 3+11*x/0.2) );
	CHECK_THROWS( solve(5+12*x == 2*x/0.6 ) );
}

TEST_CASE(" linear complex equation ") {
	ComplexVariable x;
	
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	
	CHECK_THROWS( solve( == ) );
	CHECK_THROWS( solve( == ) );
	CHECK_THROWS( solve( == ) );
	CHECK_THROWS( solve( == ) );
	CHECK_THROWS( solve( == ) );
}

TEST_CASE(" real Quadratic equation ") {
	RealVariable x;
	
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	
	CHECK_THROWS( solve( == ) );
	CHECK_THROWS( solve( == ) );
	CHECK_THROWS( solve( == ) );
	CHECK_THROWS( solve( == ) );
	CHECK_THROWS( solve( == ) );
}

TEST_CASE(" complex quadratic equation ") {
	ComplexVariable x;
	
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	CHECK( solve( == ) ==  );
	
	CHECK_THROWS( solve( == ) );
	CHECK_THROWS( solve( == ) );
	CHECK_THROWS( solve( == ) );
	CHECK_THROWS( solve( == ) );
	CHECK_THROWS( solve( == ) );
}
