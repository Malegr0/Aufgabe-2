#pragma once

class ComplexNumbers {
private:
	float m_imag;
	float m_real;
	float m_absolute_amount;
	float m_angle;

public:
	ComplexNumbers(char inputType, float valueA, float valueB);

	void setMImag(float imag) {
		this->m_imag = imag;
	}

	void setMReal(float real) {
		this->m_real = real;
	}

	void setMAbsoluteAmount(float absoluteAmount) {
		this->m_absolute_amount = absoluteAmount;
	}

	void setMAngle(float angle) {
		this->m_angle = angle;
	}

};