#include<iostream>
int main(){

    //uppercase and nouppercase
    int pos_int = 717171;
    std::cout << "pos_int (nouppercase : default) : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    
    std::cout << std::endl;
    std::cout << "pos_int (uppercase) : " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    
    return 0;
}


/*  Output : 

    pos_int (nouppercase : default) : 
    pos_int (dec) : 717171
    pos_int (hex) : af173
    pos_int (oct) : 2570563

    pos_int (uppercase) : 
    pos_int (dec) : 717171
    pos_int (hex) : AF173
    pos_int (oct) : 2570563
    
*/