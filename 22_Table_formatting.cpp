#include<iostream>
#include<iomanip>
int main(){
    //std::setw() : Adjusts the field with for the item about to be printed. 
    //The setw() manipulator only affects the next value to be printed.
    
    std::cout << "\n\nUnformatted table : " << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Stanley" <<" "  << "Woods" << " 33" << std::endl;
    std::cout << "Jordan" << " "  << "Parker" << " 45" << std::endl;
    std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
    std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;
    
    std::cout << std::endl;
    std::cout << "Formatted table : " << std::endl;
    
    std::cout << std::setw(10) <<  "Lastname"  << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel"  << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10)  << "Woods" << std::setw(5) <<  "33" << std::endl;
    std::cout << std::setw(10) <<  "Jordan" << std::setw(10)  << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(10) <<  "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) <<"27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;
    
    std::cout << std::endl;
    std::cout << "Formatted table with variables: " << std::endl;
    
    int col_width{14};
    
    
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;
    
    
    
    //===================================================================
    std::cout << std::endl;

    //Justify : Values can be justified in their fields. There are three manipulators
    //          for adjusting the justification: left, right, and internal. 
    
    //right justified
    std::cout << std::endl;
    std::cout << "Right justified table(default) :  " << std::endl;
    
    col_width = 20;
    
    std::cout << std::right;
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;
    


    //Left justified
    std::cout << std::endl;
    std::cout << "Left justified table :  " << std::endl;
    
    col_width = 20;
    
    std::cout << std::left;
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;
    

    //Internal justified : sign is left justified , data is right justified
    std::cout << std::endl;
    std::cout << "Internal justified : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;
    
    //===================================================================
    std::cout << std::endl;

    //setfill
    
    std::cout << std::endl;
    std::cout << "Table with fill characters :  " << std::endl;
    
    
    col_width = 20;
    
    std::cout << std::left;
    std::cout << std::setfill('*'); // The fill character
    std::cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    std::cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    std::cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;
    
    return 0;
}