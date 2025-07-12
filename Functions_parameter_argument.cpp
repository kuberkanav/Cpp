#include <iostream>


//This fucntion asks the user for an input and then returns it to the caller.
double getUserInput()
{
    double input;
    std::cout<<"Enter a number: ";
    std::cin>>input;

    return input;

}

//This function doubles the number entered by the user. It uses a double datatype variable x as parameter. 
double doubleNumber(double x)
{

    return x * 2;

}

//Here we call the unserInput function and store the returned value to "num" variable.
//Then we call the function doubleNumber with the argument "num" which stores the user input value.
//This function then returns us the double value of user's input
int main()
{

    double num = getUserInput();
 
    std::cout<<"The double of the number provided is: "<<doubleNumber(num)<<std::endl;

return 0;
}