#include "PID.h"

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;
  
  p_error = 0;
  i_error = 0;
  d_error = 0;
}

void PID::UpdateError(double cte) {
  double diff_cte = cte - p_error;
  double int_cte = cte + i_error;
  
  p_error = cte;
  i_error = int_cte;
  d_error = diff_cte;
}

double PID::TotalError() {
  double error = - Kp * p_error - Ki * i_error - Kd * d_error;
  return error;
}