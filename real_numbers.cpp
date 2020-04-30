#include "solver.hpp"
#include <complex>
using namespace solver;
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// +++++++++ Real NUMBERS +++++++++++++++++++++++++++++++++++++++++++++++
// Minus Operator
RealVariable solver::operator-(const RealVariable& x, double c){ //x-c
    RealVariable sol;
    return sol;
}
RealVariable solver::operator-(const RealVariable& x, RealVariable c){ //x-x
    RealVariable sol;
    return sol;
}
RealVariable solver::operator-(double c, const RealVariable& x ){ // c-x
    RealVariable sol;
    return sol;
}
//-------------------------------------
// Equal Operator
RealVariable solver::operator==(const RealVariable& x, double c){ // x == c
    RealVariable sol;
    return sol;
}
RealVariable solver::operator==(const RealVariable& x, const RealVariable& c){ // x == x
    RealVariable sol;
    return sol;
}
RealVariable solver::operator==(double c, RealVariable x){ // c == x
    RealVariable sol;
    return sol;
}
//-------------------------------------
// Multiply Operator
RealVariable solver::operator*(const RealVariable& x, double c){ // x*c
    RealVariable sol;
    return sol;
}
RealVariable solver::operator*(const RealVariable& x, RealVariable c){ // x*x
    RealVariable sol;
    return sol;
}
RealVariable solver::operator*(double c, const RealVariable& x){ // c*x
    RealVariable sol;
    return sol;
}
//-------------------------------------
// Exponent
RealVariable solver::operator^(const RealVariable& x, double c){ //x^c
    RealVariable sol;
    return sol;
}
RealVariable solver::operator^(const RealVariable& x, const RealVariable& c){ // x^x
    RealVariable sol;
    return sol;
}
RealVariable solver::operator^(double c, const RealVariable& x){ // c^x
    RealVariable sol;
    return sol;
}
//-------------------------------------
// Addition
RealVariable solver::operator+(const RealVariable& x, double c){ //x+c
    RealVariable sol;
    return sol;
}
RealVariable solver::operator+(const RealVariable& x, const RealVariable& c){ // x+x
    RealVariable sol;
    return sol;
}
RealVariable solver::operator+(double c, const RealVariable& x){ // c+x
    RealVariable sol;
    return sol;
}
//-------------------------------------
// Divide
RealVariable solver::operator/(const RealVariable& x, double c){ //x/c
    RealVariable sol;
    return sol;
}
RealVariable solver::operator/(const RealVariable& x, const RealVariable& c){ // x/x
    RealVariable sol;
    return sol;
}
RealVariable solver::operator/(double c, const RealVariable& x){ // c/x
    RealVariable sol;
    return sol;
}
//-------------------------------------

// Solve Global Function
double solver::solve(const RealVariable& Real){
    return 1;
}