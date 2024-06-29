#include<iostream>
int main(){
    int number1 {45};
    int number2 {60};

    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;

    std::cout << "Comparing variables : " << std::endl;
    std::cout << std::boolalpha; 

    //Stress the need of  paranthesis here brecause bitwise << >> left and right shift operator has higher precedence
    std::cout << number1 << " <  " << number2 << " : " << (number1 < number2) << std::endl;
    std::cout << number1 << " <= " << number2 << " : " << (number1 <= number2) << std::endl;
    std::cout << number1 << " >  " << number2 << " : " << (number1 > number2) << std::endl;
    std::cout << number1 << " >= " << number2 <<  " : " << (number1 >= number2) << std::endl;
    std::cout << number1 << " == " << number2 <<  " : " << (number1 == number2) << std::endl;
    std::cout << number1 << " != " << number2 <<  " : " << (number1 != number2) << std::endl;
    int v  = 5;
    std::cout<< (v<<1);

    
    return 0;
}