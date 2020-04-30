#include "doctest.h"
#include <iostream>
#include <complex>
#include "solver.hpp"

using namespace std;
using namespace solver;

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

TEST_CASE(" real Quadratic equation ") {
	RealVariable x;
	CHECK( solve(12+5.1*x == 5*x+2) == -100.0 );
	CHECK( (solve( 17*(x^2) == 17 ) == 1 || solve( 17*(x^2) == 17 ) == -1)   );
	CHECK( (solve( (x^2)+5 == 30 ) == 5 ||solve( (x^2)+5 == 30 ) == -5 ) );
	CHECK( (solve( 3*(x^2)-6*x == 9 ) == 3 || solve( 3*(x^2)-6*x == 9 ) == -1) );
	CHECK( solve( 4*(x^2)/2 == 12*x^2/4 ) == 0 ) ;
	CHECK( (solve( 21*(x^2)-6*(x^2)+x-5 )== 13 == 1.06261 || solve( 21*(x^2)-6*(x^2)+x-5 == 13 ) == -1.12928 ) );
	CHECK( (solve( 10*(x^2)/(2*x) == 12*x/2+2 ) == 0 || solve( 10*(x^2)/(2*x) == 12*x/2+2 ) == 0.63245 || solve( 10*(x^2)/(2*x) == 12*x/2+2 ) == -0.63245)  );
	CHECK( (solve( 5*(x^2)-3*x == 14*x ) == 3.4 || solve( 5*(x^2)-3*x == 14*x ) == 0 ) );
	CHECK( solve( 4*(x^2) == -16*(x^2)/4 ) == 0 );
	CHECK( (solve( 20*(x^2)*4 == 8 ) == 0.31622 || solve( 20*(x^2)*4 == 8 ) == -0.31622) );
	CHECK( (solve( (x^2)-7*x+7== 14 ) == 9.70483 ||solve( (x^2)-7*x+7== 14 ) == -2.70483) );
	CHECK( (solve( 5+3*(x^2) == 8*x ) == 1 || solve( 5+3*(x^2) == 8*x ) == 1.66666) );
	CHECK( (solve( 3*(x^2)-4*x == 0 ) == 0 || solve( 3*(x^2)-4*x == 0 ) == 1.33333 ));
	CHECK( (solve( -4*x+12 == 8*(x^2)  ) == 1 || solve( -4*x+12 == 8*(x^2)  ) == -1.5) );
	CHECK( solve( 10*(x^2)/10*x == 1 ) == 1  );
	CHECK( (solve( 11*(x^2) == 30*x/3 ) == 10/11 || solve( 11*(x^2) == 30*x/3 ) == 0 ));
	CHECK( (solve( 25*(x^2) == 22*x/2 ) == 11/25 || solve( 25*(x^2) == 22*x/2 ) == 0  ));
	CHECK( (solve( (x^2)+x == x+5*x-3  ) == 4.3027 || solve( (x^2)+x == x+5*x-3  ) == 0.6972)  );
	CHECK( (solve( (x^2)+5*(x^2) == 6 ) == 1 || solve( (x^2)+5*(x^2) == 6 ) == -1 ));
	CHECK( (solve( 6*x/2*(x^2) == 12*(x^2)/3 ) == 4/3 || solve( 6*x/2*(x^2) == 12*(x^2)/3 ) == 0) );

	CHECK_THROWS( solve( 5*x == 10+(x^2) )  );
	CHECK_THROWS( solve( 2*x/10*(x^3) == 10 ) );
	CHECK_THROWS( solve( 4*(x^4) == 1-16*(x^2)/4 ) );
	CHECK_THROWS( solve( (x^2)-5*(x^2) == (x^4) ) );
	CHECK_THROWS( solve( (x^2)/0 == -8 ) );
	CHECK_THROWS( solve( 3*(x^3) == x+2 ) );
}

TEST_CASE(" linear complex equation ") {
	ComplexVariable y;
	
	CHECK( solve( 5i+5.5 == 2*y+4i ) == 2.75+0.5i );
	CHECK( solve( y-3i == 2*y-1i ) == -2i );
	CHECK( solve( 5*y+8i == 13*y+0.5i ) == 0.9375i);
	CHECK( solve( 2.5*y+1i == 4i ) == 1.2i );
	CHECK( solve( -1*y == 15i-3*y ) == 7.5i );
	CHECK( solve( 3*y/2 == 2+2*y/2 ) == 4.0 );
	CHECK( solve( 22*y/1.1 == 2i+3*y ) == 0.11764i );
	CHECK( solve( -2*y+12+12i == 5*y+1-4i ) == 1.5714 + 2.2857i);
	CHECK( solve( 20*y == 1.0-15i ) == 0.05-1.2i );
	
	CHECK( solve( 5+12.2*y == 4i ) == 0.4098+0.3278i );
	CHECK( solve( y/3-1i == 2*y+12 ) == 7.0344-0.4137i );
	CHECK( solve( y+4 == 3i+2.0 ) == -2.0+3i );
	CHECK( solve( y+3+3i == 24*y+1i+0.5 ) == 0.1086 + 0.0869i );
	CHECK( solve (y == 0.0714i) == 0.0714i );
	CHECK( solve( y+1i == -25 ) == -25.0-1i );
	CHECK( solve( 12i == 5*y/2 ) == 4.8i );
	CHECK( solve( 8i-y == 21*y ) == 0.3636i );
	CHECK( solve( 1i-y+10 == 2.0-4i ) == 8.0+5i );
	CHECK( solve( 3*y ==15.0+1i ) == 5.0+0.3333i );
	
	CHECK( solve( 2*y+4i == 5i ) == 0.5i );
	CHECK( solve( 10i == y+3.4 ) == 10i-3.4 );
	CHECK( solve( 5i-3*y-1 == 2*y ) == -0.2+1i );
	CHECK( solve( 3*y == 1.6666i ) == 0.5555i );
	CHECK( solve( 19.0+2i == y+1i ) == 19.0+1i );

}

TEST_CASE(" complex quadratic equation ") {
	ComplexVariable y;
    std::complex<double> i;
	CHECK( (solve( 5*(y^2)+1i == 10.0 + 1i ) == -1.4142 || solve( 5*(y^2)+1i == 10.0 + 1i ) == 1.4142)   );
	CHECK( (solve( 16.0 + 1i == 1i + (y^2) ) == 4.0 || solve( 16.0 + 1i == 1i + (y^2) ) == -4.0) );
	CHECK( (solve( 3.0*(1i^2)/(5*(y^2)) == 12.0*(1i^2)*y ) == 20.0 || solve (3.0*(1i^2)/(5*(y^2)) == 12.0*(1i^2)*y ) == 0.0 ));
	CHECK( solve( 12*y == (i^2)-1i ) ==  -0.0833 - 0.0833i);
	CHECK( (solve( (y^2) - 2*y - y*i-1.0 == -7i  ) == -1.0+2i || solve( (y^2) - 2*y - y*i-1.0== -7i  ) == 3.0-1i) );
	CHECK( (solve( (y^2) - 3*y -2i*y== -1i-5.0  ) == 1.0-1i || solve( (y^2) - 3*y -2i*y== -1i-5.0  ) == 2.0+3i ) );
	CHECK( (solve( 2*(y^2) - 11*y+2i == -14.0-1i+3i ) == 3.5 || solve( 2*(y^2) - 11*y+2i == -14.0-1i+3i ) == 2.0 ) );
	CHECK( (solve( 3*(y^2) == -6.0  ) == 1.4142i || solve( 3*(y^2) == -6.0  ) == -1.4142i  ));
	CHECK( (solve( 5*(y^2) -4*y == -1.0) == 0.4 - 0.2i || solve( 5*(y^2) -4*y == -1.0) == 0.4 + 0.2i  ));
	CHECK( (solve( (y^2) == 4*y - 5.0 ) == 2.0+1i || solve( (y^2) == 4*y - 5.0 ) == 2.0-1i  ));

    CHECK( solve( -2.0*y+1i == 1i*(y^2) ) == 1i );
    CHECK( (solve( (y^2) == -9.0 ) == 3i || solve( -1.5i*(y^2) == -9.0 ) == -3i) );
    CHECK( (solve( y == 1i*(y^2)-6i ) == 2.5-0.5i || solve( y == 1i*(y^2)-6i ) == -2.5-0.5i) );
    CHECK( (solve( (y^2) == -25.0 ) == 5i || solve( (y^2) == -25.0 ) == -5i) );
    CHECK( (solve( -1*y+2i == 3i*(y^2) ) == 8.33333333+0.16666666i || solve( -1*y+2i == 3i*(y^2) ) == -8.33333333+0.16666666i ));
    CHECK( (solve( (y^2)-(60.0+2i)/2.0 == 1i-30.0 ) == 1.0+1i || solve( (y^2)-(60.0+2i)/2.0 == 1i-30.0) == -1.0-1i));
    CHECK( (solve( (y^2)-1i*y == 5.0 ) == 2.0+1i || solve( (y^2)-1i*y == 5.0 ) == -2.0+1i) );
    CHECK( (solve( -1*(y^2) == -6-1i*y ) == 2.5 +0.5i || solve( -1*(y^2) == -6.0-1i*y ) == -2.5+0.5i) );
    CHECK( (solve( 1i*(y^2)-5*y == 4i ) == -4i || solve( 1i*(y^2)-5*y == 4i ) == -1i) );
    CHECK( (solve( -1*(y^2)/10i == -0.1i ) == 1i || solve( -1*(y^2)/10i == -0.1i ) == -1i) );

    CHECK_THROWS( solve( 3*(y^6)+1i == 12.0 ) );
    CHECK_THROWS( solve( 26.0-y == (y^4) ) );
    CHECK_THROWS( solve( 14*(y^3) == 1i+0.75 ) );
    CHECK_THROWS( solve( 2.0+3*y+2*(y^12) == 1i  ) );
    CHECK_THROWS( solve( -1i+3*(y^3) == 0 ) );
}

