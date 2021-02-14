#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include "ComplexNumber.h"

ComplexNumbers::ComplexNumbers(char inputType, float valueA, float valueB) {
	if (inputType == 'p') {

	}
	else if (inputType == 'k') {

	}

}

float ComplexNumbers::calculateAbsoluteAmountWithCoord(float real, float imag) {
	return std::sqrt(real * real + imag * imag);
}

float ComplexNumbers::calculateAngleWithCoord(float real, float imag, float absoluteAmount) {
	if (imag >= 0) {
		return std::acos(real / absoluteAmount);
	} else {
		return 2 * M_PI - std::acos(real / absoluteAmount);
	}
}

float ComplexNumbers::calculateImagWithPolar(float absoluteAmount, float angle) {
	return absoluteAmount * std::cos(angle);
}

float ComplexNumbers::calculateRealWithPolar(float absoluteAmount, float angle) {
	return absoluteAmount * std::sin(angle);
}
