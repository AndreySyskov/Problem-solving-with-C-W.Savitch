#include <gtest/gtest.h>
#include "imperial_metric.h" // Убедитесь, что этот заголовочный файл включен правильно

// Тестовая функция для foot_and_inc_to_meter_and_centimeter
TEST(ConversionTest, FeetInchesToMetersCentimeters) {
    int meters, centimeters;

    // Тест 1: 1 фут и 1 дюймов
    int feet1 = 1;
    int inches1 = 1;
     foot_and_inc_to_meter_and_centimeter(feet1, inches1, meters, centimeters);
    EXPECT_EQ(meters, 0);
    EXPECT_EQ(centimeters, 33);  // 

    // Тест 2: 3 фута и 12 дюймов 
    int feet2 = 3;
    int inches2 = 12;
     foot_and_inc_to_meter_and_centimeter(feet2, inches2, meters, centimeters);
    EXPECT_EQ(meters, 1);      // 1.2192 метра, целое значение 1
    EXPECT_EQ(centimeters, 21); // 1.2192 метра = 121.92 сантиметра, целое значение 21

    // Тест 3: 0 футов и 0 дюймов
    int feet3 = 0;
    int inches3 = 0;
    foot_and_inc_to_meter_and_centimeter(feet3, inches3, meters, centimeters);
    EXPECT_EQ(meters, 0);
    EXPECT_EQ(centimeters, 0); // 0 футов и 0 дюймов = 0 метров и 0 сантиметров

    // Тест 4: 5 футов и 8 дюймов
    int feet4 = 5;
    int inches4 = 8;
     foot_and_inc_to_meter_and_centimeter(feet4, inches4, meters, centimeters);
    EXPECT_EQ(meters, 1);      // 1.7272 метра = 172.72 сантиметра, целое значение 72
    EXPECT_EQ(centimeters, 72);
    
}

TEST(MetersToInchesTest, BasicConversions) {
    int meters, centimeters, feet, inches;

    // Пример 1: 1 метр 0 сантиметров
    meters = 1;
    centimeters = 0;
    meter_and_centimeter_to_feet_and_inches(meters, centimeters, feet, inches);
    EXPECT_EQ(feet, 3);
    EXPECT_EQ(inches, 3);

    // Пример 2: 0 метров 100 сантиметров
    meters = 0;
    centimeters = 100;
    meter_and_centimeter_to_feet_and_inches(meters, centimeters, feet, inches);
    EXPECT_EQ(feet, 3);
    EXPECT_EQ(inches, 3);

    // Пример 3: 0 метров 0 сантиметров
    meters = 0;
    centimeters = 0;
    meter_and_centimeter_to_feet_and_inches(meters, centimeters, feet, inches);
    EXPECT_EQ(feet, 0);
    EXPECT_EQ(inches, 0);

    // Пример 4: 2 метра 54 сантиметра (это 8 футов 4 дюйма)
    meters = 2;
    centimeters = 54;
    meter_and_centimeter_to_feet_and_inches(meters, centimeters, feet, inches);
    EXPECT_EQ(feet, 8);
    EXPECT_EQ(inches, 4);
}
/*
TEST(WeightConversionTest, PoundsAndOuncesToKilogramsAndGrams) {
    int pounds = 5;
    int ounces = 8;
    int kilograms = 0;
    int grams = 0;
    
    pounds_and_ounces_to_kilograms_and_grams(pounds, ounces, kilograms, grams);
    
    EXPECT_EQ(kilograms, 2);   // Примерный результат: 5 фунтов и 8 унций = 2.53 кг
    EXPECT_EQ(grams, 530);      // Чтобы округлить в граммах
}
*/
/*
TEST(WeightConversionTest, KilogramsAndGramsToPoundsAndOunces) {
    int kilograms = 2;
    int grams = 530;
    int pounds = 0;
    int ounces = 0;
    
    kilograms_and_grams_to_pounds_and_ounces(kilograms, grams, pounds, ounces);
    
    EXPECT_EQ(pounds, 5);       // Ожидаем 5 фунтов
    EXPECT_EQ(ounces, 8);       // Ожидаем 8 унций
    
}
*/

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
