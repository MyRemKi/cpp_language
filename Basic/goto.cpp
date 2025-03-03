#include <iostream>

int main(){
    int number=0;
    
    instructions:
        number++;
    
    if(number<10){
        goto instructions;
    }
    
    return 0;
}
