#include<iostream>
#include<iomanip>

int main(){

    //Declare and initialize the variable 
    float number1 = {1.12345678901234567890f}; //precision : 7
    double number2 = {1.12345678901234567890}; //precision : 15
    long double number3 = {1.12345678901234567890L}; 

    std::cout << "sizeof(float) :" << sizeof(number1) << std::endl;
    std::cout << "sizeof(double) :" << sizeof(number2) << std::endl;
    std::cout << "sizeof(long_double) :" << sizeof(number3) << std::endl;

    //Precision
    std::cout << std::setprecision(20); /* controlling the precision my <iomanip> */
    std::cout << "number1 is : " << number1 << std::endl;
    std::cout << "number2 is : " << number2 << std::endl;
    std::cout << "number3 is : " << number3 << std::endl;

    /* float problems : the precision is ususally too limited */
    float number4 {192400023.0f}; //Error : narrowing conversion
    std::cout << "number4 : " << number4 << std::endl;

    double number5 {192400023.0};
    std::cout << "number5 : " << number5 << std::endl;

    double number6 {1.92400023e8}; // number multiplied by 10^8
    double number7 {1.924e8};
    double number8 {0.0000000000348};
    double number9 {3.498e-11}; // multiply expression with 10 exp(-11)

    std::cout << "number5 : " << number6 << std::endl;
    std::cout << "number6 : " << number7 << std::endl;
    std::cout << "number7 : " << number8 << std::endl;
    std::cout << "number8 : " << number9 << std::endl;

    double number10 {5.6};
    double number11 {}; //Initialized to zero
    double number12 {}; //Initialized to zero
    double number13 {-5.6};

    //Infinity 
    double result { number10 / number11 };

    std::cout << number10 << "/" << number11 << " yeilds " << result << std::endl;
    std::cout << result << "+" << number10 << " yeilds " << result + number10 << std::endl;
    std::cout << number11 << "/" << number12 << " yeilds " << number11/number12 << std::endl;
    std::cout << number13 << "/" << number11 << " yeilds " << number13/number11 << std::endl;
    
    return 0;
}

/*  output 
    sizeof(float) :4
    sizeof(double) :8
    sizeof(long_double) :16
    number1 is : 1.1234568357467651367
    number2 is : 1.1234567890123456912
    number3 is : 1.1234567890123456789
    number4 : 192400016
    number5 : 192400023
    number5 : 192400023
    number6 : 192400000
    number7 : 3.4799999999999998735e-11
    number8 : 3.4979999999999998372e-11
    5.5999999999999996447/0 yeilds inf
    inf+5.5999999999999996447 yeilds inf
    0/0 yeilds nan
    -5.5999999999999996447/0 yeilds -inf
*/