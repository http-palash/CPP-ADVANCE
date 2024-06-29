#include<iostream>
int main(){

    /* variable is named piece of memeory that we can use to store data */
    int elephant_cout;

    /* functional variable initialization */
    int dog_count(10); //Intializes to 10
    int cat_count(15); //Initializes to 15
    int apple_count(5); //functional variable initialization 
    std::cout << "value of dog_count " << dog_count << std::endl;
    std::cout << "value of cat_count " << cat_count << std::endl;
    std::cout << "value of apple_count " << apple_count << std::endl;

    /* Braced initialization */

    int lion_count{}; // intializes zero
    std::cout << "value of lion_count " << lion_count << std::endl;
    int domesticated_animals { dog_count + cat_count }; // can use expression as initializer
    std::cout << "value of domesticated animals " << domesticated_animals << std::endl;
    // int bad_initialization { doesnt_exist1 + doesnt_exist2 }; // Wont compile the expression in the braces used undeclared variable 
    // int narrowing_conversion {2.9}; // Wont compile 
    int narrowing_con (2.9); // Informationn loss less safe than braced initializer
    std::cout << "value of narrowing_conversion " << narrowing_con << std::endl; // loss

    /* Assignment initialization */

    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;



    //Size of a type of memory
    std::cout<< "sizeof int : " << sizeof(int) << " Bytes" << std::endl;
    std::cout<< "sizeof truck_count : " << sizeof(truck_count) << std::endl;

    /*
     variable rules
     case sensitive
     must start with a - z or _ underscore
     no space or special chars are allowed
     typename variable_name {intializer_value};
    */

    return 0;
}

/*  Output :
  
    value of dog_count 10
    value of cat_count 15
    value of apple_count 5
    value of lion_count 0
    value of domesticated animals 25
    value of narrowing_conversion 2
    sizeof int : 4 Bytes
    sizeof truck_count : 4

*/