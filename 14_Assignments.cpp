#include<iostream>
int main(){
    int var1{123}; // Declare and initialize
    std::cout << "int var1 : " << var1 << std::endl;

    var1 = 55; // Assign
    std::cout << "int var1 : " << var1 << std::endl; 

    double var2 {44.55}; //Declare and initialize
    std::cout << "double var2 : " << var2 << std::endl;

    var2 = 99.99; //Assign 
    std::cout << "double  var2 : " << var2 << std::endl;

    bool state{false}; //declare and initialize
    std::cout<<std::boolalpha;
    std::cout << "State bool: " << state << std::endl;

    state = true; //Assign
    std::cout << "State  bool : " << state << std::endl;

    // Careful about auto assignments
    auto var3 {333u}; // Declare and initialize with type deduction
    var3 = -22; // Assigning negative numbere here can cause a disaster

    std::cout <<"var3 auto unsigned : "<< var3 << std::endl;
    return 0;
}

/*  Output: 

    int var1 : 123
    int var1 : 55
    double var2 : 44.55
    double  var2 : 99.99
    State bool: false
    State  bool : true
    var3 auto unsigned : 4294967274

*/