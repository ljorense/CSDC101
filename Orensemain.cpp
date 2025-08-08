#include <iostream>//input and output library
using namespace std;

int main (){
    
    int num1, num2, product;//variables
    
    cout    << "Enter a number: ";  //number to be input 
    cin     >> num1;                // the number input of the user
    cout    << "Enter another number: ";//another number to be input
    cin     >> num2;// another number input of the user
    product     = num1 * num2;// the added value of num1 and num2
    cout    << "The sum of the two numbers is: " <<product;//the output shown 
    
    
    return 0;

}
