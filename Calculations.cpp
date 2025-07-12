#include <iostream>


int main() {

    float x{};

    std::cout<<"Enter the number you want to double: ";
    std::cin>>x;
    std::cout<<x<<" after doubling gives the value: ";
    std::cout<<x*2<<std::endl;
    std::cout<<"Trippling the number gives us: "<<x*3<<"\n";

    float y{},z{};
    std::cout<<"Enter a number: ";
    std::cin>>y;
    std::cout<<"Enter another number: ";
    std::cin>>z;
    std::cout<<"The sum of "<<y<<" and "<<z<<" is: "<<y+z<<".\n";
    std::cout<<"Subtracting "<<z<<" from "<<y<<" gives us: "<<y-z<<".\n";
    
    return 0;
}