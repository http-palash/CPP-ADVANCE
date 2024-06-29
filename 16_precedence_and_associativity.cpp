#include<iostream>

int main(){

    /*
        Precedence : which operation to do first 
        Associativity : which direction or which order 
    */

    // precedence of * / % is higher than for + and - 
    // associativity of addition and subtraction is from left to right 

    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    int result = a + b * c - d / e - f + g;
    /*          
                 6 + 3 * 8 - 9 / 3 - 2 + 5
                 6 + 24 - 3 - 2 + 5
                 30 
    */
    
    std::cout << "result : " << result << std::endl;

    result = a/b* c + d - e + f;

    // if wants multiplication first 
    
    auto result2 = a/(b* c) + d - e + f;
    
    /*       
            6/3*8 + 9 - 3 + 2   
            2*8   + 9 - 3 + 2 
            16 + 9 - 3 + 2
            25 - 3 + 2
            24 
    */ 

    std::cout << "result : " << result << std::endl;        
    std::cout << "result2 : " << result2 << std::endl;        

    result =  (a+b) * c -d/e -f + g; 
    /*        (6+3) * 8 -9/3 -2 + 5; */
    std::cout << "result : " << result << std::endl;
    return 0;
}

/*  Output :

    result : 30
    result : 24

*/