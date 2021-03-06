#pragma once
//------------------------------------------------------------------------------
// Makelangelo - firmware for various robot kinematic models
// dan@marginallycelver.com 2013-12-26
// Please see http://www.github.com/MarginallyClever/makelangeloFirmware for more information.
//------------------------------------------------------------------------------

#if MOTHERBOARD == BOARD_ARDUINO_UNO
#  define MAX_MOTORS (2)
#  define MAX_BOARD_SERVOS (1)

#  define MOTOR_0_LETTER           'X'
#  define MOTOR_0_DIR_PIN          (29)
#  define MOTOR_0_STEP_PIN         (28)
#  define MOTOR_0_ENABLE_PIN       (19)
#  define MOTOR_0_LIMIT_SWITCH_PIN (26)

#  define MOTOR_1_LETTER           'Y'
#  define MOTOR_1_DIR_PIN          (31)
#  define MOTOR_1_STEP_PIN         (30)
#  define MOTOR_1_ENABLE_PIN       (18)
#  define MOTOR_1_LIMIT_SWITCH_PIN (27)

#  define NUM_BOARD_SERVOS (1)
#  define SERVO0_PIN       (24)

#  define LIMIT_SWITCH_PIN_LEFT  (MOTOR_0_LIMIT_SWITCH_PIN)
#  define LIMIT_SWITCH_PIN_RIGHT (MOTOR_1_LIMIT_SWITCH_PIN)

#  define USE_ALT_SERVO

#  undef HAS_LCD
#  undef HAS_SD

#endif
