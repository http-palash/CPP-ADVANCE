#include<iostream>
int main(){
    bool a {true};
    bool b {false};
    bool c {true};

    std::cout << std::boolalpha;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    /* 
      AND : evaluates to true when all operands are true a single false operand will
      drag the entire expression to evaluating false 
    */

    std::cout << std::endl;

    /*AND operator evaluates to true only when both operands are true*/
    /*AND operator evaluates to false when if any of operands are false*/
    std::cout << "Basic AND operations : " << std::endl;
    std::cout << " a && b : " << (a && b) << std::endl;
    std::cout << " a && c : " << (a && b) << std::endl;
    std::cout << " a && b && c : " << (a && b && c) << std::endl<<std::endl;

    /*OR operator evaluates to true only if any operands are true*/
    /*AND operator evaluates to false only when both operands are false*/
    std::cout << "Basic OR operations : " << std::endl;
    std::cout << " a || b : " << (a || b) << std::endl;
    std::cout << " a || c : " << (a || b) << std::endl;
    std::cout << " a || b && c : " << (a || b || c) << std::endl << std::endl;

    /*Not operator : */
    std::cout<< " !a : " << !a << std::endl;
    std::cout<< " !b : " << !b << std::endl;
    std::cout<< " !c : " << !c << std::endl;
    
    std::cout << "Combined logical operations in expressions : " << std::endl;
    std::cout << "!(a && b) || c : " << (!(a && b) || c) << std ::endl;

    bool d = 40;
    bool e = 5;
    bool f = 6;

    std::cout << "(d > e) || (d > f) : \t" << ((d > e) || (d > f)) << std::endl;
    std::cout << "(d == e) || (e <= f) : \t" << ((d == e) && (e <= f)) << std::endl;
    std::cout << "(d < e) || (d > f) : \t" << ((d < e) && (d > f)) << std::endl;
    std::cout << "(f > e) || (d < f) : \t" << ((f > e) && (d < f)) << std::endl;
    std::cout << "(d > f) || (f <=d ) : \t" << ((d > f) && (f <= d)) << std::endl;
    std::cout << "(d > e) || (d <= f ) : \t" << ((d > e) && (d <= f)) << std::endl;
    std::cout << "(!a) && (d == e ) : \t" << ((!a) && (d == e )) << std::endl;
    return 0;
}