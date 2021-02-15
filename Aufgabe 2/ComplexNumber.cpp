#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <string>
#include "ComplexNumber.h"

int ComplexNumber::s_numberOfInstances = 0;

float ComplexNumber::calculateAbsoluteAmountWithCart(float real, float imag) const {
	return std::sqrt(real * real + imag * imag);
}

float ComplexNumber::calculateAngleWithCart(float real, float imag, float absoluteAmount) const {
	if (imag >= 0) {
		return std::acos(real / absoluteAmount);
	} else {
		return 2 * M_PI - std::acos(real / absoluteAmount);
	}
}

float ComplexNumber::calculateImagWithPolar(float absoluteAmount, float angle) const {
	return absoluteAmount * std::cos(angle);
}

float ComplexNumber::calculateRealWithPolar(float absoluteAmount, float angle) const {
	return absoluteAmount * std::sin(angle);
}

std::string ComplexNumber::toCartesianString() const{
	if (m_initialInputType == 'c') {
		//if already in cartesian form then just output both variables
		return "z = " + std::to_string(m_valueA) + " + " + std::to_string(m_valueB) + "i";
	}
	else {
		//if not in cartesian form then calculate values for output
		return "z = " + std::to_string(calculateRealWithPolar(m_valueA, m_valueB)) + " + " + std::to_string(calculateImagWithPolar(m_valueA, m_valueB)) + "i";
	}
}

std::string ComplexNumber::toPolarString() const {
	if (m_initialInputType == 'p') {
		//if already in polar form then just output both variables
		return "z = " + std::to_string(m_valueA) + " *e^( " + std::to_string(m_valueB) + "i)";
	}
	else {
		//if not in polar form then calculate values for output
		return "z = " + std::to_string(calculateAbsoluteAmountWithCart(m_valueA, m_valueB)) + " * e^( " + std::to_string(calculateAngleWithCart(m_valueA, m_valueB, calculateAbsoluteAmountWithCart(m_valueA, m_valueB))) + "i)";
	}
}
