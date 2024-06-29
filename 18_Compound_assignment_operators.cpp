#include<iostream>
int main(){
    // this operator allows arithmetic operations and assign the result to a value in one go 
    int value {5};
    std::cout << value;
    // value += value;
    // value *= value;
    // value -= value;
    // value /= value;
    // value %= value;

    //Stress the need of  paranthesis here brecause bitwise << >> left and right shift operator has higher precedence
    std::cout << value <<"  += " << value <<  "    = " << (value+=value) << std::endl;
    std::cout << value <<"  *= " << value  << "   = " << (value *= value) <<std::endl;
    std::cout << value <<"  -= " << value  << " = " << (value -= value) <<std::endl;
    std::cout << value <<"  /= " << value  << "     = " << (value /= value) <<std::endl;
    std::cout << value <<"  %= " << value  << "     = " << (value %= value) <<std::endl;

    return 0;
}