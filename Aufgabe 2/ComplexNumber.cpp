#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <string>
#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(char inputType, float valueA, float valueB) {
	this->initialInputType = inputType;
	this->valueA = valueA;
	this->valueB = valueB;
}

float ComplexNumber::calculateAbsoluteAmountWithCart(float real, float imag) {
	return std::sqrt(real * real + imag * imag);
}

float ComplexNumber::calculateAngleWithCart(float real, float imag, float absoluteAmount) {
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
	if (initialInputType == 'c') {
		//if already in cartesian form then just output both variables
		return "z = " + std::to_string(valueA) + " + " + std::to_string(valueB) + "i";
	}
	else {
		//if not in cartesian form then calculate values for output
		return "z = " + std::to_string(calculateRealWithPolar(valueA, valueB)) + " + " + std::to_string(calculateImagWithPolar(valueA, valueB)) + "i";
	}
}

std::string ComplexNumber::toPolarString() {
	if (initialInputType == 'p') {
		//if already in polar form then just output both variables
		return "z = " + std::to_string(valueA) + " *e^( " + std::to_string(valueB) + "i)";
	}
	else {
		//if not in polar form then calculate values for output
		return "z = " + std::to_string(calculateAbsoluteAmountWithCart(valueA, valueB)) + " * e^( " + std::to_string(calculateAngleWithCart(valueA, valueB, calculateAbsoluteAmountWithCart(valueA, valueB))) + "i)";
	}
}
