#include<iostream>
int main(){
    std::cout << "1.Compile time \n2.Runtime \n3.Warnings" << std::endl;
    std::cout << "Compile time : forget semicolons binary executable not generated here" << std::endl;    
    std::cout << "std::cout << \"HEllo World\"" << std::endl ; 
    std::cout << "Runtime : 7/0 Compilation completed but program executable\nnot going to do what you intended or program crashed it can be logical error" << std::endl;
    std::cout << "Warnings : warning when divide by zero on IDE ";
    return 0;
}

/*  Output : 

    1.Compile time 
    2.Runtime 
    3.Warnings
    Compile time : forget semicolons binary executable not generated here
    std::cout << "HEllo World"
    Runtime : 7/0 Compilation completed but program executable
    not going to do what you intended or program crashed it can be logical error
    Warnings : warning when divide by zero on IDE 

*/