#include <iostream>
#include <string>


//this is a function to get input value from user. But as the message can be different, to perform that function we use 'const std::string& prompt' as parameter
//you have to include <string> header to access std::string. const is for keeping the value constand and not changing it. 
// & is for reference that means you can refer to the value instead of storing it every time. 
//prompt is simply the parameter than you can change - string that you can type as needed

float getValueFromUser(const std::string& prompt){
    
    float value{};
    std::cout<<prompt;
    std::cin>>value;
    
    return value;
}



float add(float val1, float val2){

    //function to add two numbers that takes two variables and returns added value

    return val1+val2;
}

int main(){

    //We will use funcitons and function calls to make the programs scale

    //getting two values by using the same function defined above but now we can enter a string that we want to display as parameter
    //This way you can reuse the function any number of times with different messages. Otherwise you will have to define different function for different texts.

    float v1{getValueFromUser("Enter first value: ")};
    float v2{getValueFromUser("Enter second value: ")};

    std::cout<<"Adding these two numbers gives you: ";
    std::cout<<add(v1, v2);
    
    return 0;
}

//functions can't be nested in C++