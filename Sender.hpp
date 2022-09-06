#ifndef SENDER_HPP
#define SENDER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

const int STANDARD_NUMBER_OF_SAMPLES = 50;
std::stringstream ActualSenderOutput[STANDARD_NUMBER_OF_SAMPLES], ExpectedSenderOutput[STANDARD_NUMBER_OF_SAMPLES];

bool TestSenderOutput(int f_Temperature_Sensor_Readings[], int f_State_Of_Charge[]);
void CallSender(int f_Temperature_Sensor_Readings[],int f_State_Of_Charge[]);
void CallExpectedSenderOutput(int f_Temperature_Sensor_Readings[], int f_State_Of_Charge[]);

#endif