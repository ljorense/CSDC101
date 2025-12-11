#include <iostream>
using namespace std;

int main() {
    
    int numbers[6];


    for(int i = 0; i < 6; i++){
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    
    
    int minimum = numbers[0];
    int maximum = numbers[0];
    int sum = 0;
    int even = 0;
    int odd = 0;
    
    
    for(int i = 0; i < 6; i++){
        sum = sum + numbers[i];
    
        if(numbers[i] < minimum){
            minimum = numbers[i];
        }
        
        if(numbers[i] > maximum){
            maximum = numbers[i];
        }
        
        if(numbers[i] % 2 == 0){
            even++;
        }
            else{
            odd++;
            }
    }
    
    cout << "Minimum: " << minimum << endl; 
    cout << "Maximum: " << maximum << endl; 
    cout << "Sum: " << sum << endl;
    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;
    
    return 0;
}
