#pragma once

class ComplexNumbers {
private:
	float m_imag;
	float m_real;
	float m_absoluteAmount;
	float m_angle;

public:
	ComplexNumbers(char inputType, float valueA, float valueB);

	float calculateAbsoluteAmountWithCoord(float real, float imag);

	float calculateAngleWithCoord(float real, float imag);

	float calculateImagWithPolar(float absoluteAmount, float angle);

	float calculateRealWithPolar(float absoluteAmount, float angle);

	void setMImag(float imag) {
		this->m_imag = imag;
	}

	void setMReal(float real) {
		this->m_real = real;
	}

	void setMAbsoluteAmount(float absoluteAmount) {
		this->m_absoluteAmount = absoluteAmount;
	}

	void setMAngle(float angle) {
		this->m_angle = angle;
	}
	
	float mImag() {
		return m_imag;
	}

	float mReal() {
		return m_imag;
	}

	float mAbsoluteAmount() {
		return m_absoluteAmount;
	}

	float mAngle() {
		return m_angle;
	}
};