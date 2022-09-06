#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include <iostream>
#include <sstream>
#include <cassert>
#include "Sender.hpp"
using namespace std;

extern const int STANDARD_NUMBER_OF_SAMPLES = 50;
extern std::stringstream ActualSenderOutput[STANDARD_NUMBER_OF_SAMPLES], ExpectedSenderOutput[STANDARD_NUMBER_OF_SAMPLES];

TEST_CASE("PASSING TEST CASE 1") {
    int Temperature_Sensor_Readings [] = { 0 };
    int State_Of_Charge [] = { 0 };
    for(int index = 1; index <= STANDARD_NUMBER_OF_SAMPLES; index++)
    {
        Temperature_Sensor_Readings[index] = rand() % 100;
        State_Of_Charge[index] = rand() % 10;
    }
    CallSender(Temperature_Sensor_Readings, State_Of_Charge);
    REQUIRE(TestSenderOutput(Temperature_Sensor_Readings, State_Of_Charge) == true);
}