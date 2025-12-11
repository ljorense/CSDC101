#include <iostream>
using namespace std;

int main() {
    
    int numbers[5];
    
    for(int i = 0; i < 5; i++){
        cout << "Enter numbers " << i + 1 << ": ";
        cin >> numbers[i];
    }
        
        if(numbers[0] <= numbers[1] && numbers[1] <= numbers[2] && numbers[2] <= numbers[3] <= numbers[4]){
            cout << "The array is in ascending order.";
        } else{ 
            cout << "The array is not in ascending order.";
        }
        
    
    return 0;
}
