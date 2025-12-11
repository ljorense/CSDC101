#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int numbers[4];
   
    for(int i = 0; i < 4; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    
       int last = numbers[3];;
       numbers[3] = numbers[2];
       numbers[2] = numbers[1];
       numbers[1] = numbers[0];
       numbers[0] = last;
        
       
    cout << "After rotation: "; 
    for(int i = 0; i < 4; i++){
        cout << numbers[i] << " ";
    }
    
    
    
    return 0;
}