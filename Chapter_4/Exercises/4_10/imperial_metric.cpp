#include "imperial_metric.h"

const double FOOT_TO_METER = 0.3048;
const double INCH_TO_METER = 0.0254;

const double POUND_TO_KILOGRAM = 0.453592;
const double OUNCE_TO_KILOGRAM = 0.0283495;

const double KILOGRAM_TO_POUND = 2.20462;
const double GRAM_TO_OUNCE = 0.035274;


void foot_and_inc_to_meter_and_centimeter (int& feet, int& inches, int& meters, int& centimeters){
   
    double temp_meters = 0, temp_centimeters = 0;
    temp_meters = (static_cast<double>(feet) * FOOT_TO_METER) + (static_cast<double>(inches) * INCH_TO_METER);
    temp_centimeters = temp_meters*100;

    meters = static_cast<int>(temp_meters); 
    centimeters = static_cast<int>(temp_centimeters)%100; 
}

void meter_and_centimeter_to_feet_and_inches(int& meters, int& centimeters, int& feet, int& inches) {
    double total_meters = static_cast<double>(meters) + (static_cast<double>(centimeters) / 100.0);
    double total_inches = total_meters / INCH_TO_METER;
    feet = static_cast<int>(total_inches) / 12;
    inches = static_cast<int>(total_inches) % 12;

}

void pounds_and_ounces_to_kilograms_and_grams(int& pounds, int& ounces, int& kilograms, int& grams) {
/*
    double total_kilograms = (static_cast<double>(pounds) * POUND_TO_KILOGRAM) + (static_cast<double>(ounces) * OUNCE_TO_KILOGRAM);
    kilograms = static_cast<int>(total_kilograms);
    grams = static_cast<int>((total_kilograms - kilograms) * 1000);
*/
kilograms=100;
grams=100;
}

void kilograms_and_grams_to_pounds_and_ounces(int& kilograms, int& grams, int& pounds, int& ounces) {
/*
    double total_kilograms = static_cast<double>(kilograms) + (static_cast<double>(grams) / 1000.0);
    double total_pounds = total_kilograms / POUND_TO_KILOGRAM;
    pounds = static_cast<int>(total_pounds);
    ounces = static_cast<int>((total_pounds - pounds) * 16);
*/
pounds = 200;
ounces = 200;
}
