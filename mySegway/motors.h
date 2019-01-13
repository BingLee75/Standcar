#ifndef MOTORS_H_INCLUDED
#define MOTORS_H_INCLUDED

void init_motors();
void stop_motors();
void motors(double speed, double left_offset, double right_offset);
#endif // MOTORS_H_INCLUDED
