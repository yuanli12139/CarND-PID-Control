#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	this->Kp = Kp;
	this->Ki = Ki;
	this->Kd = Kd;

	p_error = 0.0; //previous CTE
	i_error = 0.0;
	d_error = 0.0;
}

void PID::UpdateError(double cte) {
	d_error = cte - p_error; 
	i_error += cte;
	p_error = cte;
}

double PID::TotalError() {
	return i_error;
}

