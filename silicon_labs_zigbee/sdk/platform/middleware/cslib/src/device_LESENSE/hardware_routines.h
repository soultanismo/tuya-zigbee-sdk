/**************************************************************************//**
 * Copyright 2016 by Silicon Laboratories Inc. All rights reserved.
 *
 * http://developer.silabs.com/legal/version/v11/Silicon_Labs_Software_License_Agreement.txt
 *****************************************************************************/

#ifndef HARDWARE_ROUTINES_H
#define HARDWARE_ROUTINES_H

// Note: the functions below are hardware-specific callbacks used by the library to
// perform capacitive sense scanning.  All must be defined
// in the project in order for the library to function correctly.
uint16_t executeConversion(void);
uint32_t CSLIB_scanSensorCB(uint8_t);
void CSLIB_configureSensorForActiveModeCB(void);
void nodeInit(uint8_t sensor_index);
uint8_t determine_highest_gain(void);

#endif // HARDWARE_ROUTINES_H
