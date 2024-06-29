#include<iostream>
int main(){
    int a = 31/10;
    // Addition;
    int number1{2};
    int number2{3};

    int result = number1 + number2;
    std::cout << "result : " << result << std::endl;
    
    number1 = 4;
    number2 = 5;
    result = number1 - number2;
    std::cout << "result : " << result << std::endl;
   
    number1 = 4;
    number2 = 5;
    result = number1 * number2;
    std::cout << "result : " << result << std::endl;

    number1 = 4;
    number2 = 5;
    float res = static_cast<float>(number1) / static_cast<float>(number2);
    std::cout << "result : " << res << std::endl;

    number1 = 40;
    number2 = 20;
    int res = number1 % number2;
    std::cout << "result : " << res << std::endl;
        

    return 0;
}