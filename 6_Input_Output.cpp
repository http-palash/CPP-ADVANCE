#include<iostream>
#include<string>

int main(){

    /*   
       stream           purpose
       std::cout        printing data to the console(terminal)
       std::cin         Reading data from the terminal
       std:::cerr       printing errors to connsole
       std::clog        printing log messages to the console 

    */

    std::cout << "Hello C++20 " << std::endl;
    int age{21};
    std::cout << "Age : " << age << std::endl;

    std::cerr << "Error message : Something is wrong" << std::endl;
    std::clog << "Log message : something happened" << std::endl;

    // int age1;
    std::string name;

    // std::cout << "Please type your name and age : "<< std::endl;
    // std::cin >> name;
    // std::cin >> age;
    // std::cin >> name >> age1;
    /* but this both not allowed to input full name with space */
    /* Solution */
    std::string full_name;
    std::cout << "Enter full name and age : "<< std::endl; 
    std::getline(std::cin,full_name);
    std::cin >> age;
    std::cout<< "Hello your name is " << name << "and age is "<< age <<std::endl;
    // std::cout<<"Full name is " << full_name << std::endl;

    return 0;
}

/*  Output : 

    Hello C++20 
    Age : 21
    Error message : Something is wrong
    Log message : something happened
    Enter full name and age : 
    Palash Bajpai
    20
    Hello your name is and age is 20

*/