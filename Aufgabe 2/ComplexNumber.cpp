#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(char inputType, float valueA, float valueB) {
	this->initialInputType = inputType;
	this->valueA = valueA;
	this->valueB = valueB;
}

float ComplexNumber::calculateAbsoluteAmountWithCoord(float real, float imag) {
	return std::sqrt(real * real + imag * imag);
}

float ComplexNumber::calculateAngleWithCoord(float real, float imag, float absoluteAmount) {
	if (imag >= 0) {
		return std::acos(real / absoluteAmount);
	} else {
		return 2 * M_PI - std::acos(real / absoluteAmount);
	}
}

float ComplexNumber::calculateImagWithPolar(float absoluteAmount, float angle) {
	return absoluteAmount * std::cos(angle);
}

float ComplexNumber::calculateRealWithPolar(float absoluteAmount, float angle) {
	return absoluteAmount * std::sin(angle);
}

std::string ComplexNumber::toCartesianString() {
	if (this->initialInputType == 'c') {
		//if already in cartesian form then just output both variables
	}
	else {
		//if not in cartesian form then calculate values for output
	}
}

std::string ComplexNumber::toPolarString() {
	if (this->initialInputType == 'p') {
		//if already in polar form then just output both variables
	}
	else {
		//if not in polar form then calculate values for output
	}
}
