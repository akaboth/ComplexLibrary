//
// Created by Asher on 5/3/17.
//

#ifndef COMPLEXNUMBER_COMPLEXNUMBER_H
#define COMPLEXNUMBER_COMPLEXNUMBER_H

#include <cmath>
#include <iostream>

class ComplexNumber
{
public:
	ComplexNumber(float U, float V, bool isPolar= false);
	ComplexNumber& operator*=(float val);
	ComplexNumber& operator/=(float val);
	ComplexNumber operator+(ComplexNumber num1);
	friend std::ostream& operator<<(std::ostream& stream, const ComplexNumber num);
	float getReal();
	float getComplex();
	float getAbsVal();

private:
	float real;
	float complex;
	
};


#endif //COMPLEXNUMBER_COMPLEXNUMBER_H
