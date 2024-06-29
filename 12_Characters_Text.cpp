#include<iostream>

int main(){


    // character Occupies one byte inn memory 2^8 = 256 different values ( 0 ~ 256 )
    char character1 {'a'};
    char character2 {'b'};
    char character3 {'c'};
    char character4 {'d'};
    char character5 {'e'};
    char character6 {'f'};

    std::cout<< character1 << std::endl;
    std::cout<< character2 << std::endl;
    std::cout<< character3 << std::endl;
    std::cout<< character4 << std::endl;
    std::cout<< character5 << std::endl;

    // Printing name using ascii codes 
    char first_letter =  80;  // 97-122 small a-z
    char second_letter = 65;  // 65-90 capital A-Z
    char third_letter = 76;
    char fourth_letter =  65;
    char fifth_letter =  83;
    char sixth_letter =  72;
    std::cout<<"Name is : " << first_letter << second_letter << third_letter << fourth_letter << fifth_letter << sixth_letter << std::endl;
    /* Or use static cast to convert int value to char value */
    std::cout<<"Name is : " << static_cast<char>(80) << static_cast<char>(65) << static_cast<char>(76) << static_cast<char>(65)<<static_cast<char>(83) << static_cast<char>(72);
    return 0;
}

/*  Output: 


*/