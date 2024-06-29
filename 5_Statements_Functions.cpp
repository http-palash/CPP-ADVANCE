/* Statements is a basic unit of computation in a CPP program */
/* Every cpp program is a collection of statements organized in a certain way to achieve some goal */
/* Statements end with a semicolon in C++ [;] */

#include<iostream>

int addNumbers(int fnum,int snum){
    int sum =  fnum + snum;
    return sum;
}

int main(){
    // int fisrtNumber = 4;
    // int secondNumber = 5;
    int firstNumber {3};
    int secondNumber {4};
    int sum = firstNumber + secondNumber;
    std::cout << "Sum is  : " << sum << std::endl ; 
    // sum = addNumbers({34},{6});
    std::cout << "Sum of 34 and 6 is : " <<  addNumbers(34,6); ;

    return 0;
}

/*  Output : 

    Sum is  : 7
    Sum of 34 and 6 is : 40 
    
*/
