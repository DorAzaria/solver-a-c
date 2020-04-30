#include <iostream>
#include "solver.hpp"
#include "doctest.h"

using namespace  std;
using solver::RealVariable, solver::ComplexVariable , solver::solve;


TEST_CASE("Real Numbers: ") {
    RealVariable x;
            CHECK(solve(x + 1 == 2));
            CHECK(solve(x + 1.0 == 2));
            CHECK(solve(2*x + 1 == 2));
            CHECK(solve(2*x + 1.0 == 2));
            CHECK(solve(2^x + 1 == 2));
            CHECK(solve(5^x + 2 == 1.0));
            CHECK(solve(7^x + 1 == 2));
            CHECK(solve(x/3 + 1 == 0002));
            CHECK(solve(x/423.6 + 1 == 2));
            CHECK(solve(1 + 4*x == 2));
            CHECK(solve(1.3 + 5*x == 2121));
            CHECK(solve(x/6 + 4*x== 2));
            CHECK(solve(2^x + 4*x== 2));
            CHECK(solve(3^x+ 4/x== 2));
            CHECK(solve(1-x + 4*x== 2));
            CHECK(solve(x-1 + x*402== 2));
            CHECK(solve(1-x + (4*6.7)== 2.92183));
            CHECK(solve(6.93^x + 4*x== 22110));
            CHECK(solve(1-x + 4*x== 2));
            CHECK(solve(x-6 + (7/x) + 4*x== 2210));
            CHECK(solve(4*x==0));
            CHECK(solve((x^2) + 4.0 == 20 + 6.0*x/2 - x));
            CHECK(solve(4.0 == 20 + 6.0*x/2 - x));
            CHECK(solve((x^2) + 2*x + 4.0 == 20 - x));
            CHECK(solve((x^2) + 2*x == 6.0*x/2 - x));
            CHECK(solve((x^2) == 6.0*x/2));
            CHECK(solve((x^2) + (2*x) + 4.0 == 7*x/2 - x + 8));
            CHECK(solve((x*2) + (2*x) + 4.0 == 7*x/2 - x + 8));
            CHECK(solve((x*7) + 293874.97 == 7*x/2 - x*932 + 8));
            CHECK(solve((x*7) + 293874.97 == x*932 + 8));
            CHECK(solve(293874.97 + (x*7) == x*932 + 8));
            CHECK(solve((x*7) == x*932));
            CHECK(solve((x*4357) == x*932));
            CHECK(solve(x/7== 8*4*x + x/5));
            CHECK(solve(x/229== 8*4*x + x/5.0));
            CHECK(solve(x/229.0== 8*4.0*x + x/5));
            CHECK(solve(8/9/x== 8*x + x/12/3.45));
            CHECK(solve(6^x == 8*x + 1));
            CHECK(solve(x==x/1.322/3.453022));
            CHECK(solve(x/32==x/1.322));
            CHECK(solve(1681692777*x +846930886 == 1804289383));
            CHECK(solve(424238335*x +1957747793 == 1714636915));
            CHECK(solve(596516649*x +1649760492 == 719885386));
            CHECK(solve(1350490027*x +1025202362 == 1189641421));
            CHECK(solve(2044897763*x +1102520059 == 783368690));
            CHECK(solve(1540383426*x +1365180540 == 1967513926));
            CHECK(solve(1681692777^x +846930886 == 1804289383));
            CHECK(solve(424238335^x +1957747793 == 1714636915));
            CHECK(solve(596516649^x +1649760492 == 719885386));
            CHECK(solve(1350490027^x +1025202362 == 1189641421));
}

TEST_CASE("Complex Numbers") {
    ComplexVariable y;

    CHECK_THROWS(solve(y+5i == 2*y+3i));
    CHECK_THROWS(solve(y+5i == 2*y));
    CHECK_THROWS(solve(y == 2i*y));
    CHECK_THROWS(solve(y+6.734i == 2.42*y+3i));
    CHECK_THROWS(solve(5i+y == 3i + 2*y));
    CHECK_THROWS(solve(5i+ 5*y == 3i + 2*y));
    CHECK_THROWS(solve(y+394.988544i == 840.347529*y));
    CHECK_THROWS(solve(y+798.641593i == 783.316125*y));
    CHECK_THROWS(solve(y+198.353818i == 911.735711*y));
    CHECK_THROWS(solve(y*394.988544i == 840.347529-y));
    CHECK_THROWS(solve(y*798.641593i == 783.316125-y));
    CHECK_THROWS(solve(y*198.353818i == 911.735711-y));
    CHECK_THROWS(solve(y*768.461365i == 335.887533-y));
    CHECK_THROWS(solve(y*554.415986i == 278.496936-y));
    CHECK_THROWS(solve(y*394.988544i == 840.347529-3i));
    CHECK_THROWS(solve(y*798.641593i == 783.316125-2i));
    CHECK_THROWS(solve(y*198.353818i == 911.735711-412i));
    CHECK_THROWS(solve(y*768.461365i == 335.887533-9523.532032i));
    CHECK_THROWS(solve(394.988544i+3*y == 840.347529i));
    CHECK_THROWS(solve(798.641593i+3*y == 783.316125i));
    CHECK_THROWS(solve(198.353818i+3*y == 911.735711i));
    CHECK_THROWS(solve(768.461365i+3*y == 335.887533i));
    CHECK_THROWS(solve(554.415986i+3*y == 278.496936i));
    CHECK_THROWS(solve(394.988544i+53.23*y == 840.347529i-y));
    CHECK_THROWS(solve(798.641593i+432.5235*y == 783.316125i-y));
    CHECK_THROWS(solve(198.353818i+323.65*y == 911.735711i-y));
    CHECK_THROWS(solve(768.461365i+23*y == 335.887533i-y));
    CHECK_THROWS(solve(554.415986i+1432432.630*y == 278.496936i-y));
    CHECK_THROWS(solve(629.242054i+12342.0*y == 477.919655i-y));
    CHECK_THROWS(solve(513.887509i+143.50*y == 365.419688i-y));
    CHECK_THROWS(solve(916.278873i+10*y == 952.277495i-y));
    CHECK_THROWS(solve(717.579633i+ 10/y + 5*y == 636.076016i-y));
    CHECK_THROWS(solve(607.361907i+10*y == 142.460953i-y));
    CHECK_THROWS(solve(804.372577i+138.094345*y == 243.643884i-17.284271*y));
    CHECK_THROWS(solve(109.699993i+130.660656*y == 401.543450i-157.522410*y));
    CHECK_THROWS(solve(839.273122i+513.419462*y == 219.038648i-998.925593*y));
    CHECK_THROWS(solve(524.762903i+637.914715*y == 296.735586i-613.027193*y));
    CHECK_THROWS(solve(771.586340i+293.224268*y == 972.802249i-494.089404*y));
    CHECK_THROWS(solve(798.641593i+783316125*y+43223.42i == 394.988544i/840.347529*y));
    CHECK_THROWS(solve(768.461365i+335.887533*y+5325.232i == 198.353818i/911.735711*y));
    CHECK_THROWS(solve(629.242054i+477.919655*y+4324.3i == 554.415986i/278.496936*y));
    CHECK_THROWS(solve(916.278873i-952.277495*y+432.423i == 513.887509i/365.419688*y));
    CHECK_THROWS(solve(607.361907i-142.460953*y+5354.23i == 717.579633i/636.076016*y));
    CHECK_THROWS(solve(804.372577i+138.094345*y+4323.323i == 243.643884i/17.284271/y));
    CHECK_THROWS(solve(2323*y+4323.323i == 243.643884i));
    CHECK_THROWS(solve(2323*y-32323.5323i == 2323.6884i));
    CHECK_THROWS(solve(911.735711i+798.641593*y+783.316125i == 394.988544i-840.347529*y));
    CHECK_THROWS(solve(554.415986i+278.496936*y+768.461365i == 335.887533i-198.353818*y));
    CHECK_THROWS(solve(952.277495i+513.887509*y+365.419688i == 629.242054i-477.919655*y));
    CHECK_THROWS(solve(607.361907i+142.460953*y+717.579633i == 636.076016i-916.278873*y));
    CHECK_THROWS(solve(157.522410i+804.372577*y+138.094345i == 243.643884i-17.284271*y));
    CHECK_THROWS(solve(219.038648i+998.925593*y+109.699993i == 130.660656i-401.543450*y));


}

