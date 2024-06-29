#include<iostream>
int main(){
    int value(5);
    std::cout << "value++ : " << value++ << std::endl; // postfix increment operator
    std::cout << "value   : " << value << std::endl;
    std::cout << "value-- : " << value-- << std::endl;  // post decrement
    std::cout << "value   : " << value << std::endl;
    std::cout << "--value : " << --value << std::endl;  // prefix decrement operator
    std::cout << "value   : " << value << std::endl;
    std::cout << "++value : " << ++value << std::endl;  // prefix increment operator
    std::cout << "value   : " << value << std::endl;

    return 0;
}