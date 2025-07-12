#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to my C++ journey!"<<endl;
    cout << "My name is Kuber Kanav\n";
    cout << "I am a beginner programmer\n";
    cout << "Today I learned about:\n";
    cout <<"- Compiling programs\n" <<"- Running programs\n" << "- Multiple line output\n" << endl;

        cout<< "Enter your age:";
        int a{};
            std::cin >>a;
            cout <<"You are "<< a<<" years old.\n";

        
        float first{}, second{};
        cout<<"Enter the first number you want to multiply: ";
        cin>>first;
        cout<<"Enter the second number you want to multiply: ";
        cin>>second;
        cout<<"The product of these two numbers is: "<< first*second <<".\n";
    
    return 0;
}