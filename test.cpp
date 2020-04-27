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

// TEST_CASE(" real Quadratic equation ") {
	// RealVariable x;
	// CHECK( solve(12+5.1*x == 5*x+2) == -100.0 );
	// CHECK( solve( 17*(x^2) == 17 ) == 1 or -1   );
	// CHECK( solve( (x^2)+5 == 30 ) == 5 or -5  );
	// CHECK( solve( 3*(x^2)-6*x == 9 ) == 3 or -1 );
	// CHECK( solve( 4*(x^2)/2 == 12*x^2/4 ) == 0  );
	// CHECK( solve( 21*(x^2)-6*(x^2)+x-5 == 13 ) == 1.06261 or -1.12928  );
	// CHECK( solve( 10*(x^2)/2*x == 12*x/2+2 ) == 0 or 0.63245 or -0.63245  );
	// CHECK( solve( 5*(x^2)-3*x == 14*x ) == 3.4 or 0  );
	// CHECK( solve( 4*(x^2) == -16*(x^2)/4 ) == 0 );
	// CHECK( solve( 20*(x^2)*4 == 8 ) == 0.31622 or -0.31622 );
	// CHECK( solve( (x^2)-7*x+7== 14 ) == 9.70483 or -2.70483 );
	
	// CHECK( solve( 5+3*(x^2) == 8*x ) == 1 or 1.66666 );
	// CHECK( solve( 3*(x^2)-4*x == 0 ) == 0 or 1.33333 );
	// CHECK( solve( -4*x+12 == 8*(x^2)  ) == 1 or -1.5 );
	// CHECK( solve( 2*x/10*(x^2) == 1 ) ==  );
	// CHECK( solve( 11*(x^2) == 30*x/3 ) ==  );
	// CHECK( solve( 25*(x^2)/5 == 22*x/2+x ) ==  );
	// CHECK( solve( (x^2)+x == x+5*x-3  ) ==  );
	// CHECK( solve( 5*x == 10+(x^2) ) ==  );
	// CHECK( solve( (x^2)-5*(x^2) == 6 ) ==  );
	// CHECK( solve( 6*x/2*(x^2) == 12*(x^2)/3 ) ==  );
	
	// error

	// CHECK_THROWS( solve( 2*x/10*(x^3) == 10 ) );
	// CHECK_THROWS( solve( 4*(x^2) == 1-16*(x^2)/4 ) );
	// CHECK_THROWS( solve( (x^2)-5(x^2) == (x^4) ) );
	// CHECK_THROWS( solve( (x^2)/0 == -8 ) );
	// CHECK_THROWS( solve( 3*(x^2)/3*x == x+2 ) );
// }

// TEST_CASE(" linear complex equation ") {
	// ComplexVariable y;
	
	// CHECK( solve( 5i+5.5 == 2*y+4i ) == 2.75+0.5i );
	// CHECK( solve( y-3i == 2*y-i ) == -2i );
	// CHECK( solve( -5*y+4 == 3i+y ) == 2/5-0.5i );
	// CHECK( solve( 5*y+8i == 13*y+i/2 ) == 15i/16 );
	// CHECK( solve( 2.5*y+i == 4i ) == 6i/5 );
	// CHECK( solve( -1*y == 3*5i-3*y ) == 7.5i );
	// CHECK( solve( 3*y/2 == 2+2*y/2 ) == 4 );
	// CHECK( solve( 22*y/1.1 == 2i+3*y ) == 0.11764i );
	// CHECK( solve( -2*y+12+12i == 5*y+1-4i ) == 11/7+16i/7 );
	// CHECK( solve( 20*y == 1-15i ) == 0.05-1.2i );
	
	// CHECK( solve( 12.2y+5 == 4i ) == 25/61+20i/61 );
	// CHECK( solve( y/3-i == 2*y+12 ) == 204/29-12i/29 );
	// CHECK( solve( y+4 == 3i+2 ) == -2+3i );
	// CHECK( solve( y+3+3i == 24y+i+1/2 ) ==  );
	// CHECK( solve( y == 4i/56 ) ==  );
	// CHECK( solve( y+i == -25 ) ==  );
	// CHECK( solve( 3i*4 == 5*y/2 ) ==  );
	// CHECK( solve( 8i-y == 21*y ) ==  );
	// CHECK( solve( i-y+10 == 2-4i ) ==  );
	// CHECK( solve( 3*y ==15+i) ==  );
	
	// CHECK( solve( 2*y+4i == 5i ) ==  );
	// CHECK( solve( 10i == y+3.4 ) ==  );
	// CHECK( solve( 5i-3*y-1 == 2y ) ==  );
	// CHECK( solve( 3*y == 5i/3 ) ==  );
	// CHECK( solve( 19+2i == y+i ) ==  );

// }

// TEST_CASE(" complex quadratic equation ") {
	// ComplexVariable x;
	
	// CHECK( solve( 5*(y^2)+i == 10 ) ==  );
	// CHECK( solve( 2i == -5*(y^2) ) ==  );
	// CHECK( solve( 3(i^2)/5y^2 == 12(i^2)*y ) ==  );
	// CHECK( solve( 12*y == (i^2)-i ) ==  );
	// CHECK( solve( 3*(y^2) +i == 12 ) ==  );
	// CHECK( solve( 26-y/i == (y^2) ) ==  );
	// CHECK( solve( 14*(y^2) == i+3/4 ) ==  );
	// CHECK( solve( 2+y+2*(y^2) == i  ) ==  );
	// CHECK( solve( -y +3(i^2) == i) ==  );
	// CHECK( solve( 5i+5*(y^2) == 5y ) ==  );
	
	// CHECK( solve( 13y-2i == 6*(y^2) ) ==  );
	// CHECK( solve( -2i/3*(y^2) == -9 ) ==  );
	// CHECK( solve( 4i*6y == (y^2) ) ==  );
	// CHECK( solve( (y^2) == 1 ) ==  );
	// CHECK( solve( (y^2)-12 == 6i ) ==  );
	// CHECK( solve( (y^2) == -25 ) ==  );
	// CHECK( solve( (y^2) == 25 ) ==  );
	// CHECK( solve( -(y^2) == -25 ) ==  );
	// CHECK( solve( -(y^2) == 25 ) ==  );
	// CHECK( solve( 3*(y^2)/7i == 7i -3  ) ==  );
	
	// error 
	// CHECK( solve( 3*(y^3) +i == 12 ) ==  );
	// CHECK( solve( 26-y/i == (y^4) ) ==  );
	// CHECK( solve( 14*(y^2) == i+3/4 ) ==  );
	// CHECK( solve( 2+3y+2*(y^2) == i  ) ==  );
	// CHECK( solve( -y +3(i^3) == 0 ) ==  );
// }