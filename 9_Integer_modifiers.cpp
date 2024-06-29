#include<iostream>
int main(){
    /* signed and unsigned modifiers */
    /* unsigned  [0 ~ 2^n -1]
       signed [-2^n-1 ~ 2^n-1 - 1] */

    // signed int val1 {10};
    // signed int val2 {-20};
    // std::cout << val1 << std::endl << val2 << std::endl;



    short short_var {-32768}; //2bytes
    short int short_int {455};
    signed short signed_short {122};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};
    std::cout<< "sizeof(short_var) : "<< sizeof(short_var) << std::endl;
    std::cout<< "sizeof(short_int) : "<< sizeof(short_int) << std::endl;
    std::cout<< "sizeof(signed_short) : "<< sizeof(signed_short) << std::endl;
    std::cout<< "sizeof(signed_short_int) : "<< sizeof(signed_short_int) << std::endl;
    std::cout<< "sizeof(unsigned_short_int) : "<< sizeof(unsigned_short_int) << std::endl << std::endl;

    int int_var {55}; //4bytes
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int {77};

    std::cout<< "sizeof(int_var) : " << sizeof(int_var) << std::endl;
    std::cout<< "sizeof(signed_var) : " << sizeof(signed_var) << std::endl;
    std::cout<< "sizeof(signed_int) : " << sizeof(signed_var) << std::endl;
    std::cout<< "sizeof(unsigned_var) : " << sizeof(unsigned_int) << std::endl << std::endl;

    long long_var {88}; // 4 or 8 bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int{44};

    std::cout<< "sizeof(long_var) : "<< sizeof(long_var) << std::endl;
    std::cout<< "sizeof(long_int) : "<< sizeof(long_int) << std::endl;
    std::cout<< "sizeof(signed_long) : "<< sizeof(signed_long) << std::endl;
    std::cout<< "sizeof(signed_long_int) : "<< sizeof(signed_long_int) << std::endl;
    std::cout<< "sizeof(unsigned_long_int) : "<< sizeof(unsigned_long_int) << std::endl << std::endl;

    long long long_long {888};// 8 bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int {1234}; 
    unsigned long long int unsigned_long_long_int {1234};

    std::cout<< "sizeof(long_long) : "<< sizeof(long_long) << std::endl;
    std::cout<< "sizeof(long_long_int) : "<< sizeof(long_long_int) << std::endl;
    std::cout<< "sizeof(signed_long_int) : "<< sizeof(signed_long_int) << std::endl;
    std::cout<< "sizeof(signed_long_long_int) : "<< sizeof(signed_long_long_int) << std::endl;
    std::cout<< "sizeof(un`signed_long_long_int) : "<< sizeof(unsigned_long_long_int) << std::endl;

    return 0;
}

/*  Output : 

    sizeof(short_var) : 2
    sizeof(short_int) : 2
    sizeof(signed_short) : 2
    sizeof(signed_short_int) : 2
    sizeof(unsigned_short_int) : 2

    sizeof(int_var) : 4
    sizeof(signed_var) : 4
    sizeof(signed_int) : 4
    sizeof(unsigned_var) : 4

    sizeof(long_var) : 4
    sizeof(long_int) : 4
    sizeof(signed_long) : 4
    sizeof(signed_long_int) : 4
    sizeof(unsigned_long_int) : 4

    sizeof(long_long) : 8
    sizeof(long_long_int) : 8
    sizeof(signed_long_int) : 4
    sizeof(signed_long_long_int) : 8
    sizeof(un`signed_long_long_int) : 8

*/