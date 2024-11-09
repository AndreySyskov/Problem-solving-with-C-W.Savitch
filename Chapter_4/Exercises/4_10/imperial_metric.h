#ifndef IMPERIAL_METRIC
#define IMPERIAL_METRIC

void foot_and_inc_to_meter_and_centimeter (int& feet, int& inches, int& meters, int& centimeters);
// Функция для перевода футов и дюймов в метры и сантиметры
// Предусловие: переменные feet, inches, meters, centimeters созданы
// Постусловие: в переменные meters и centimeters переданы значения

void meter_and_centimeter_to_feet_and_inches(int& meters, int& centimeters, int& feet, int& inches);

void pounds_and_ounces_to_kilograms_and_grams(int& pounds, int& ounces, int& kilograms, int& grams);

void kilograms_and_grams_to_pounds_and_ounces(int& kilograms, int& grams, int& pounds, int& ounces);

#endif // IMPERIAL_METRIC