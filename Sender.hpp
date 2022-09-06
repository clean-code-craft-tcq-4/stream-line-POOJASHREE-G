#ifndef SENDER_HPP
#define SENDER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

bool TestSenderOutput(int f_Temperature_Sensor_Readings[], int f_State_Of_Charge[]);
void CallSender(int f_Temperature_Sensor_Readings[],int f_State_Of_Charge[]);
void CallExpectedSenderOutput(int f_Temperature_Sensor_Readings[], int f_State_Of_Charge[]);

#endif