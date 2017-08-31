//
// Created by Asher on 5/3/17.
//

#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(float U, float V, bool isPolar) {
	if(isPolar)
	{
		real = U*cos(V);
		complex = U*sin(V);
	}
	else
	{
		real=U;
		complex=V;
	}
	
}

ComplexNumber& ComplexNumber::operator*=(float val) {
	
	real*=val;
	complex*=val;
	return *this;
}

ComplexNumber& ComplexNumber::operator/=(float val) {
	
	real/=val;
	complex/=val;
	return *this;
}

float ComplexNumber::getReal() {
	return real;
}

float ComplexNumber::getComplex() {
	return complex;
}

float ComplexNumber::getAbsVal() {
	return sqrt(real*real+complex*complex);
}

std::ostream &operator<<(std::ostream &stream, const ComplexNumber num) {
	stream << num.real << "+" << num.complex << "i";
	return stream;
}

ComplexNumber ComplexNumber::operator+(ComplexNumber num1) {
	return ComplexNumber(real+num1.real, complex+num1.complex);
}
