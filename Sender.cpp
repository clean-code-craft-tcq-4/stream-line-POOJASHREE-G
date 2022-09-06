#include <iostream>
#include <iomanip>
#include "Sender.hpp"
#include <assert.h>
using namespace std;

void CallExpectedSenderOutput(int f_Temperature_Sensor_Readings[], int f_State_Of_Charge[]) {
    int index, buffer_index = 0;
    for(index = 0; index < STANDARD_NUMBER_OF_SAMPLES; index++) {
        ExpectedSenderOutput[buffer_index]
                << left << setw(5) << "Temperature_Sensor_Reading : " << f_Temperature_Sensor_Readings[index]
                << left << setw(5) << "State_Of_Charge : " << f_State_Of_Charge[index]
                << std::endl;
        ++buffer_index;
    }
}

void CallSender(int f_Temperature_Sensor_Readings[],int f_State_Of_Charge[]) {
    int index, buffer_index = 0;
    for(index = 0; index < STANDARD_NUMBER_OF_SAMPLES; index++) {

        cout << left << setw(5) << "Temperature_Sensor_Reading : " << f_Temperature_Sensor_Readings[index]
            << left << setw(5) << "State_Of_Charge : " << f_State_Of_Charge[index]
            << std::endl;


        ActualSenderOutput[buffer_index]
                << left << setw(5) << "Temperature_Sensor_Reading : " << f_Temperature_Sensor_Readings[index]
                << left << setw(5) << "State_Of_Charge : " << f_State_Of_Charge[index]
                << std::endl;

        ++buffer_index;
    }
}

bool TestSenderOutput(int f_Temperature_Sensor_Readings[], int f_State_Of_Charge[]) {

    CallExpectedSenderOutput(int f_Temperature_Sensor_Readings[], int f_State_Of_Charge[]);
    for(int  index= 0; index < STANDARD_NUMBER_OF_SAMPLES; index++){
        if(ActualSenderOutput[index].str() != ExpectedSenderOutput[index].str()) {
            return false;
            break;
        }
    }
    return true;
}
