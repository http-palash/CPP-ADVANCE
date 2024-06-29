#include<iostream>

int main(){

    bool red_light {true};
    bool green_light {false};
    
    if(red_light == true){
        std::cout << "Stop" << std::endl;
    }else{
        std::cout << "Go through" << std::endl;
    }
    
    if(green_light == true){
        std::cout << "The light is green" << std::endl;
    }else{
        std::cout << "The light is not green" << std::endl;
    }

    /* 
      Printing a bool 
      1 -->> true
      0 -->> false 
      Occupies 1 byte of memory
    */
    
    std::cout << std::endl;
    std::cout << "red light : " << red_light << std::endl;
    std::cout << "green light : " << green_light << std::endl;


    return 0;
}
 
/*  Output : 

    Stop
    The light is not green

    red light : 1
    green light : 0

*/