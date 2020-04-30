#ifndef SOLVER_A_MASTER_SOLVER_HPP
#define SOLVER_A_MASTER_SOLVER_HPP
#include <iostream>
using namespace std;
#include <complex>

namespace solver {

    class RealVariable{
    private:
        double _a, _x, _b;
    public:
        //-------------------------------------
        //Init list - initial the variables
        RealVariable(): _a(0), _x(0), _b(0){}
        //-------------------------------------
        // Friend Binary Operators Functions
        friend RealVariable operator-(const RealVariable& x, double c) ; //x-c
        friend RealVariable operator-(const RealVariable& x, RealVariable c); //x-x
        friend RealVariable operator- (double c, const RealVariable& x); //c-x

        friend RealVariable operator* (const RealVariable& x, double c); //x*c
        friend RealVariable operator*(const RealVariable& x, RealVariable c); //x*x
        friend RealVariable operator* (double c, const RealVariable& x); //c*x

        friend RealVariable operator==(const RealVariable& x, double c); // x == c
        friend RealVariable operator==(const RealVariable& x, const RealVariable& c); // x == x
        friend RealVariable operator==(double c, RealVariable x); // c == x

        friend RealVariable operator^(const RealVariable& x, double c); // x^c
        friend RealVariable operator^(const RealVariable& x, const RealVariable& c); // x^x
        friend RealVariable operator^(double c, const RealVariable& x); // c^x

        friend RealVariable operator+(const RealVariable& x, double c); // x+c
        friend RealVariable operator+(const RealVariable& x, const RealVariable& c); // x+x
        friend RealVariable operator+(double c, const RealVariable& x); // c+x

        friend RealVariable operator/(const RealVariable& x, double c); // x/c
        friend RealVariable operator/(const RealVariable& x, const RealVariable& c); // x/x
        friend RealVariable operator/(double c, const RealVariable& x); // c/x
        //-------------------------------------
    }; //End of class RealVariable

    double solve(const RealVariable& Real);

    // a + real*image
    class ComplexVariable {
    private:
        double _real;
        complex<double> _imag;
    public:
        //-------------------------------------
        //Init list - initial the variables
        ComplexVariable(){}
        ComplexVariable(double re, complex<double> im){
            _real=re;
            _imag=im;
        }
        //-------------------------------------
        // Friend Binary Operators Functions
        friend ComplexVariable& operator-( ComplexVariable& x, double c) ; //x-c
        friend ComplexVariable& operator-( ComplexVariable& x, ComplexVariable& c); //x-x
        friend ComplexVariable& operator- (double c,  ComplexVariable& x); //c-x
        friend ComplexVariable& operator-(ComplexVariable& x, std::complex<double> i) ; //x-i
        friend ComplexVariable& operator-(std::complex<double> i, ComplexVariable& x) ; //i-x

        friend ComplexVariable& operator* ( ComplexVariable& x, double c); //x*c
        friend ComplexVariable& operator*( ComplexVariable& x, ComplexVariable& c); //x*x
        friend ComplexVariable& operator* (double c,  ComplexVariable& x); //c*x
        friend ComplexVariable& operator*( ComplexVariable& x, std::complex<double> i) ; //x*i
        friend ComplexVariable& operator*(std::complex<double> i,  ComplexVariable& x) ; //i*x

        friend ComplexVariable& operator==( ComplexVariable& x, double c); // x == c
        friend ComplexVariable& operator==( ComplexVariable& x, ComplexVariable& c); // x == x
        friend ComplexVariable& operator==(double c, ComplexVariable& x); // c == x
        friend ComplexVariable& operator==( ComplexVariable& x, std::complex<double> i) ; //x==i

        friend ComplexVariable& operator^( ComplexVariable& x, double c); // x^c

        friend ComplexVariable& operator+(ComplexVariable& x, double c); // x+c
        friend ComplexVariable& operator+( ComplexVariable& x,  ComplexVariable& c); // x+x
        friend ComplexVariable& operator+(double c,  ComplexVariable& x); // c+x
        friend ComplexVariable& operator+(ComplexVariable& x, std::complex<double> i) ; //x+i
        friend ComplexVariable& operator+(std::complex<double> i,  ComplexVariable& x) ; //i+x

        friend ComplexVariable& operator/( ComplexVariable& x, double c); // x/c
        friend ComplexVariable& operator/( ComplexVariable& x,  ComplexVariable& c); // x/x
        friend ComplexVariable& operator/(double c,  ComplexVariable& x); // c/x
        friend ComplexVariable& operator/( ComplexVariable& x, std::complex<double> i) ; //x/i
        friend ComplexVariable& operator/(std::complex<double> i,  ComplexVariable& x) ; //i/x
            //-------------------------------------

    };
    complex<double> solve(ComplexVariable& c);
};
#endif //SOLVER_A_MASTER_SOLVER_HPP
