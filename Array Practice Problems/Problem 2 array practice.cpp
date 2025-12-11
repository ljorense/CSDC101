#include <iostream>
using namespace std;

int main() {
    
    int numbers[4];
    int sum = 0;
    double mean = 0;
    
    for(int i = 0; i < 4 ; i++){
        cout << "Enter number " << i + 1 << ": "; 
        cin >> numbers[i];
    }

    for(int i = 0; i < 4 ; i++){
        sum = sum + numbers[i];
    }
    
    mean = sum / 4.0; 
    
    cout << "Mean is = " << mean << endl;

    return 0;
}
